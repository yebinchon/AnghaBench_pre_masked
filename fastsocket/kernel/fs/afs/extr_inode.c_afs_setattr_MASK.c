
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct key {int dummy; } ;
struct iattr {int ia_valid; TYPE_4__* ia_file; } ;
struct TYPE_7__ {int name; } ;
struct dentry {TYPE_2__ d_name; int d_inode; } ;
struct TYPE_8__ {int i_mapping; int i_mode; } ;
struct TYPE_6__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_5__* volume; TYPE_3__ vfs_inode; TYPE_1__ fid; } ;
struct TYPE_10__ {int cell; } ;
struct TYPE_9__ {struct key* private_data; } ;


 struct afs_vnode* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ,int ,int) ;
 int FUNC_5 (char*,...) ;
 struct key* FUNC_6 (int ) ;
 int FUNC_7 (struct afs_vnode*,struct key*,struct iattr*) ;
 int FUNC_8 (struct afs_vnode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct key*) ;

int FUNC_11(struct dentry *VAR_6, struct iattr *VAR_7)
{
 struct afs_vnode *VAR_8 = FUNC_0(VAR_6->d_inode);
 struct key *VAR_9;
 int VAR_10;

 FUNC_4("{%x:%u},{n=%s},%x",
        VAR_8->fid.vid, VAR_8->fid.vnode, VAR_6->d_name.name,
        VAR_7->ia_valid);

 if (!(VAR_7->ia_valid & (VAR_4 | VAR_2 | VAR_5 | VAR_1 |
    VAR_3))) {
  FUNC_5(" = 0 [unsupported]");
  return 0;
 }


 if (FUNC_3(VAR_8->vfs_inode.i_mode)) {
  FUNC_9(VAR_8->vfs_inode.i_mapping);
  FUNC_8(VAR_8);
 }

 if (VAR_7->ia_valid & VAR_0) {
  VAR_9 = VAR_7->ia_file->private_data;
 } else {
  VAR_9 = FUNC_6(VAR_8->volume->cell);
  if (FUNC_1(VAR_9)) {
   VAR_10 = FUNC_2(VAR_9);
   goto error;
  }
 }

 VAR_10 = FUNC_7(VAR_8, VAR_9, VAR_7);
 if (!(VAR_7->ia_valid & VAR_0))
  FUNC_10(VAR_9);

error:
 FUNC_5(" = %d", VAR_10);
 return VAR_10;
}
