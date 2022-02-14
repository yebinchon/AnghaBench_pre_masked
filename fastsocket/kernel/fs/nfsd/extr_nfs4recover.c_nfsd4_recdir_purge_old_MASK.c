
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
struct TYPE_10__ {TYPE_1__ d_name; } ;
struct TYPE_8__ {TYPE_4__* dentry; int mnt; } ;
struct TYPE_9__ {TYPE_2__ f_path; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,int ) ;

void
FUNC_5(void) {
 int VAR_2;

 if (!VAR_1)
  return;
 VAR_2 = FUNC_1(VAR_1->f_path.mnt);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_2(VAR_1->f_path.dentry, VAR_0);
 if (VAR_2 == 0)
  FUNC_4(VAR_1, VAR_1->f_path.dentry, 0);
 FUNC_0(VAR_1->f_path.mnt);
out:
 if (VAR_2)
  FUNC_3("nfsd4: failed to purge old clients from recovery"
   " directory %s\n", VAR_1->f_path.dentry->d_name.name);
}
