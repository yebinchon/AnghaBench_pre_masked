
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs_open_context {int error; int flags; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int name; } ;
struct dentry {TYPE_3__ d_name; TYPE_2__* d_parent; struct inode* d_inode; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (struct inode*,int ) ;
 struct nfs_open_context* FUNC_2 (struct file*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_3, struct dentry *VAR_4, int VAR_5)
{
 struct nfs_open_context *VAR_6 = FUNC_2(VAR_3);
 struct inode *VAR_7 = VAR_4->d_inode;
 int VAR_8, VAR_9;
 int VAR_10 = 0;


 FUNC_0("NFS: fsync file(%s/%s) datasync %d\n",
   VAR_4->d_parent->d_name.name, VAR_4->d_name.name,
   VAR_5);

 FUNC_3(VAR_7, VAR_1);
 VAR_8 = FUNC_5(VAR_2, &VAR_6->flags);
 VAR_9 = FUNC_1(VAR_7, VAR_0);
 VAR_8 |= FUNC_6(VAR_2, &VAR_6->flags);
 if (VAR_8)
  VAR_10 = FUNC_7(&VAR_6->error, 0);
 if (!VAR_10 && VAR_9 < 0)
  VAR_10 = VAR_9;
 if (!VAR_10 && !VAR_5)

  VAR_10 = FUNC_4(VAR_7, 1);
 return VAR_10;
}
