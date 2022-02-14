
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u64 ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct extent_map_tree {int lock; } ;
struct extent_map {void* len; void* start; int bdev; scalar_t__ block_start; void* block_len; } ;
struct TYPE_8__ {TYPE_3__* root; struct extent_map_tree extent_tree; } ;
struct TYPE_7__ {TYPE_2__* fs_info; } ;
struct TYPE_6__ {TYPE_1__* fs_devices; } ;
struct TYPE_5__ {int latest_bdev; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct extent_map* FUNC_1 (int) ;
 int FUNC_2 (struct extent_map_tree*,struct extent_map*) ;
 struct extent_map* FUNC_3 () ;
 int FUNC_4 (struct extent_map*) ;
 struct extent_map* FUNC_5 (struct extent_map_tree*,void*,void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct extent_map *FUNC_10(struct inode *VAR_3,
  struct page *VAR_4, size_t VAR_5, u64 VAR_6, u64 VAR_7,
  int VAR_8)
{
 struct extent_map_tree *VAR_9 = &FUNC_0(VAR_3)->extent_tree;
 struct extent_map *VAR_10;
 int VAR_11;

 FUNC_6(&VAR_9->lock);
 VAR_10 = FUNC_5(VAR_9, VAR_6, VAR_7);
 if (VAR_10) {
  VAR_10->bdev =
   FUNC_0(VAR_3)->root->fs_info->fs_devices->latest_bdev;
  FUNC_7(&VAR_9->lock);
  goto out;
 }
 FUNC_7(&VAR_9->lock);

 VAR_10 = FUNC_3();
 if (!VAR_10) {
  VAR_10 = FUNC_1(-VAR_2);
  goto out;
 }
 VAR_10->start = 0;
 VAR_10->len = (u64)-1;
 VAR_10->block_len = (u64)-1;
 VAR_10->block_start = 0;
 VAR_10->bdev = FUNC_0(VAR_3)->root->fs_info->fs_devices->latest_bdev;

 FUNC_8(&VAR_9->lock);
 VAR_11 = FUNC_2(VAR_9, VAR_10);
 if (VAR_11 == -VAR_0) {
  u64 VAR_12 = VAR_10->start;
  u64 VAR_13 = VAR_10->len;

  FUNC_4(VAR_10);
  VAR_10 = FUNC_5(VAR_9, VAR_6, VAR_7);
  if (VAR_10) {
   VAR_11 = 0;
  } else {
   VAR_10 = FUNC_5(VAR_9, VAR_12,
         VAR_13);
   VAR_11 = -VAR_1;
  }
 } else if (VAR_11) {
  FUNC_4(VAR_10);
  VAR_10 = ((void*)0);
 }
 FUNC_9(&VAR_9->lock);

 if (VAR_11)
  VAR_10 = FUNC_1(VAR_11);
out:
 return VAR_10;
}
