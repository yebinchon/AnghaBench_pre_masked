
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct extent_map_tree {int lock; } ;
struct extent_map {unsigned long flags; scalar_t__ start; scalar_t__ len; scalar_t__ block_start; scalar_t__ orig_start; scalar_t__ block_len; int compress_type; int bdev; } ;
struct TYPE_2__ {struct extent_map_tree extent_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct extent_map_tree*,struct extent_map*) ;
 struct extent_map* FUNC_4 () ;
 int FUNC_5 (int ,unsigned long*) ;
 int FUNC_6 (struct extent_map*) ;
 struct extent_map* FUNC_7 (struct extent_map_tree*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct extent_map_tree*,struct extent_map*) ;
 int FUNC_9 (int ,unsigned long*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct inode *VAR_3, u64 VAR_4, u64 VAR_5,
       int VAR_6)
{
 struct extent_map *VAR_7;
 struct extent_map *VAR_8 = ((void*)0);
 struct extent_map *VAR_9 = ((void*)0);
 struct extent_map_tree *VAR_10 = &FUNC_0(VAR_3)->extent_tree;
 u64 VAR_11 = VAR_5 - VAR_4 + 1;
 int VAR_12;
 int VAR_13 = 1;
 unsigned long VAR_14;
 int VAR_15 = 0;

 FUNC_2(VAR_5 < VAR_4);
 if (VAR_5 == (u64)-1) {
  VAR_11 = (u64)-1;
  VAR_13 = 0;
 }
 while (1) {
  if (!VAR_8)
   VAR_8 = FUNC_4();
  if (!VAR_9)
   VAR_9 = FUNC_4();
  FUNC_1(!VAR_8 || !VAR_9);

  FUNC_10(&VAR_10->lock);
  VAR_7 = FUNC_7(VAR_10, VAR_4, VAR_11);
  if (!VAR_7) {
   FUNC_11(&VAR_10->lock);
   break;
  }
  VAR_14 = VAR_7->flags;
  if (VAR_6 && FUNC_9(VAR_1, &VAR_7->flags)) {
   if (VAR_13 && VAR_7->start + VAR_7->len >= VAR_4 + VAR_11) {
    FUNC_6(VAR_7);
    FUNC_11(&VAR_10->lock);
    break;
   }
   VAR_4 = VAR_7->start + VAR_7->len;
   if (VAR_13)
    VAR_11 = VAR_4 + VAR_11 - (VAR_7->start + VAR_7->len);
   FUNC_6(VAR_7);
   FUNC_11(&VAR_10->lock);
   continue;
  }
  VAR_15 = FUNC_9(VAR_0, &VAR_7->flags);
  FUNC_5(VAR_1, &VAR_7->flags);
  FUNC_8(VAR_10, VAR_7);

  if (VAR_7->block_start < VAR_2 &&
      VAR_7->start < VAR_4) {
   VAR_8->start = VAR_7->start;
   VAR_8->len = VAR_4 - VAR_7->start;
   VAR_8->orig_start = VAR_7->orig_start;
   VAR_8->block_start = VAR_7->block_start;

   if (VAR_15)
    VAR_8->block_len = VAR_7->block_len;
   else
    VAR_8->block_len = VAR_8->len;

   VAR_8->bdev = VAR_7->bdev;
   VAR_8->flags = VAR_14;
   VAR_8->compress_type = VAR_7->compress_type;
   VAR_12 = FUNC_3(VAR_10, VAR_8);
   FUNC_1(VAR_12);
   FUNC_6(VAR_8);
   VAR_8 = VAR_9;
   VAR_9 = ((void*)0);
  }
  if (VAR_7->block_start < VAR_2 &&
      VAR_13 && VAR_7->start + VAR_7->len > VAR_4 + VAR_11) {
   u64 VAR_16 = VAR_4 + VAR_11 - VAR_7->start;

   VAR_8->start = VAR_4 + VAR_11;
   VAR_8->len = VAR_7->start + VAR_7->len - (VAR_4 + VAR_11);
   VAR_8->bdev = VAR_7->bdev;
   VAR_8->flags = VAR_14;
   VAR_8->compress_type = VAR_7->compress_type;

   if (VAR_15) {
    VAR_8->block_len = VAR_7->block_len;
    VAR_8->block_start = VAR_7->block_start;
    VAR_8->orig_start = VAR_7->orig_start;
   } else {
    VAR_8->block_len = VAR_8->len;
    VAR_8->block_start = VAR_7->block_start + VAR_16;
    VAR_8->orig_start = VAR_8->start;
   }

   VAR_12 = FUNC_3(VAR_10, VAR_8);
   FUNC_1(VAR_12);
   FUNC_6(VAR_8);
   VAR_8 = ((void*)0);
  }
  FUNC_11(&VAR_10->lock);


  FUNC_6(VAR_7);

  FUNC_6(VAR_7);
 }
 if (VAR_8)
  FUNC_6(VAR_8);
 if (VAR_9)
  FUNC_6(VAR_9);
 return 0;
}
