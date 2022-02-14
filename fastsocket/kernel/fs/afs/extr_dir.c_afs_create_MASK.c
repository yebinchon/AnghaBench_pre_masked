
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct key {int i_sb; } ;
struct inode {int i_sb; } ;
struct TYPE_6__ {scalar_t__ len; int name; } ;
struct dentry {TYPE_3__ d_name; } ;
struct TYPE_4__ {int vnode; int vid; } ;
struct afs_vnode {int lock; int update_cnt; TYPE_2__* volume; TYPE_1__ fid; } ;
struct afs_server {int dummy; } ;
struct afs_file_status {int dummy; } ;
struct afs_fid {int dummy; } ;
struct afs_callback {int dummy; } ;
struct TYPE_5__ {int cell; } ;


 scalar_t__ VAR_0 ;
 struct afs_vnode* FUNC_0 (struct key*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ,int ,int) ;
 int FUNC_5 (char*,...) ;
 struct key* FUNC_6 (int ,struct key*,struct afs_fid*,struct afs_file_status*,struct afs_callback*) ;
 int FUNC_7 (struct afs_server*) ;
 struct key* FUNC_8 (int ) ;
 int FUNC_9 (struct afs_vnode*,struct key*,int ,int,struct afs_fid*,struct afs_file_status*,struct afs_callback*,struct afs_server**) ;
 int FUNC_10 (struct afs_vnode*,struct afs_server*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct dentry*,struct key*) ;
 int FUNC_13 (struct dentry*) ;
 scalar_t__ FUNC_14 (struct dentry*) ;
 int FUNC_15 (struct key*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5,
        struct nameidata *VAR_6)
{
 struct afs_file_status VAR_7;
 struct afs_callback VAR_8;
 struct afs_server *VAR_9;
 struct afs_vnode *VAR_10, *VAR_11;
 struct afs_fid VAR_12;
 struct inode *VAR_13;
 struct key *VAR_14;
 int VAR_15;

 VAR_10 = FUNC_0(VAR_3);

 FUNC_4("{%x:%u},{%s},%o,",
        VAR_10->fid.vid, VAR_10->fid.vnode, VAR_4->d_name.name, VAR_5);

 VAR_15 = -VAR_1;
 if (VAR_4->d_name.len >= VAR_0)
  goto error;

 VAR_14 = FUNC_8(VAR_10->volume->cell);
 if (FUNC_1(VAR_14)) {
  VAR_15 = FUNC_2(VAR_14);
  goto error;
 }

 VAR_5 |= VAR_2;
 VAR_15 = FUNC_9(VAR_10, VAR_14, VAR_4->d_name.name,
          VAR_5, &VAR_12, &VAR_7, &VAR_8, &VAR_9);
 if (VAR_15 < 0)
  goto create_error;

 VAR_13 = FUNC_6(VAR_3->i_sb, VAR_14, &VAR_12, &VAR_7, &VAR_8);
 if (FUNC_1(VAR_13)) {


  VAR_15 = FUNC_2(VAR_13);
  goto iget_error;
 }


 VAR_11 = FUNC_0(VAR_13);
 FUNC_16(&VAR_11->lock);
 VAR_11->update_cnt++;
 FUNC_17(&VAR_11->lock);
 FUNC_10(VAR_11, VAR_9);
 FUNC_7(VAR_9);

 FUNC_12(VAR_4, VAR_13);
 if (FUNC_14(VAR_4)) {
  FUNC_3("not hashed");
  FUNC_13(VAR_4);
 }
 FUNC_15(VAR_14);
 FUNC_5(" = 0");
 return 0;

iget_error:
 FUNC_7(VAR_9);
create_error:
 FUNC_15(VAR_14);
error:
 FUNC_11(VAR_4);
 FUNC_5(" = %d", VAR_15);
 return VAR_15;
}
