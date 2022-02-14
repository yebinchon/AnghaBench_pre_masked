
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct ro_spine {int dummy; } ;
struct TYPE_2__ {size_t size; } ;
struct dm_btree_info {int levels; TYPE_1__ value_type; } ;
typedef int dm_block_t ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (struct ro_spine*,int ,scalar_t__,int ,scalar_t__*,void*,size_t) ;
 int FUNC_1 (struct ro_spine*) ;
 int FUNC_2 (struct ro_spine*,struct dm_btree_info*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

int FUNC_4(struct dm_btree_info *VAR_2, dm_block_t VAR_3,
      uint64_t *VAR_4, void *VAR_5)
{
 unsigned VAR_6, VAR_7 = VAR_2->levels - 1;
 int VAR_8 = -VAR_0;
 uint64_t VAR_9;
 __le64 VAR_10;
 struct ro_spine VAR_11;

 FUNC_2(&VAR_11, VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_2->levels; VAR_6++) {
  size_t VAR_12;
  void *VAR_13;

  if (VAR_6 == VAR_7) {
   VAR_13 = VAR_5;
   VAR_12 = VAR_2->value_type.size;

  } else {
   VAR_13 = &VAR_10;
   VAR_12 = sizeof(uint64_t);
  }

  VAR_8 = FUNC_0(&VAR_11, VAR_3, VAR_4[VAR_6],
         VAR_1, &VAR_9,
         VAR_13, VAR_12);

  if (!VAR_8) {
   if (VAR_9 != VAR_4[VAR_6]) {
    FUNC_1(&VAR_11);
    return -VAR_0;
   }
  } else {
   FUNC_1(&VAR_11);
   return VAR_8;
  }

  VAR_3 = FUNC_3(VAR_10);
 }
 FUNC_1(&VAR_11);

 return VAR_8;
}
