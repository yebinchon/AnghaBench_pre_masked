
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct TYPE_8__ {TYPE_1__ d_name; } ;
struct TYPE_6__ {TYPE_4__* dentry; } ;
struct TYPE_7__ {TYPE_2__ f_path; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (char*,int ) ;
 TYPE_3__* VAR_1 ;

int
FUNC_2(void) {
 int VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_0(VAR_1->f_path.dentry, VAR_0);
 if (VAR_2)
  FUNC_1("nfsd4: failed loading clients from recovery"
   " directory %s\n", VAR_1->f_path.dentry->d_name.name);
 return VAR_2;
}
