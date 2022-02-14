
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {int caps; } ;
struct nfs_openres {int rflags; TYPE_2__* f_attr; int fh; int cinfo; } ;
struct nfs_openargs {int open_flags; } ;
struct nfs4_opendata {int f_attr; int rpc_done; struct nfs_openres o_res; struct nfs_openargs o_arg; TYPE_1__* dir; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int valid; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nfs_server* FUNC_0 (struct inode*) ;
 int VAR_6 ;
 int FUNC_1 (struct nfs_server*,int *,TYPE_2__*) ;
 int FUNC_2 (struct nfs4_opendata*) ;
 int FUNC_3 (struct nfs4_opendata*,int ) ;
 int FUNC_4 (struct nfs_server*,int *) ;
 int FUNC_5 (struct inode*,int *) ;

__attribute__((used)) static int FUNC_6(struct nfs4_opendata *VAR_7)
{
 struct inode *VAR_8 = VAR_7->dir->d_inode;
 struct nfs_server *VAR_9 = FUNC_0(VAR_8);
 struct nfs_openargs *VAR_10 = &VAR_7->o_arg;
 struct nfs_openres *VAR_11 = &VAR_7->o_res;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_7, 0);
 if (!VAR_7->rpc_done)
  return VAR_12;
 if (VAR_12 != 0) {
  if (VAR_12 == -VAR_1 &&
    !(VAR_10->open_flags & VAR_6))
   return -VAR_0;
  return VAR_12;
 }

 FUNC_4(VAR_9, &VAR_7->f_attr);

 if (VAR_10->open_flags & VAR_6)
  FUNC_5(VAR_8, &VAR_11->cinfo);
 if ((VAR_11->rflags & VAR_3) == 0)
  VAR_9->caps &= ~VAR_5;
 if(VAR_11->rflags & VAR_2) {
  VAR_12 = FUNC_2(VAR_7);
  if (VAR_12 != 0)
   return VAR_12;
 }
 if (!(VAR_11->f_attr->valid & VAR_4))
  FUNC_1(VAR_9, &VAR_11->fh, VAR_11->f_attr);
 return 0;
}
