
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hfs_btree_header_rec {int depth; void* attributes; void* free_nodes; void* node_count; void* leaf_tail; void* leaf_head; void* leaf_count; void* root; } ;
struct hfs_btree {int depth; int attributes; int free_nodes; int node_count; int leaf_tail; int leaf_head; int leaf_count; int root; } ;
struct hfs_bnode_desc {int dummy; } ;
struct hfs_bnode {struct page** page; } ;


 scalar_t__ FUNC_0 (struct hfs_bnode*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 struct hfs_bnode* FUNC_3 (struct hfs_btree*,int ) ;
 int FUNC_4 (struct hfs_bnode*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

void FUNC_8(struct hfs_btree *VAR_0)
{
 struct hfs_btree_header_rec *VAR_1;
 struct hfs_bnode *VAR_2;
 struct page *VAR_3;

 VAR_2 = FUNC_3(VAR_0, 0);
 if (FUNC_0(VAR_2))

  return;

 VAR_3 = VAR_2->page[0];
 VAR_1 = (struct hfs_btree_header_rec *)(FUNC_5(VAR_3) + sizeof(struct hfs_bnode_desc));

 VAR_1->root = FUNC_2(VAR_0->root);
 VAR_1->leaf_count = FUNC_2(VAR_0->leaf_count);
 VAR_1->leaf_head = FUNC_2(VAR_0->leaf_head);
 VAR_1->leaf_tail = FUNC_2(VAR_0->leaf_tail);
 VAR_1->node_count = FUNC_2(VAR_0->node_count);
 VAR_1->free_nodes = FUNC_2(VAR_0->free_nodes);
 VAR_1->attributes = FUNC_2(VAR_0->attributes);
 VAR_1->depth = FUNC_1(VAR_0->depth);

 FUNC_6(VAR_3);
 FUNC_7(VAR_3);
 FUNC_4(VAR_2);
}
