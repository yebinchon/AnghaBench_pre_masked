
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Flags; } ;
union hfs_cat_rec {int type; TYPE_1__ file; } ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct qstr {int name; } ;
struct inode {int i_ino; void* i_ctime; void* i_mtime; int i_size; struct super_block* i_sb; } ;
struct hfs_find_data {int entrylength; int bnode; int search_key; int entryoffset; } ;
typedef int entry ;
struct TYPE_4__ {int cat_tree; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,union hfs_cat_rec*,int ,int) ;
 int FUNC_4 (struct hfs_find_data*) ;
 int FUNC_5 (struct hfs_find_data*,union hfs_cat_rec*,int) ;
 int FUNC_6 (struct hfs_find_data*) ;
 int FUNC_7 (struct super_block*,int ,int ,struct qstr*) ;
 int FUNC_8 (struct super_block*,union hfs_cat_rec*,int ,int ,struct qstr*) ;
 int FUNC_9 (struct hfs_find_data*) ;
 int FUNC_10 (int ,struct hfs_find_data*) ;
 int FUNC_11 (struct inode*) ;

int FUNC_12(u32 VAR_9, struct inode *VAR_10, struct qstr *VAR_11,
   struct inode *VAR_12, struct qstr *VAR_13)
{
 struct super_block *VAR_14;
 struct hfs_find_data VAR_15, VAR_16;
 union hfs_cat_rec VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;

 FUNC_1(VAR_1, "rename_cat: %u - %lu,%s - %lu,%s\n", VAR_9, VAR_10->i_ino, VAR_11->name,
  VAR_12->i_ino, VAR_13->name);
 VAR_14 = VAR_10->i_sb;
 FUNC_10(FUNC_0(VAR_14)->cat_tree, &VAR_15);
 VAR_16 = VAR_15;


 FUNC_7(VAR_14, VAR_15.search_key, VAR_10->i_ino, VAR_11);
 VAR_20 = FUNC_4(&VAR_15);
 if (VAR_20)
  goto out;
 if (VAR_15.entrylength > sizeof(VAR_17) || VAR_15.entrylength < 0) {
  VAR_20 = -VAR_3;
  goto out;
 }

 FUNC_3(VAR_15.bnode, &VAR_17, VAR_15.entryoffset,
       VAR_15.entrylength);


 FUNC_7(VAR_14, VAR_16.search_key, VAR_12->i_ino, VAR_13);
 VAR_20 = FUNC_4(&VAR_16);
 if (VAR_20 != -VAR_4) {
  if (!VAR_20)
   VAR_20 = -VAR_2;
  goto out;
 }

 VAR_20 = FUNC_5(&VAR_16, &VAR_17, VAR_15.entrylength);
 if (VAR_20)
  goto out;
 VAR_12->i_size++;
 VAR_12->i_mtime = VAR_12->i_ctime = VAR_0;
 FUNC_11(VAR_12);


 FUNC_7(VAR_14, VAR_15.search_key, VAR_10->i_ino, VAR_11);
 VAR_20 = FUNC_4(&VAR_15);
 if (VAR_20)
  goto out;
 VAR_20 = FUNC_6(&VAR_15);
 if (VAR_20)
  goto out;
 VAR_10->i_size--;
 VAR_10->i_mtime = VAR_10->i_ctime = VAR_0;
 FUNC_11(VAR_10);

 VAR_19 = VAR_17.type;
 if (VAR_19 == VAR_5 && !(VAR_17.file.Flags & VAR_8))
  goto out;


 FUNC_7(VAR_14, VAR_15.search_key, VAR_9, ((void*)0));
 VAR_20 = FUNC_4(&VAR_15);
 if (VAR_20)
  goto out;
 VAR_20 = FUNC_6(&VAR_15);
 if (VAR_20)
  goto out;


 FUNC_7(VAR_14, VAR_16.search_key, VAR_9, ((void*)0));
 VAR_18 = FUNC_8(VAR_14, &VAR_17, VAR_19 == VAR_5 ? VAR_6 : VAR_7,
     VAR_12->i_ino, VAR_13);
 VAR_20 = FUNC_4(&VAR_16);
 if (VAR_20 != -VAR_4) {
  if (!VAR_20)
   VAR_20 = -VAR_2;
  goto out;
 }
 VAR_20 = FUNC_5(&VAR_16, &VAR_17, VAR_18);
out:
 FUNC_2(VAR_16.bnode);
 FUNC_9(&VAR_15);
 return VAR_20;
}
