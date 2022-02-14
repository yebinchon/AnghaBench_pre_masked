
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct inode {int i_ctime; int i_sb; } ;
struct ext3_xattr_info {int name_index; char const* name; void const* value; size_t value_len; } ;
struct TYPE_20__ {int * bh; } ;
struct TYPE_18__ {scalar_t__ not_found; } ;
struct ext3_xattr_ibody_find {TYPE_8__ iloc; TYPE_2__ s; } ;
struct TYPE_17__ {int base; scalar_t__ not_found; } ;
struct ext3_xattr_block_find {int * bh; TYPE_1__ s; } ;
struct ext3_inode {int dummy; } ;
struct TYPE_19__ {int h_sync; } ;
typedef TYPE_3__ handle_t ;
struct TYPE_16__ {int i_state; int xattr_sem; scalar_t__ i_file_acl; } ;
struct TYPE_15__ {int s_inode_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_14__* FUNC_0 (struct inode*) ;
 TYPE_13__* FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,TYPE_8__*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,struct inode*,TYPE_8__*) ;
 struct ext3_inode* FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (struct inode*,struct ext3_xattr_info*,struct ext3_xattr_block_find*) ;
 int FUNC_10 (TYPE_3__*,struct inode*,struct ext3_xattr_info*,struct ext3_xattr_block_find*) ;
 int FUNC_11 (struct inode*,struct ext3_xattr_info*,struct ext3_xattr_ibody_find*) ;
 int FUNC_12 (TYPE_3__*,struct inode*,struct ext3_xattr_info*,struct ext3_xattr_ibody_find*) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (struct ext3_inode*,int ,int ) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (int *) ;

int
FUNC_17(handle_t *VAR_9, struct inode *VAR_10, int VAR_11,
        const char *VAR_12, const void *VAR_13, size_t VAR_14,
        int VAR_15)
{
 struct ext3_xattr_info VAR_16 = {
  .name_index = VAR_11,
  .name = VAR_12,
  .value = VAR_13,
  .value_len = VAR_14,

 };
 struct ext3_xattr_ibody_find VAR_17 = {
  .s = { .not_found = -VAR_3, },
 };
 struct ext3_xattr_block_find VAR_18 = {
  .s = { .not_found = -VAR_3, },
 };
 int VAR_19;

 if (!VAR_12)
  return -VAR_2;
 if (FUNC_15(VAR_12) > 255)
  return -VAR_5;
 FUNC_4(&FUNC_0(VAR_10)->xattr_sem);
 VAR_19 = FUNC_5(VAR_10, &VAR_17.iloc);
 if (VAR_19)
  goto cleanup;

 VAR_19 = FUNC_6(VAR_9, VAR_17.iloc.bh);
 if (VAR_19)
  goto cleanup;

 if (FUNC_0(VAR_10)->i_state & VAR_6) {
  struct ext3_inode *VAR_20 = FUNC_8(&VAR_17.iloc);
  FUNC_14(VAR_20, 0, FUNC_1(VAR_10->i_sb)->s_inode_size);
  FUNC_0(VAR_10)->i_state &= ~VAR_6;
 }

 VAR_19 = FUNC_11(VAR_10, &VAR_16, &VAR_17);
 if (VAR_19)
  goto cleanup;
 if (VAR_17.s.not_found)
  VAR_19 = FUNC_9(VAR_10, &VAR_16, &VAR_18);
 if (VAR_19)
  goto cleanup;
 if (VAR_17.s.not_found && VAR_18.s.not_found) {
  VAR_19 = -VAR_3;
  if (VAR_15 & VAR_8)
   goto cleanup;
  VAR_19 = 0;
  if (!VAR_13)
   goto cleanup;
 } else {
  VAR_19 = -VAR_1;
  if (VAR_15 & VAR_7)
   goto cleanup;
 }
 if (!VAR_13) {
  if (!VAR_17.s.not_found)
   VAR_19 = FUNC_12(VAR_9, VAR_10, &VAR_16, &VAR_17);
  else if (!VAR_18.s.not_found)
   VAR_19 = FUNC_10(VAR_9, VAR_10, &VAR_16, &VAR_18);
 } else {
  VAR_19 = FUNC_12(VAR_9, VAR_10, &VAR_16, &VAR_17);
  if (!VAR_19 && !VAR_18.s.not_found) {
   VAR_16.value = ((void*)0);
   VAR_19 = FUNC_10(VAR_9, VAR_10, &VAR_16, &VAR_18);
  } else if (VAR_19 == -VAR_4) {
   if (FUNC_0(VAR_10)->i_file_acl && !VAR_18.s.base) {
    VAR_19 = FUNC_9(VAR_10, &VAR_16, &VAR_18);
    if (VAR_19)
     goto cleanup;
   }
   VAR_19 = FUNC_10(VAR_9, VAR_10, &VAR_16, &VAR_18);
   if (VAR_19)
    goto cleanup;
   if (!VAR_17.s.not_found) {
    VAR_16.value = ((void*)0);
    VAR_19 = FUNC_12(VAR_9, VAR_10, &VAR_16,
            &VAR_17);
   }
  }
 }
 if (!VAR_19) {
  FUNC_13(VAR_9, VAR_10->i_sb);
  VAR_10->i_ctime = VAR_0;
  VAR_19 = FUNC_7(VAR_9, VAR_10, &VAR_17.iloc);




  VAR_17.iloc.bh = ((void*)0);
  if (FUNC_2(VAR_10))
   VAR_9->h_sync = 1;
 }

cleanup:
 FUNC_3(VAR_17.iloc.bh);
 FUNC_3(VAR_18.bh);
 FUNC_16(&FUNC_0(VAR_10)->xattr_sem);
 return VAR_19;
}
