
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct shadow_spine {int dummy; } ;
struct TYPE_5__ {int context; int (* dec ) (int ,int ) ;} ;
struct dm_btree_info {int levels; TYPE_2__ value_type; } ;
struct TYPE_4__ {int nr_entries; } ;
struct btree_node {TYPE_1__ header; } ;
typedef int dm_block_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btree_node*,int) ;
 struct btree_node* FUNC_2 (int ) ;
 int FUNC_3 (struct shadow_spine*) ;
 int FUNC_4 (struct shadow_spine*,struct dm_btree_info*) ;
 int FUNC_5 (int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_6 (struct shadow_spine*,struct dm_btree_info*,TYPE_2__*,int ,int ,unsigned int*) ;
 int FUNC_7 (struct shadow_spine*) ;
 int FUNC_8 (struct shadow_spine*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct btree_node*,int) ;
 int FUNC_11 (struct btree_node*,int) ;

int FUNC_12(struct dm_btree_info *VAR_1, dm_block_t VAR_2,
      uint64_t *VAR_3, dm_block_t *VAR_4)
{
 unsigned VAR_5, VAR_6 = VAR_1->levels - 1;
 int VAR_7 = 0, VAR_8 = 0;
 struct shadow_spine VAR_9;
 struct btree_node *VAR_10;

 FUNC_4(&VAR_9, VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_1->levels; VAR_5++) {
  VAR_8 = FUNC_6(&VAR_9, VAR_1,
          (VAR_5 == VAR_6 ?
    &VAR_1->value_type : &VAR_0),
          VAR_2, VAR_3[VAR_5], (unsigned *)&VAR_7);
  if (VAR_8 < 0)
   break;

  VAR_10 = FUNC_2(FUNC_7(&VAR_9));
  if (VAR_5 != VAR_6) {
   VAR_2 = FUNC_10(VAR_10, VAR_7);
   continue;
  }

  FUNC_0(VAR_7 < 0 || VAR_7 >= FUNC_5(VAR_10->header.nr_entries));

  if (VAR_1->value_type.dec)
   VAR_1->value_type.dec(VAR_1->value_type.context,
          FUNC_11(VAR_10, VAR_7));

  FUNC_1(VAR_10, VAR_7);
 }

 *VAR_4 = FUNC_8(&VAR_9);
 FUNC_3(&VAR_9);

 return VAR_8;
}
