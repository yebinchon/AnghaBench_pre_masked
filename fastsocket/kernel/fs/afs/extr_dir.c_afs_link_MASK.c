
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct key {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_7__ {scalar_t__ len; int name; } ;
struct dentry {TYPE_3__ d_name; struct inode* d_inode; } ;
struct TYPE_8__ {int i_count; } ;
struct TYPE_5__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_4__ vfs_inode; TYPE_2__* volume; TYPE_1__ fid; } ;
struct TYPE_6__ {int cell; } ;


 scalar_t__ VAR_0 ;
 struct afs_vnode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (char*,...) ;
 struct key* FUNC_5 (int ) ;
 int FUNC_6 (struct afs_vnode*,struct afs_vnode*,struct key*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*,TYPE_4__*) ;
 int FUNC_10 (struct key*) ;

__attribute__((used)) static int FUNC_11(struct dentry *VAR_2, struct inode *VAR_3,
      struct dentry *VAR_4)
{
 struct afs_vnode *VAR_5, *VAR_6;
 struct key *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_2->d_inode);
 VAR_5 = FUNC_0(VAR_3);

 FUNC_3("{%x:%u},{%x:%u},{%s}",
        VAR_6->fid.vid, VAR_6->fid.vnode,
        VAR_5->fid.vid, VAR_5->fid.vnode,
        VAR_4->d_name.name);

 VAR_8 = -VAR_1;
 if (VAR_4->d_name.len >= VAR_0)
  goto error;

 VAR_7 = FUNC_5(VAR_5->volume->cell);
 if (FUNC_1(VAR_7)) {
  VAR_8 = FUNC_2(VAR_7);
  goto error;
 }

 VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_4->d_name.name);
 if (VAR_8 < 0)
  goto link_error;

 FUNC_7(&VAR_6->vfs_inode.i_count);
 FUNC_9(VAR_4, &VAR_6->vfs_inode);
 FUNC_10(VAR_7);
 FUNC_4(" = 0");
 return 0;

link_error:
 FUNC_10(VAR_7);
error:
 FUNC_8(VAR_4);
 FUNC_4(" = %d", VAR_8);
 return VAR_8;
}
