
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_openres {int rflags; } ;
struct nfs4_opendata {int f_attr; int rpc_done; struct nfs_openres o_res; TYPE_1__* dir; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct nfs4_opendata*) ;
 int FUNC_2 (struct nfs4_opendata*,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct nfs4_opendata *VAR_1)
{
 struct inode *VAR_2 = VAR_1->dir->d_inode;
 struct nfs_openres *VAR_3 = &VAR_1->o_res;
        int VAR_4;

 VAR_4 = FUNC_2(VAR_1, 1);
 if (VAR_4 != 0 || !VAR_1->rpc_done)
  return VAR_4;

 FUNC_3(FUNC_0(VAR_2), &VAR_1->f_attr);

 if (VAR_3->rflags & VAR_0) {
  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4 != 0)
   return VAR_4;
 }

 return VAR_4;
}
