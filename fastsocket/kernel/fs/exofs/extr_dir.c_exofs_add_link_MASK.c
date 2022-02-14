
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int mapping; } ;
struct inode {int i_ctime; int i_mtime; int i_ino; TYPE_3__* i_sb; } ;
struct exofs_sb_info {int s_numfiles; } ;
struct exofs_dir_entry {scalar_t__ rec_len; int name_len; scalar_t__ inode_no; int name; } ;
struct TYPE_5__ {unsigned char* name; int len; } ;
struct dentry {TYPE_2__ d_name; TYPE_1__* d_parent; } ;
typedef int loff_t ;
struct TYPE_6__ {struct exofs_sb_info* s_fs_info; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct page*) ;
 unsigned int VAR_4 ;
 int FUNC_3 (struct page*) ;
 void* FUNC_4 (unsigned short) ;
 scalar_t__ FUNC_5 (int ) ;
 unsigned long FUNC_6 (struct inode*) ;
 unsigned int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct page*,int,unsigned short) ;
 struct page* FUNC_9 (struct inode*,unsigned long) ;
 int FUNC_10 (struct inode*,unsigned long) ;
 scalar_t__ FUNC_11 (int,unsigned char const*,struct exofs_dir_entry*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct exofs_dir_entry*,struct inode*) ;
 int FUNC_14 (int *,int ,int,unsigned short,int ,struct page**,int *) ;
 unsigned short FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (int ,unsigned char const*,int) ;
 char* FUNC_19 (struct page*) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (struct page*) ;

int FUNC_22(struct dentry *VAR_5, struct inode *VAR_6)
{
 struct inode *VAR_7 = VAR_5->d_parent->d_inode;
 const unsigned char *VAR_8 = VAR_5->d_name.name;
 int VAR_9 = VAR_5->d_name.len;
 unsigned VAR_10 = FUNC_7(VAR_7);
 unsigned VAR_11 = FUNC_0(VAR_9);
 unsigned short VAR_12, VAR_13;
 struct page *VAR_14 = ((void*)0);
 struct exofs_sb_info *VAR_15 = VAR_6->i_sb->s_fs_info;
 struct exofs_dir_entry *VAR_16;
 unsigned long VAR_17 = FUNC_6(VAR_7);
 unsigned long VAR_18;
 char *VAR_19;
 loff_t VAR_20;
 int VAR_21;

 for (VAR_18 = 0; VAR_18 <= VAR_17; VAR_18++) {
  char *VAR_22;

  VAR_14 = FUNC_9(VAR_7, VAR_18);
  VAR_21 = FUNC_3(VAR_14);
  if (FUNC_2(VAR_14))
   goto out;
  FUNC_16(VAR_14);
  VAR_19 = FUNC_19(VAR_14);
  VAR_22 = VAR_19 + FUNC_10(VAR_7, VAR_18);
  VAR_16 = (struct exofs_dir_entry *)VAR_19;
  VAR_19 += VAR_4 - VAR_11;
  while ((char *)VAR_16 <= VAR_19) {
   if ((char *)VAR_16 == VAR_22) {
    VAR_13 = 0;
    VAR_12 = VAR_10;
    VAR_16->rec_len = FUNC_4(VAR_10);
    VAR_16->inode_no = 0;
    goto got_it;
   }
   if (VAR_16->rec_len == 0) {
    FUNC_1("ERROR: exofs_add_link: "
     "zero-length directory entry");
    VAR_21 = -VAR_3;
    goto out_unlock;
   }
   VAR_21 = -VAR_1;
   if (FUNC_11(VAR_9, VAR_8, VAR_16))
    goto out_unlock;
   VAR_13 = FUNC_0(VAR_16->name_len);
   VAR_12 = FUNC_15(VAR_16->rec_len);
   if (!VAR_16->inode_no && VAR_12 >= VAR_11)
    goto got_it;
   if (VAR_12 >= VAR_13 + VAR_11)
    goto got_it;
   VAR_16 = (struct exofs_dir_entry *) ((char *) VAR_16 + VAR_12);
  }
  FUNC_21(VAR_14);
  FUNC_12(VAR_14);
 }

 FUNC_1("exofs_add_link: BAD dentry=%p or inode=%p", VAR_5, VAR_6);
 return -VAR_2;

got_it:
 VAR_20 = FUNC_20(VAR_14) +
  (char *)VAR_16 - (char *)FUNC_19(VAR_14);
 VAR_21 = FUNC_14(((void*)0), VAR_14->mapping, VAR_20, VAR_12, 0,
       &VAR_14, ((void*)0));
 if (VAR_21)
  goto out_unlock;
 if (VAR_16->inode_no) {
  struct exofs_dir_entry *VAR_23 =
   (struct exofs_dir_entry *)((char *)VAR_16 + VAR_13);
  VAR_23->rec_len = FUNC_4(VAR_12 - VAR_13);
  VAR_16->rec_len = FUNC_4(VAR_13);
  VAR_16 = VAR_23;
 }
 VAR_16->name_len = VAR_9;
 FUNC_18(VAR_16->name, VAR_8, VAR_9);
 VAR_16->inode_no = FUNC_5(VAR_6->i_ino);
 FUNC_13(VAR_16, VAR_6);
 VAR_21 = FUNC_8(VAR_14, VAR_20, VAR_12);
 VAR_7->i_mtime = VAR_7->i_ctime = VAR_0;
 FUNC_17(VAR_7);
 VAR_15->s_numfiles++;

out_put:
 FUNC_12(VAR_14);
out:
 return VAR_21;
out_unlock:
 FUNC_21(VAR_14);
 goto out_put;
}
