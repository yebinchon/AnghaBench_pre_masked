
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int level; } ;
struct dm_btree_info {int levels; } ;



__attribute__((used)) static bool FUNC_0(struct dm_btree_info *VAR_0, struct frame *VAR_1)
{
 return VAR_1->level < (VAR_0->levels - 1);
}
