
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct qstr {int len; char* name; int hash; } ;
struct inode {int i_mode; int i_sb; } ;
struct fuse_inode {int nlookup; } ;
struct TYPE_5__ {int mode; } ;
struct fuse_entry_out {scalar_t__ nodeid; TYPE_2__ attr; int generation; } ;
struct fuse_dirent {int namelen; char* name; } ;
struct fuse_direntplus {struct fuse_dirent dirent; struct fuse_entry_out entry_out; } ;
struct fuse_conn {int lock; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int * d_op; struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_2 ;
 struct dentry* FUNC_2 (struct dentry*,struct qstr*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*,struct qstr*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct fuse_entry_out*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct inode*,TYPE_2__*,int ,int ) ;
 int FUNC_10 (struct dentry*,struct fuse_entry_out*) ;
 int VAR_3 ;
 struct inode* FUNC_11 (int ,scalar_t__,int ,TYPE_2__*,int ,int ) ;
 struct dentry* FUNC_12 (struct dentry*,struct inode*) ;
 int FUNC_13 (int) ;
 struct fuse_conn* FUNC_14 (struct inode*) ;
 struct fuse_inode* FUNC_15 (struct inode*) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (struct inode*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct file *VAR_4,
    struct fuse_direntplus *VAR_5,
    u64 VAR_6)
{
 int VAR_7;
 struct fuse_entry_out *VAR_8 = &VAR_5->entry_out;
 struct fuse_dirent *VAR_9 = &VAR_5->dirent;
 struct dentry *VAR_10 = VAR_4->f_path.dentry;
 struct qstr VAR_11 = { .len = VAR_9->namelen, .name = VAR_9->name };
 struct dentry *VAR_12;
 struct dentry *VAR_13;
 struct inode *VAR_14 = VAR_10->d_inode;
 struct fuse_conn *VAR_15;
 struct inode *VAR_16;

 if (!VAR_8->nodeid) {







  return 0;
 }

 if (VAR_11.name[0] == '.') {




  if (VAR_11.len == 1)
   return 0;
  if (VAR_11.name[1] == '.' && VAR_11.len == 2)
   return 0;
 }

 if (FUNC_17(VAR_8->nodeid))
  return -VAR_0;
 if (!FUNC_13(VAR_8->attr.mode))
  return -VAR_0;

 VAR_15 = FUNC_14(VAR_14);

 VAR_11.hash = FUNC_8(VAR_11.name, VAR_11.len);
 VAR_12 = FUNC_5(VAR_10, &VAR_11);
 if (VAR_12) {
  VAR_16 = VAR_12->d_inode;
  if (!VAR_16) {
   FUNC_3(VAR_12);
  } else if (FUNC_16(VAR_16) != VAR_8->nodeid ||
      ((VAR_8->attr.mode ^ VAR_16->i_mode) & VAR_2)) {
   VAR_7 = FUNC_4(VAR_12);
   if (VAR_7)
    goto out;
  } else if (FUNC_18(VAR_16)) {
   VAR_7 = -VAR_0;
   goto out;
  } else {
   struct fuse_inode *VAR_17;
   VAR_17 = FUNC_15(VAR_16);
   FUNC_19(&VAR_15->lock);
   VAR_17->nlookup++;
   FUNC_20(&VAR_15->lock);

   FUNC_9(VAR_16, &VAR_8->attr,
            FUNC_7(VAR_8),
            VAR_6);





   goto found;
  }
  FUNC_6(VAR_12);
 }

 VAR_12 = FUNC_2(VAR_10, &VAR_11);
 VAR_7 = -VAR_1;
 if (!VAR_12)
  goto out;
 VAR_12->d_op = &VAR_3;

 VAR_16 = FUNC_11(VAR_14->i_sb, VAR_8->nodeid, VAR_8->generation,
     &VAR_8->attr, FUNC_7(VAR_8), VAR_6);
 if (!VAR_16)
  goto out;

 VAR_13 = FUNC_12(VAR_12, VAR_16);
 VAR_7 = FUNC_1(VAR_13);
 if (FUNC_0(VAR_13))
  goto out;

 if (VAR_13) {
  FUNC_6(VAR_12);
  VAR_12 = VAR_13;
 }

found:
 FUNC_10(VAR_12, VAR_8);

 VAR_7 = 0;
out:
 FUNC_6(VAR_12);
 return VAR_7;
}
