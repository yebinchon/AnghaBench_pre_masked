
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct extent_map_tree {int lock; } ;
struct extent_map {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct TYPE_2__ {struct extent_io_tree io_tree; struct extent_map_tree extent_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct extent_map*) ;
 scalar_t__ VAR_0 ;
 struct extent_map* FUNC_2 (struct inode*,int *,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct extent_io_tree*,scalar_t__,scalar_t__) ;
 struct extent_map* FUNC_4 (struct extent_map_tree*,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct extent_io_tree*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct extent_map *FUNC_8(struct inode *VAR_1, u64 VAR_2)
{
 struct extent_map_tree *VAR_3 = &FUNC_0(VAR_1)->extent_tree;
 struct extent_io_tree *VAR_4 = &FUNC_0(VAR_1)->io_tree;
 struct extent_map *VAR_5;
 u64 VAR_6 = VAR_0;





 FUNC_5(&VAR_3->lock);
 VAR_5 = FUNC_4(VAR_3, VAR_2, VAR_6);
 FUNC_6(&VAR_3->lock);

 if (!VAR_5) {

  FUNC_3(VAR_4, VAR_2, VAR_2 + VAR_6 - 1);
  VAR_5 = FUNC_2(VAR_1, ((void*)0), 0, VAR_2, VAR_6, 0);
  FUNC_7(VAR_4, VAR_2, VAR_2 + VAR_6 - 1);

  if (FUNC_1(VAR_5))
   return ((void*)0);
 }

 return VAR_5;
}
