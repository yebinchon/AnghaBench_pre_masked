
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct extent_map_tree {int lock; } ;
struct extent_map {scalar_t__ block_start; } ;
struct TYPE_2__ {struct extent_map_tree extent_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct extent_map*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct extent_map* FUNC_4 (struct extent_map_tree*,scalar_t__,scalar_t__) ;

__attribute__((used)) static u64 FUNC_5(struct inode *VAR_1, u64 VAR_2,
          u64 VAR_3)
{
 struct extent_map_tree *VAR_4 = &FUNC_0(VAR_1)->extent_tree;
 struct extent_map *VAR_5;
 u64 VAR_6 = 0;

 FUNC_2(&VAR_4->lock);
 VAR_5 = FUNC_4(VAR_4, VAR_2, VAR_3);
 if (VAR_5) {





  if (VAR_5->block_start >= VAR_0) {
   FUNC_1(VAR_5);
   VAR_5 = FUNC_4(VAR_4, 0, 0);
   if (VAR_5 && VAR_5->block_start < VAR_0)
    VAR_6 = VAR_5->block_start;
   if (VAR_5)
    FUNC_1(VAR_5);
  } else {
   VAR_6 = VAR_5->block_start;
   FUNC_1(VAR_5);
  }
 }
 FUNC_3(&VAR_4->lock);

 return VAR_6;
}
