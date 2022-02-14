
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs4_client {int cl_recdir; scalar_t__ cl_firststate; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {int mnt; int dentry; } ;
struct TYPE_5__ {TYPE_1__ f_path; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cred const*) ;
 int FUNC_3 (struct cred const**) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__,int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;

void
FUNC_7(struct nfs4_client *VAR_2)
{
 const struct cred *VAR_3;
 int VAR_4;

 if (!VAR_1 || !VAR_2->cl_firststate)
  return;

 VAR_4 = FUNC_1(VAR_1->f_path.mnt);
 if (VAR_4)
  goto out;
 VAR_2->cl_firststate = 0;

 VAR_4 = FUNC_3(&VAR_3);
 if (VAR_4 < 0)
  goto out;

 VAR_4 = FUNC_4(VAR_2->cl_recdir, VAR_0-1);
 FUNC_2(VAR_3);
 if (VAR_4 == 0)
  FUNC_6(VAR_1, VAR_1->f_path.dentry, 0);
 FUNC_0(VAR_1->f_path.mnt);
out:
 if (VAR_4)
  FUNC_5("NFSD: Failed to remove expired client state directory"
    " %.*s\n", VAR_0, VAR_2->cl_recdir);
 return;
}
