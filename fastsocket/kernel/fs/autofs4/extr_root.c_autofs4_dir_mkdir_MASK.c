
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mtime; int i_sb; } ;
struct TYPE_2__ {int name; int len; } ;
struct dentry {struct dentry* d_parent; struct autofs_info* d_fsdata; TYPE_1__ d_name; } ;
struct autofs_sb_info {int version; } ;
struct autofs_info {int count; int dentry; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct dentry*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*) ;
 struct autofs_info* FUNC_3 (struct dentry*) ;
 struct inode* FUNC_4 (int ,struct autofs_info*) ;
 struct autofs_info* FUNC_5 (struct autofs_info*,struct autofs_sb_info*,int) ;
 int FUNC_6 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_7 (int ) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*,struct inode*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct autofs_info*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_4, struct dentry *VAR_5, int VAR_6)
{
 struct autofs_sb_info *VAR_7 = FUNC_7(VAR_4->i_sb);
 struct autofs_info *VAR_8 = FUNC_3(VAR_5);
 struct autofs_info *VAR_9;
 struct inode *VAR_10;

 if (!FUNC_6(VAR_7))
  return -VAR_1;

 FUNC_0("dentry %p, creating %.*s",
  VAR_5, VAR_5->d_name.len, VAR_5->d_name.name);

 VAR_8 = FUNC_5(VAR_8, VAR_7, VAR_3 | 0555);
 if (!VAR_8)
  return -VAR_2;

 FUNC_2(VAR_5);

 VAR_10 = FUNC_4(VAR_4->i_sb, VAR_8);
 if (!VAR_10) {
  if (!VAR_5->d_fsdata)
   FUNC_12(VAR_8);
  return -VAR_2;
 }
 FUNC_9(VAR_5, VAR_10);

 if (VAR_7->version < 5)
  FUNC_8(VAR_5);

 VAR_5->d_fsdata = VAR_8;
 VAR_8->dentry = FUNC_10(VAR_5);
 FUNC_1(&VAR_8->count);
 VAR_9 = FUNC_3(VAR_5->d_parent);
 if (VAR_9 && VAR_5->d_parent != VAR_5)
  FUNC_1(&VAR_9->count);
 FUNC_11(VAR_4);
 VAR_4->i_mtime = VAR_0;

 return 0;
}
