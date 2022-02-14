
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct node_header {scalar_t__ flags; scalar_t__ csum; scalar_t__ value_size; scalar_t__ max_entries; scalar_t__ nr_entries; int blocknr; } ;
struct dm_block_validator {int dummy; } ;
struct dm_block {int dummy; } ;
struct btree_node {struct node_header header; } ;
typedef int __le64 ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 struct btree_node* FUNC_2 (struct dm_block*) ;
 scalar_t__ FUNC_3 (struct dm_block*) ;
 int FUNC_4 (scalar_t__*,size_t,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dm_block_validator *VAR_5,
        struct dm_block *VAR_6,
        size_t VAR_7)
{
 struct btree_node *VAR_8 = FUNC_2(VAR_6);
 struct node_header *VAR_9 = &VAR_8->header;
 size_t VAR_10;
 __le32 VAR_11;
 uint32_t VAR_12;

 if (FUNC_3(VAR_6) != FUNC_6(VAR_9->blocknr)) {
  FUNC_0("node_check failed: blocknr %llu != wanted %llu",
       FUNC_6(VAR_9->blocknr), FUNC_3(VAR_6));
  return -VAR_2;
 }

 VAR_11 = FUNC_1(FUNC_4(&VAR_9->flags,
            VAR_7 - sizeof(__le32),
            VAR_0));
 if (VAR_11 != VAR_9->csum) {
  FUNC_0("node_check failed: csum %u != wanted %u",
       FUNC_5(VAR_11), FUNC_5(VAR_9->csum));
  return -VAR_1;
 }

 VAR_10 = FUNC_5(VAR_9->value_size);

 if (sizeof(struct node_header) +
     (sizeof(__le64) + VAR_10) * FUNC_5(VAR_9->max_entries) > VAR_7) {
  FUNC_0("node_check failed: max_entries too large");
  return -VAR_1;
 }

 if (FUNC_5(VAR_9->nr_entries) > FUNC_5(VAR_9->max_entries)) {
  FUNC_0("node_check failed: too many entries");
  return -VAR_1;
 }




 VAR_12 = FUNC_5(VAR_9->flags);
 if (!(VAR_12 & VAR_3) && !(VAR_12 & VAR_4)) {
  FUNC_0("node_check failed: node is neither INTERNAL or LEAF");
  return -VAR_1;
 }

 return 0;
}
