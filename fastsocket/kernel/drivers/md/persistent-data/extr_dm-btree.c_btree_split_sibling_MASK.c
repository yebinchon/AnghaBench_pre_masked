
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct shadow_spine {struct dm_block** nodes; TYPE_3__* info; } ;
struct dm_block {int dummy; } ;
struct TYPE_5__ {void* flags; int value_size; int max_entries; void* nr_entries; } ;
struct btree_node {int * keys; TYPE_1__ header; } ;
typedef int dm_block_t ;
typedef int __le64 ;
struct TYPE_6__ {int size; } ;
struct TYPE_7__ {TYPE_2__ value_type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 struct btree_node* FUNC_3 (struct dm_block*) ;
 int FUNC_4 (struct dm_block*) ;
 int FUNC_5 (int,struct btree_node*,unsigned int,scalar_t__,int *) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,size_t) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (TYPE_3__*,struct dm_block**) ;
 struct dm_block* FUNC_11 (struct shadow_spine*) ;
 struct dm_block* FUNC_12 (struct shadow_spine*) ;
 int FUNC_13 (TYPE_3__*,struct dm_block*) ;
 int * FUNC_14 (struct btree_node*,unsigned int) ;

__attribute__((used)) static int FUNC_15(struct shadow_spine *VAR_1, dm_block_t VAR_2,
          unsigned VAR_3, uint64_t VAR_4)
{
 int VAR_5;
 size_t VAR_6;
 unsigned VAR_7, VAR_8;
 struct dm_block *VAR_9, *VAR_10, *VAR_11;
 struct btree_node *VAR_12, *VAR_13, *VAR_14;
 __le64 VAR_15;

 VAR_9 = FUNC_11(VAR_1);

 VAR_5 = FUNC_10(VAR_1->info, &VAR_10);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_12 = FUNC_3(VAR_9);
 VAR_13 = FUNC_3(VAR_10);

 VAR_7 = FUNC_6(VAR_12->header.nr_entries) / 2;
 VAR_8 = FUNC_6(VAR_12->header.nr_entries) - VAR_7;

 VAR_12->header.nr_entries = FUNC_1(VAR_7);

 VAR_13->header.flags = VAR_12->header.flags;
 VAR_13->header.nr_entries = FUNC_1(VAR_8);
 VAR_13->header.max_entries = VAR_12->header.max_entries;
 VAR_13->header.value_size = VAR_12->header.value_size;
 FUNC_8(VAR_13->keys, VAR_12->keys + VAR_7, VAR_8 * sizeof(VAR_13->keys[0]));

 VAR_6 = FUNC_6(VAR_12->header.flags) & VAR_0 ?
  sizeof(uint64_t) : VAR_1->info->value_type.size;
 FUNC_8(FUNC_14(VAR_13, 0), FUNC_14(VAR_12, VAR_7),
        VAR_6 * VAR_8);




 VAR_11 = FUNC_12(VAR_1);

 VAR_14 = FUNC_3(VAR_11);
 VAR_15 = FUNC_2(FUNC_4(VAR_9));
 FUNC_0(&VAR_15);
 FUNC_9(FUNC_14(VAR_14, VAR_3),
      &VAR_15, sizeof(__le64));

 VAR_15 = FUNC_2(FUNC_4(VAR_10));
 FUNC_0(&VAR_15);

 VAR_5 = FUNC_5(sizeof(__le64), VAR_14, VAR_3 + 1,
        FUNC_7(VAR_13->keys[0]), &VAR_15);
 if (VAR_5)
  return VAR_5;

 if (VAR_4 < FUNC_7(VAR_13->keys[0])) {
  FUNC_13(VAR_1->info, VAR_10);
  VAR_1->nodes[1] = VAR_9;
 } else {
  FUNC_13(VAR_1->info, VAR_9);
  VAR_1->nodes[1] = VAR_10;
 }

 return 0;
}
