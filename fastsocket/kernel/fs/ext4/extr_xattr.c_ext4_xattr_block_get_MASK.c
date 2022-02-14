
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; } ;
struct ext4_xattr_entry {int e_value_offs; int e_value_size; } ;
struct buffer_head {scalar_t__ b_data; int b_size; int b_count; } ;
struct TYPE_4__ {int h_refcount; } ;
struct TYPE_3__ {int i_file_acl; } ;


 struct ext4_xattr_entry* FUNC_0 (struct buffer_head*) ;
 TYPE_2__* FUNC_1 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*,char*,int ,size_t) ;
 int FUNC_6 (struct inode*,char*,int,...) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct ext4_xattr_entry**,int,char const*,int ,int) ;
 scalar_t__ FUNC_11 (int ) ;
 size_t FUNC_12 (int ) ;
 int FUNC_13 (void*,scalar_t__,size_t) ;
 struct buffer_head* FUNC_14 (int ,int ) ;

__attribute__((used)) static int
FUNC_15(struct inode *VAR_3, int VAR_4, const char *VAR_5,
       void *VAR_6, size_t VAR_7)
{
 struct buffer_head *VAR_8 = ((void*)0);
 struct ext4_xattr_entry *VAR_9;
 size_t VAR_10;
 int VAR_11;

 FUNC_6(VAR_3, "name=%d.%s, buffer=%p, buffer_size=%ld",
    VAR_4, VAR_5, VAR_6, (long)VAR_7);

 VAR_11 = -VAR_1;
 if (!FUNC_2(VAR_3)->i_file_acl)
  goto cleanup;
 FUNC_6(VAR_3, "reading block %u", FUNC_2(VAR_3)->i_file_acl);
 VAR_8 = FUNC_14(VAR_3->i_sb, FUNC_2(VAR_3)->i_file_acl);
 if (!VAR_8)
  goto cleanup;
 FUNC_5(VAR_8, "b_count=%d, refcount=%d",
  FUNC_3(&(VAR_8->b_count)), FUNC_12(FUNC_1(VAR_8)->h_refcount));
 if (FUNC_9(VAR_8)) {
bad_block:
  FUNC_7(VAR_3->i_sb,
      "inode %lu: bad block %llu", VAR_3->i_ino,
      FUNC_2(VAR_3)->i_file_acl);
  VAR_11 = -VAR_0;
  goto cleanup;
 }
 FUNC_8(VAR_8);
 VAR_9 = FUNC_0(VAR_8);
 VAR_11 = FUNC_10(&VAR_9, VAR_4, VAR_5, VAR_8->b_size, 1);
 if (VAR_11 == -VAR_0)
  goto bad_block;
 if (VAR_11)
  goto cleanup;
 VAR_10 = FUNC_12(VAR_9->e_value_size);
 if (VAR_6) {
  VAR_11 = -VAR_2;
  if (VAR_10 > VAR_7)
   goto cleanup;
  FUNC_13(VAR_6, VAR_8->b_data + FUNC_11(VAR_9->e_value_offs),
         VAR_10);
 }
 VAR_11 = VAR_10;

cleanup:
 FUNC_4(VAR_8);
 return VAR_11;
}
