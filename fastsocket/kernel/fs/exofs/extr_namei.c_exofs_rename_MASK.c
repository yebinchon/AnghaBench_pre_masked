
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {scalar_t__ i_nlink; void* i_ctime; int i_mode; } ;
struct exofs_dir_entry {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct exofs_dir_entry*,struct page*) ;
 struct exofs_dir_entry* FUNC_4 (struct inode*,struct page**) ;
 int FUNC_5 (struct inode*) ;
 struct exofs_dir_entry* FUNC_6 (struct inode*,struct dentry*,struct page**) ;
 int FUNC_7 (struct inode*,struct exofs_dir_entry*,struct page*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_6, struct dentry *VAR_7,
  struct inode *VAR_8, struct dentry *VAR_9)
{
 struct inode *VAR_10 = VAR_7->d_inode;
 struct inode *VAR_11 = VAR_9->d_inode;
 struct page *VAR_12 = ((void*)0);
 struct exofs_dir_entry *VAR_13 = ((void*)0);
 struct page *VAR_14;
 struct exofs_dir_entry *VAR_15;
 int VAR_16 = -VAR_3;

 VAR_15 = FUNC_6(VAR_6, VAR_7, &VAR_14);
 if (!VAR_15)
  goto out;

 if (FUNC_0(VAR_10->i_mode)) {
  VAR_16 = -VAR_1;
  VAR_13 = FUNC_4(VAR_10, &VAR_12);
  if (!VAR_13)
   goto out_old;
 }

 if (VAR_11) {
  struct page *VAR_17;
  struct exofs_dir_entry *VAR_18;

  VAR_16 = -VAR_4;
  if (VAR_13 && !FUNC_5(VAR_11))
   goto out_dir;

  VAR_16 = -VAR_3;
  VAR_18 = FUNC_6(VAR_8, VAR_9, &VAR_17);
  if (!VAR_18)
   goto out_dir;
  FUNC_9(VAR_10);
  VAR_16 = FUNC_7(VAR_8, VAR_18, VAR_17, VAR_10);
  VAR_11->i_ctime = VAR_0;
  if (VAR_13)
   FUNC_1(VAR_11);
  FUNC_8(VAR_11);
  if (VAR_16)
   goto out_dir;
 } else {
  if (VAR_13) {
   VAR_16 = -VAR_2;
   if (VAR_8->i_nlink >= VAR_5)
    goto out_dir;
  }
  FUNC_9(VAR_10);
  VAR_16 = FUNC_2(VAR_9, VAR_10);
  if (VAR_16) {
   FUNC_8(VAR_10);
   goto out_dir;
  }
  if (VAR_13)
   FUNC_9(VAR_8);
 }

 VAR_10->i_ctime = VAR_0;

 FUNC_3(VAR_15, VAR_14);
 FUNC_8(VAR_10);

 if (VAR_13) {
  VAR_16 = FUNC_7(VAR_10, VAR_13, VAR_12, VAR_8);
  FUNC_8(VAR_6);
  if (VAR_16)
   goto out_dir;
 }
 return 0;


out_dir:
 if (VAR_13) {
  FUNC_10(VAR_12);
  FUNC_11(VAR_12);
 }
out_old:
 FUNC_10(VAR_14);
 FUNC_11(VAR_14);
out:
 return VAR_16;
}
