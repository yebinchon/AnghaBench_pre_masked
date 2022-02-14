
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct extent_buffer {scalar_t__ len; int bflags; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct TYPE_4__ {scalar_t__ dirty_metadata_bytes; int delalloc_lock; TYPE_1__* running_transaction; } ;
struct TYPE_3__ {scalar_t__ transid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct extent_buffer*) ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct btrfs_trans_handle *VAR_2, struct btrfs_root *VAR_3,
        struct extent_buffer *VAR_4)
{
 if (FUNC_1(VAR_4) ==
     VAR_3->fs_info->running_transaction->transid) {
  FUNC_0(VAR_4);

  if (FUNC_7(VAR_1, &VAR_4->bflags)) {
   FUNC_5(&VAR_3->fs_info->delalloc_lock);
   if (VAR_3->fs_info->dirty_metadata_bytes >= VAR_4->len)
    VAR_3->fs_info->dirty_metadata_bytes -= VAR_4->len;
   else {
    FUNC_6(&VAR_3->fs_info->delalloc_lock);
    FUNC_2(VAR_3->fs_info, -VAR_0,
       "Can't clear %lu bytes from "
       " dirty_mdatadata_bytes (%lu)",
       VAR_4->len,
       VAR_3->fs_info->dirty_metadata_bytes);
   }
   FUNC_6(&VAR_3->fs_info->delalloc_lock);
  }


  FUNC_3(VAR_4);
  FUNC_4(VAR_4);
 }
}
