
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {int flags; } ;
struct nfs_open_context {int mode; TYPE_1__* dentry; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int open_files; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfs_server*,struct inode*) ;

void FUNC_4(struct nfs_open_context *VAR_2, int VAR_3)
{
 struct inode *VAR_4;
 struct nfs_server *VAR_5;

 if (!(VAR_2->mode & VAR_0))
  return;
 if (!VAR_3)
  return;
 VAR_4 = VAR_2->dentry->d_inode;
 if (!FUNC_2(&FUNC_0(VAR_4)->open_files))
  return;
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5->flags & VAR_1)
  return;
 FUNC_3(VAR_5, VAR_4);
}
