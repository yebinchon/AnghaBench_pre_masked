
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct key {int i_sb; } ;
struct inode {int i_sb; } ;
struct TYPE_6__ {scalar_t__ len; int name; } ;
struct dentry {TYPE_3__ d_name; } ;
struct TYPE_4__ {int vnode; int vid; } ;
struct afs_vnode {int lock; int update_cnt; TYPE_2__* volume; TYPE_1__ fid; } ;
struct afs_server {int dummy; } ;
struct afs_file_status {int dummy; } ;
struct afs_fid {int dummy; } ;
struct TYPE_5__ {int cell; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct afs_vnode* FUNC_0 (struct key*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ,int ,char const*) ;
 int FUNC_5 (char*,...) ;
 struct key* FUNC_6 (int ,struct key*,struct afs_fid*,struct afs_file_status*,int *) ;
 int FUNC_7 (struct afs_server*) ;
 struct key* FUNC_8 (int ) ;
 int FUNC_9 (struct afs_vnode*,struct afs_server*) ;
 int FUNC_10 (struct afs_vnode*,struct key*,int ,char const*,struct afs_fid*,struct afs_file_status*,struct afs_server**) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct dentry*,struct key*) ;
 int FUNC_13 (struct dentry*) ;
 scalar_t__ FUNC_14 (struct dentry*) ;
 int FUNC_15 (struct key*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (char const*) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_4, struct dentry *VAR_5,
         const char *VAR_6)
{
 struct afs_file_status VAR_7;
 struct afs_server *VAR_8;
 struct afs_vnode *VAR_9, *VAR_10;
 struct afs_fid VAR_11;
 struct inode *VAR_12;
 struct key *VAR_13;
 int VAR_14;

 VAR_9 = FUNC_0(VAR_4);

 FUNC_4("{%x:%u},{%s},%s",
        VAR_9->fid.vid, VAR_9->fid.vnode, VAR_5->d_name.name,
        VAR_6);

 VAR_14 = -VAR_3;
 if (VAR_5->d_name.len >= VAR_0)
  goto error;

 VAR_14 = -VAR_2;
 if (FUNC_18(VAR_6) >= VAR_1)
  goto error;

 VAR_13 = FUNC_8(VAR_9->volume->cell);
 if (FUNC_1(VAR_13)) {
  VAR_14 = FUNC_2(VAR_13);
  goto error;
 }

 VAR_14 = FUNC_10(VAR_9, VAR_13, VAR_5->d_name.name, VAR_6,
    &VAR_11, &VAR_7, &VAR_8);
 if (VAR_14 < 0)
  goto create_error;

 VAR_12 = FUNC_6(VAR_4->i_sb, VAR_13, &VAR_11, &VAR_7, ((void*)0));
 if (FUNC_1(VAR_12)) {


  VAR_14 = FUNC_2(VAR_12);
  goto iget_error;
 }


 VAR_10 = FUNC_0(VAR_12);
 FUNC_16(&VAR_10->lock);
 VAR_10->update_cnt++;
 FUNC_17(&VAR_10->lock);
 FUNC_9(VAR_10, VAR_8);
 FUNC_7(VAR_8);

 FUNC_12(VAR_5, VAR_12);
 if (FUNC_14(VAR_5)) {
  FUNC_3("not hashed");
  FUNC_13(VAR_5);
 }
 FUNC_15(VAR_13);
 FUNC_5(" = 0");
 return 0;

iget_error:
 FUNC_7(VAR_8);
create_error:
 FUNC_15(VAR_13);
error:
 FUNC_11(VAR_5);
 FUNC_5(" = %d", VAR_14);
 return VAR_14;
}
