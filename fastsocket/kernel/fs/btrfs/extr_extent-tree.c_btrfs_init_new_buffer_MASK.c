
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct extent_buffer {scalar_t__ len; scalar_t__ start; int bflags; } ;
struct btrfs_trans_handle {int blocks_used; TYPE_2__* transaction; int transid; } ;
struct TYPE_3__ {scalar_t__ objectid; } ;
struct btrfs_root {int log_transid; int dirty_log_pages; TYPE_1__ root_key; } ;
struct TYPE_4__ {int dirty_pages; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct extent_buffer* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct extent_buffer* FUNC_1 (struct btrfs_root*,int ,int ) ;
 int FUNC_2 (scalar_t__,struct extent_buffer*,int) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*,int ) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*,struct extent_buffer*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_10 (int *,scalar_t__,scalar_t__,int ) ;

struct extent_buffer *FUNC_11(struct btrfs_trans_handle *VAR_4,
         struct btrfs_root *VAR_5,
         u64 VAR_6, u32 VAR_7,
         int VAR_8)
{
 struct extent_buffer *VAR_9;

 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (!VAR_9)
  return FUNC_0(-VAR_1);
 FUNC_4(VAR_9, VAR_4->transid);
 FUNC_2(VAR_5->root_key.objectid, VAR_9, VAR_8);
 FUNC_6(VAR_9);
 FUNC_7(VAR_4, VAR_5, VAR_9);
 FUNC_8(VAR_2, &VAR_9->bflags);

 FUNC_5(VAR_9);
 FUNC_3(VAR_9);

 if (VAR_5->root_key.objectid == VAR_0) {




  if (VAR_5->log_transid % 2 == 0)
   FUNC_9(&VAR_5->dirty_log_pages, VAR_9->start,
     VAR_9->start + VAR_9->len - 1, VAR_3);
  else
   FUNC_10(&VAR_5->dirty_log_pages, VAR_9->start,
     VAR_9->start + VAR_9->len - 1, VAR_3);
 } else {
  FUNC_9(&VAR_4->transaction->dirty_pages, VAR_9->start,
    VAR_9->start + VAR_9->len - 1, VAR_3);
 }
 VAR_4->blocks_used++;

 return VAR_9;
}
