
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xattr_handler {size_t (* list ) (struct inode*,char*,size_t,int ,int ) ;} ;
struct inode {int i_ino; int i_sb; } ;
struct ext2_xattr_entry {int e_name_len; int e_name; int e_name_index; } ;
struct buffer_head {char* b_data; int b_size; int b_count; } ;
struct TYPE_4__ {int xattr_sem; int i_file_acl; } ;
struct TYPE_3__ {scalar_t__ h_magic; scalar_t__ h_blocks; int h_refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 struct ext2_xattr_entry* FUNC_1 (struct ext2_xattr_entry*) ;
 struct ext2_xattr_entry* FUNC_2 (struct buffer_head*) ;
 TYPE_1__* FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct ext2_xattr_entry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct buffer_head*,char*,int ,int ) ;
 int FUNC_10 (struct inode*,char*,...) ;
 int FUNC_11 (int ,char*,char*,int ,int ) ;
 scalar_t__ FUNC_12 (struct buffer_head*) ;
 struct xattr_handler* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 struct buffer_head* FUNC_15 (int ,int ) ;
 size_t FUNC_16 (struct inode*,char*,size_t,int ,int ) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(struct inode *VAR_3, char *VAR_4, size_t VAR_5)
{
 struct buffer_head *VAR_6 = ((void*)0);
 struct ext2_xattr_entry *VAR_7;
 char *VAR_8;
 size_t VAR_9 = VAR_5;
 int VAR_10;

 FUNC_10(VAR_3, "buffer=%p, buffer_size=%ld",
    VAR_4, (long)VAR_5);

 FUNC_8(&FUNC_0(VAR_3)->xattr_sem);
 VAR_10 = 0;
 if (!FUNC_0(VAR_3)->i_file_acl)
  goto cleanup;
 FUNC_10(VAR_3, "reading block %d", FUNC_0(VAR_3)->i_file_acl);
 VAR_6 = FUNC_15(VAR_3->i_sb, FUNC_0(VAR_3)->i_file_acl);
 VAR_10 = -VAR_0;
 if (!VAR_6)
  goto cleanup;
 FUNC_9(VAR_6, "b_count=%d, refcount=%d",
  FUNC_5(&(VAR_6->b_count)), FUNC_14(FUNC_3(VAR_6)->h_refcount));
 VAR_8 = VAR_6->b_data + VAR_6->b_size;
 if (FUNC_3(VAR_6)->h_magic != FUNC_7(VAR_2) ||
     FUNC_3(VAR_6)->h_blocks != FUNC_7(1)) {
bad_block: FUNC_11(VAR_3->i_sb, "ext2_xattr_list",
   "inode %ld: bad block %d", VAR_3->i_ino,
   FUNC_0(VAR_3)->i_file_acl);
  VAR_10 = -VAR_0;
  goto cleanup;
 }


 VAR_7 = FUNC_2(VAR_6);
 while (!FUNC_4(VAR_7)) {
  struct ext2_xattr_entry *VAR_11 = FUNC_1(VAR_7);

  if ((char *)VAR_11 >= VAR_8)
   goto bad_block;
  VAR_7 = VAR_11;
 }
 if (FUNC_12(VAR_6))
  FUNC_10(VAR_3, "cache insert failed");


 for (VAR_7 = FUNC_2(VAR_6); !FUNC_4(VAR_7);
      VAR_7 = FUNC_1(VAR_7)) {
  struct xattr_handler *VAR_12 =
   FUNC_13(VAR_7->e_name_index);

  if (VAR_12) {
   size_t VAR_13 = VAR_12->list(VAR_3, VAR_4, VAR_9,
          VAR_7->e_name,
          VAR_7->e_name_len);
   if (VAR_4) {
    if (VAR_13 > VAR_9) {
     VAR_10 = -VAR_1;
     goto cleanup;
    }
    VAR_4 += VAR_13;
   }
   VAR_9 -= VAR_13;
  }
 }
 VAR_10 = VAR_5 - VAR_9;

cleanup:
 FUNC_6(VAR_6);
 FUNC_17(&FUNC_0(VAR_3)->xattr_sem);

 return VAR_10;
}
