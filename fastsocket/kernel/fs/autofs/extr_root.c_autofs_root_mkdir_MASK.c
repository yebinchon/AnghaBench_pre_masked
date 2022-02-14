
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {int len; int name; int hash; } ;
struct dentry {TYPE_1__ d_name; } ;
struct autofs_dirhash {int dummy; } ;
struct autofs_sb_info {scalar_t__ next_dir_ino; struct autofs_dirhash dirhash; } ;
struct autofs_dir_ent {struct dentry* dentry; scalar_t__ ino; int len; void* name; int hash; } ;
typedef scalar_t__ ino_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct autofs_dirhash*,struct autofs_dir_ent*) ;
 struct autofs_dir_ent* FUNC_3 (struct autofs_dirhash*,TYPE_1__*) ;
 struct inode* FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_6 (int ) ;
 int FUNC_7 (struct dentry*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct autofs_dir_ent*) ;
 void* FUNC_11 (int,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (void*,int ,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_5, struct dentry *VAR_6, int VAR_7)
{
 struct autofs_sb_info *VAR_8 = FUNC_6(VAR_5->i_sb);
 struct autofs_dirhash *VAR_9 = &VAR_8->dirhash;
 struct autofs_dir_ent *VAR_10;
 struct inode *VAR_11;
 ino_t VAR_12;

 FUNC_12();
 if (!FUNC_5(VAR_8)) {
  FUNC_15();
  return -VAR_1;
 }

 VAR_10 = FUNC_3(VAR_9, &VAR_6->d_name);
 if (VAR_10) {
  FUNC_15();
  return -VAR_2;
 }

 if (VAR_8->next_dir_ino < VAR_0) {
  FUNC_14("autofs: Out of inode numbers -- what the heck did you do??\n");
  FUNC_15();
  return -VAR_3;
 }
 VAR_12 = VAR_8->next_dir_ino++;

 VAR_10 = FUNC_11(sizeof(struct autofs_dir_ent), VAR_4);
 if (!VAR_10) {
  FUNC_15();
  return -VAR_3;
 }

 VAR_10->name = FUNC_11(VAR_6->d_name.len+1, VAR_4);
 if (!VAR_10->name) {
  FUNC_10(VAR_10);
  FUNC_15();
  return -VAR_3;
 }

 VAR_10->hash = VAR_6->d_name.hash;
 FUNC_13(VAR_10->name, VAR_6->d_name.name, 1+(VAR_10->len = VAR_6->d_name.len));
 VAR_10->ino = VAR_12;
 VAR_10->dentry = VAR_6;
 FUNC_2(VAR_9,VAR_10);

 FUNC_9(VAR_5);

 VAR_11 = FUNC_4(VAR_5->i_sb, VAR_12);
 if (FUNC_0(VAR_11)) {
  FUNC_8(VAR_5);
  return FUNC_1(VAR_11);
 }

 FUNC_7(VAR_6, VAR_11);
 FUNC_15();

 return 0;
}
