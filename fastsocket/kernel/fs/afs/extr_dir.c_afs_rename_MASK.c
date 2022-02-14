
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct key {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {scalar_t__ len; int name; } ;
struct dentry {TYPE_3__ d_name; struct inode* d_inode; } ;
struct TYPE_4__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_2__* volume; TYPE_1__ fid; } ;
struct TYPE_5__ {int cell; } ;


 scalar_t__ VAR_0 ;
 struct afs_vnode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (char*,...) ;
 struct key* FUNC_5 (int ) ;
 int FUNC_6 (struct afs_vnode*,struct afs_vnode*,struct key*,int ,int ) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct key*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_2, struct dentry *VAR_3,
        struct inode *VAR_4, struct dentry *VAR_5)
{
 struct afs_vnode *VAR_6, *VAR_7, *VAR_8;
 struct key *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0(VAR_3->d_inode);
 VAR_6 = FUNC_0(VAR_2);
 VAR_7 = FUNC_0(VAR_4);

 FUNC_3("{%x:%u},{%x:%u},{%x:%u},{%s}",
        VAR_6->fid.vid, VAR_6->fid.vnode,
        VAR_8->fid.vid, VAR_8->fid.vnode,
        VAR_7->fid.vid, VAR_7->fid.vnode,
        VAR_5->d_name.name);

 VAR_10 = -VAR_1;
 if (VAR_5->d_name.len >= VAR_0)
  goto error;

 VAR_9 = FUNC_5(VAR_6->volume->cell);
 if (FUNC_1(VAR_9)) {
  VAR_10 = FUNC_2(VAR_9);
  goto error;
 }

 VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_9,
          VAR_3->d_name.name,
          VAR_5->d_name.name);
 if (VAR_10 < 0)
  goto rename_error;
 FUNC_8(VAR_9);
 FUNC_4(" = 0");
 return 0;

rename_error:
 FUNC_8(VAR_9);
error:
 FUNC_7(VAR_5);
 FUNC_4(" = %d", VAR_10);
 return VAR_10;
}
