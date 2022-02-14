
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_map_tree {int dummy; } ;
struct extent_map {scalar_t__ start; scalar_t__ block_start; int block_len; int flags; scalar_t__ len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct extent_map_tree*,struct extent_map*) ;
 scalar_t__ FUNC_2 (struct extent_map*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct extent_map_tree *VAR_2,
    struct extent_map *VAR_3,
    struct extent_map *VAR_4,
    u64 VAR_5, u64 VAR_6)
{
 u64 VAR_7;

 FUNC_0(VAR_5 < VAR_4->start || VAR_5 >= FUNC_2(VAR_4));
 VAR_7 = VAR_5 - VAR_4->start;
 VAR_4->start = VAR_5;
 VAR_4->len = VAR_6;
 if (VAR_4->block_start < VAR_1 &&
     !FUNC_3(VAR_0, &VAR_4->flags)) {
  VAR_4->block_start += VAR_7;
  VAR_4->block_len -= VAR_7;
 }
 return FUNC_1(VAR_2, VAR_4);
}
