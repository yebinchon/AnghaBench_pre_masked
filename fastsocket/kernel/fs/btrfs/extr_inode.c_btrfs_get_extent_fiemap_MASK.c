
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct extent_map {scalar_t__ block_start; scalar_t__ start; scalar_t__ block_len; scalar_t__ orig_start; scalar_t__ len; int * bdev; } ;
struct TYPE_2__ {int io_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct extent_map* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct extent_map*) ;
 struct extent_map* FUNC_3 () ;
 struct extent_map* FUNC_4 (struct inode*,struct page*,size_t,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int *,scalar_t__*,scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ FUNC_6 (struct extent_map*) ;
 int FUNC_7 (struct extent_map*) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

struct extent_map *FUNC_10(struct inode *VAR_4, struct page *VAR_5,
        size_t VAR_6, u64 VAR_7, u64 VAR_8,
        int VAR_9)
{
 struct extent_map *VAR_10;
 struct extent_map *VAR_11 = ((void*)0);
 u64 VAR_12 = VAR_7;
 u64 VAR_13;
 u64 VAR_14;
 u64 VAR_15;
 int VAR_16 = 0;

 VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if (FUNC_2(VAR_10))
  return VAR_10;
 if (VAR_10) {




  if (VAR_10->block_start != VAR_3)
   return VAR_10;
  else
   VAR_11 = VAR_10;
 }


 VAR_13 = VAR_7 + VAR_8;
 if (VAR_13 < VAR_7)
  VAR_13 = (u64)-1;
 else
  VAR_13 -= 1;

 VAR_10 = ((void*)0);


 VAR_14 = FUNC_5(&FUNC_0(VAR_4)->io_tree, &VAR_12,
     VAR_13, VAR_8, VAR_1, 1);
 VAR_15 = VAR_12 + VAR_14;
 if (VAR_15 < VAR_12)
  VAR_15 = (u64)-1;





 if (VAR_12 > VAR_13 || VAR_15 <= VAR_7) {
  VAR_10 = VAR_11;
  VAR_11 = ((void*)0);
  goto out;
 }




 VAR_12 = FUNC_8(VAR_7,VAR_12);
 VAR_14 = VAR_15 - VAR_12;

 if (VAR_14 > 0) {
  u64 VAR_17 = VAR_7;
  u64 VAR_18 = VAR_8;

  VAR_10 = FUNC_3();
  if (!VAR_10) {
   VAR_16 = -VAR_0;
   goto out;
  }
  if (VAR_11) {
   u64 VAR_19 = FUNC_6(VAR_11);

   if (VAR_19 <= VAR_7 || (VAR_11->start > VAR_13)) {
    FUNC_7(VAR_11);
    VAR_11 = ((void*)0);
   } else {
    VAR_17 = FUNC_8(VAR_11->start, VAR_7);
    VAR_18 = VAR_19 - VAR_17;
   }
  }
  VAR_10->bdev = ((void*)0);
  if (VAR_11 && VAR_12 > VAR_17) {




   VAR_10->len = FUNC_9(VAR_18,
          VAR_12 - VAR_17);
   VAR_10->start = VAR_17;
   VAR_10->orig_start = VAR_17;




   VAR_10->block_start = VAR_11->block_start;
   VAR_10->block_len = VAR_18;
  } else {
   VAR_10->start = VAR_12;
   VAR_10->len = VAR_14;
   VAR_10->orig_start = VAR_12;
   VAR_10->block_start = VAR_2;
   VAR_10->block_len = VAR_14;
  }
 } else if (VAR_11) {
  return VAR_11;
 }
out:

 FUNC_7(VAR_11);
 if (VAR_16) {
  FUNC_7(VAR_10);
  return FUNC_1(VAR_16);
 }
 return VAR_10;
}
