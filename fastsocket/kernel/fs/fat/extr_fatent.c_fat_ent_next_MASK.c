
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msdos_sb_info {scalar_t__ max_cluster; TYPE_1__* fatent_ops; } ;
struct fat_entry {scalar_t__ entry; } ;
struct TYPE_2__ {scalar_t__ (* ent_next ) (struct fat_entry*) ;} ;


 scalar_t__ FUNC_0 (struct fat_entry*) ;

__attribute__((used)) static inline int FUNC_1(struct msdos_sb_info *VAR_0,
          struct fat_entry *VAR_1)
{
 if (VAR_0->fatent_ops->ent_next(VAR_1)) {
  if (VAR_1->entry < VAR_0->max_cluster)
   return 1;
 }
 return 0;
}
