
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {char const* name; int len; int hash; } ;
struct dentry {TYPE_1__ d_name; } ;
struct autofs_symlink {int len; int mtime; struct autofs_dir_ent* data; } ;
struct autofs_dirhash {int dummy; } ;
struct autofs_sb_info {int symlink_bitmap; struct autofs_symlink* symlink; struct autofs_dirhash dirhash; } ;
struct autofs_dir_ent {scalar_t__ ino; int * dentry; int len; struct autofs_dir_ent* name; int hash; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct autofs_dirhash*,struct autofs_dir_ent*) ;
 scalar_t__ FUNC_4 (struct autofs_dirhash*,TYPE_1__*) ;
 struct inode* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct autofs_sb_info*) ;
 int FUNC_7 (char const*,int ) ;
 struct autofs_sb_info* FUNC_8 (int ) ;
 int FUNC_9 (unsigned int,int ) ;
 int FUNC_10 (struct dentry*,struct inode*) ;
 unsigned int FUNC_11 (int ,unsigned int) ;
 int FUNC_12 () ;
 int FUNC_13 (struct autofs_dir_ent*) ;
 void* FUNC_14 (int,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (struct autofs_dir_ent*,char const*,int) ;
 int FUNC_17 (unsigned int,int ) ;
 int FUNC_18 (char const*) ;
 int FUNC_19 () ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_6, struct dentry *VAR_7, const char *VAR_8)
{
 struct autofs_sb_info *VAR_9 = FUNC_8(VAR_6->i_sb);
 struct autofs_dirhash *VAR_10 = &VAR_9->dirhash;
 struct autofs_dir_ent *VAR_11;
 unsigned int VAR_12;
 int VAR_13;
 struct autofs_symlink *VAR_14;
 struct inode *VAR_15;

 FUNC_0(("autofs_root_symlink: %s <- ", VAR_8));
 FUNC_7(VAR_7->d_name.name,VAR_7->d_name.len);

 FUNC_15();
 if (!FUNC_6(VAR_9)) {
  FUNC_19();
  return -VAR_2;
 }

 if (FUNC_4(VAR_10, &VAR_7->d_name)) {
  FUNC_19();
  return -VAR_3;
 }

 VAR_12 = FUNC_11(VAR_9->symlink_bitmap,VAR_1);
 if (VAR_12 >= VAR_1) {
  FUNC_19();
  return -VAR_4;
 }

 FUNC_17(VAR_12,VAR_9->symlink_bitmap);
 VAR_14 = &VAR_9->symlink[VAR_12];
 VAR_14->len = FUNC_18(VAR_8);
 VAR_14->data = FUNC_14(VAR_13 = VAR_14->len+1, VAR_5);
 if (!VAR_14->data) {
  FUNC_9(VAR_12,VAR_9->symlink_bitmap);
  FUNC_19();
  return -VAR_4;
 }

 VAR_11 = FUNC_14(sizeof(struct autofs_dir_ent), VAR_5);
 if (!VAR_11) {
  FUNC_13(VAR_14->data);
  FUNC_9(VAR_12,VAR_9->symlink_bitmap);
  FUNC_19();
  return -VAR_4;
 }

 VAR_11->name = FUNC_14(VAR_7->d_name.len+1, VAR_5);
 if (!VAR_11->name) {
  FUNC_13(VAR_14->data);
  FUNC_13(VAR_11);
  FUNC_9(VAR_12,VAR_9->symlink_bitmap);
  FUNC_19();
  return -VAR_4;
 }

 FUNC_16(VAR_14->data,VAR_8,VAR_13);
 VAR_14->mtime = FUNC_12();

 VAR_11->ino = VAR_0 + VAR_12;
 VAR_11->hash = VAR_7->d_name.hash;
 FUNC_16(VAR_11->name, VAR_7->d_name.name, 1+(VAR_11->len = VAR_7->d_name.len));
 VAR_11->dentry = ((void*)0);

 FUNC_3(VAR_10,VAR_11);

 VAR_15 = FUNC_5(VAR_6->i_sb, VAR_11->ino);
 if (FUNC_1(VAR_15))
  return FUNC_2(VAR_15);

 FUNC_10(VAR_7, VAR_15);
 FUNC_19();
 return 0;
}
