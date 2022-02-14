
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct inode {int i_ctime; int i_sb; } ;
struct ext4_xattr_info {int name_index; char const* name; void const* value; size_t value_len; } ;
struct TYPE_10__ {int * bh; } ;
struct TYPE_9__ {scalar_t__ not_found; } ;
struct ext4_xattr_ibody_find {TYPE_3__ iloc; TYPE_2__ s; } ;
struct TYPE_8__ {int base; scalar_t__ not_found; } ;
struct ext4_xattr_block_find {int * bh; TYPE_1__ s; } ;
struct ext4_inode {int dummy; } ;
typedef int handle_t ;
struct TYPE_12__ {int xattr_sem; scalar_t__ i_file_acl; } ;
struct TYPE_11__ {int s_inode_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_7__* FUNC_0 (struct inode*) ;
 TYPE_6__* FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,struct inode*,TYPE_3__*) ;
 struct ext4_inode* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct inode*,int ) ;
 long FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct inode*,struct ext4_xattr_info*,struct ext4_xattr_block_find*) ;
 int FUNC_15 (int *,struct inode*,struct ext4_xattr_info*,struct ext4_xattr_block_find*) ;
 int FUNC_16 (struct inode*,struct ext4_xattr_info*,struct ext4_xattr_ibody_find*) ;
 int FUNC_17 (int *,struct inode*,struct ext4_xattr_info*,struct ext4_xattr_ibody_find*) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (struct ext4_inode*,int ,int ) ;
 int FUNC_20 (char const*) ;
 int FUNC_21 (int *) ;

int
FUNC_22(handle_t *VAR_9, struct inode *VAR_10, int VAR_11,
        const char *VAR_12, const void *VAR_13, size_t VAR_14,
        int VAR_15)
{
 struct ext4_xattr_info VAR_16 = {
  .name_index = VAR_11,
  .name = VAR_12,
  .value = VAR_13,
  .value_len = VAR_14,

 };
 struct ext4_xattr_ibody_find VAR_17 = {
  .s = { .not_found = -VAR_2, },
 };
 struct ext4_xattr_block_find VAR_18 = {
  .s = { .not_found = -VAR_2, },
 };
 unsigned long VAR_19;
 int VAR_20;

 if (!VAR_12)
  return -VAR_1;
 if (FUNC_20(VAR_12) > 255)
  return -VAR_4;
 FUNC_4(&FUNC_0(VAR_10)->xattr_sem);
 VAR_19 = FUNC_13(VAR_10, VAR_6);
 FUNC_12(VAR_10, VAR_6);

 VAR_20 = FUNC_7(VAR_10, &VAR_17.iloc);
 if (VAR_20)
  goto cleanup;

 VAR_20 = FUNC_9(VAR_9, VAR_17.iloc.bh);
 if (VAR_20)
  goto cleanup;

 if (FUNC_13(VAR_10, VAR_5)) {
  struct ext4_inode *VAR_21 = FUNC_11(&VAR_17.iloc);
  FUNC_19(VAR_21, 0, FUNC_1(VAR_10->i_sb)->s_inode_size);
  FUNC_5(VAR_10, VAR_5);
 }

 VAR_20 = FUNC_16(VAR_10, &VAR_16, &VAR_17);
 if (VAR_20)
  goto cleanup;
 if (VAR_17.s.not_found)
  VAR_20 = FUNC_14(VAR_10, &VAR_16, &VAR_18);
 if (VAR_20)
  goto cleanup;
 if (VAR_17.s.not_found && VAR_18.s.not_found) {
  VAR_20 = -VAR_2;
  if (VAR_15 & VAR_8)
   goto cleanup;
  VAR_20 = 0;
  if (!VAR_13)
   goto cleanup;
 } else {
  VAR_20 = -VAR_0;
  if (VAR_15 & VAR_7)
   goto cleanup;
 }
 if (!VAR_13) {
  if (!VAR_17.s.not_found)
   VAR_20 = FUNC_17(VAR_9, VAR_10, &VAR_16, &VAR_17);
  else if (!VAR_18.s.not_found)
   VAR_20 = FUNC_15(VAR_9, VAR_10, &VAR_16, &VAR_18);
 } else {
  VAR_20 = FUNC_17(VAR_9, VAR_10, &VAR_16, &VAR_17);
  if (!VAR_20 && !VAR_18.s.not_found) {
   VAR_16.value = ((void*)0);
   VAR_20 = FUNC_15(VAR_9, VAR_10, &VAR_16, &VAR_18);
  } else if (VAR_20 == -VAR_3) {
   if (FUNC_0(VAR_10)->i_file_acl && !VAR_18.s.base) {
    VAR_20 = FUNC_14(VAR_10, &VAR_16, &VAR_18);
    if (VAR_20)
     goto cleanup;
   }
   VAR_20 = FUNC_15(VAR_9, VAR_10, &VAR_16, &VAR_18);
   if (VAR_20)
    goto cleanup;
   if (!VAR_17.s.not_found) {
    VAR_16.value = ((void*)0);
    VAR_20 = FUNC_17(VAR_9, VAR_10, &VAR_16,
            &VAR_17);
   }
  }
 }
 if (!VAR_20) {
  FUNC_18(VAR_9, VAR_10->i_sb);
  VAR_10->i_ctime = FUNC_6(VAR_10);
  if (!VAR_13)
   FUNC_5(VAR_10, VAR_6);
  VAR_20 = FUNC_10(VAR_9, VAR_10, &VAR_17.iloc);




  VAR_17.iloc.bh = ((void*)0);
  if (FUNC_2(VAR_10))
   FUNC_8(VAR_9);
 }

cleanup:
 FUNC_3(VAR_17.iloc.bh);
 FUNC_3(VAR_18.bh);
 if (VAR_19 == 0)
  FUNC_5(VAR_10, VAR_6);
 FUNC_21(&FUNC_0(VAR_10)->xattr_sem);
 return VAR_20;
}
