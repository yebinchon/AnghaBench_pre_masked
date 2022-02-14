
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfs_find_data {int record; int keyoffset; int entryoffset; struct hfs_bnode* bnode; struct hfs_btree* tree; } ;
struct hfs_btree {int node_size; scalar_t__ leaf_tail; int inode; } ;
struct hfs_bnode_desc {void* prev; void* num_recs; void* next; scalar_t__ reserved; int height; int type; } ;
struct hfs_bnode {scalar_t__ this; scalar_t__ next; scalar_t__ prev; int num_recs; int height; int type; int parent; } ;
typedef int node_desc ;


 int VAR_0 ;
 int VAR_1 ;
 struct hfs_bnode* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hfs_bnode*) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 struct hfs_bnode* FUNC_5 (struct hfs_btree*) ;
 int FUNC_6 (struct hfs_bnode*,int,struct hfs_bnode*,int,int) ;
 int FUNC_7 (struct hfs_bnode*) ;
 struct hfs_bnode* FUNC_8 (struct hfs_btree*,scalar_t__) ;
 int FUNC_9 (struct hfs_bnode*) ;
 int FUNC_10 (struct hfs_bnode*) ;
 int FUNC_11 (struct hfs_bnode*,struct hfs_bnode_desc*,int ,int) ;
 int FUNC_12 (struct hfs_bnode*,int) ;
 int FUNC_13 (struct hfs_bnode*,struct hfs_bnode_desc*,int ,int) ;
 int FUNC_14 (struct hfs_bnode*,int,int) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static struct hfs_bnode *FUNC_16(struct hfs_find_data *VAR_2)
{
 struct hfs_btree *VAR_3;
 struct hfs_bnode *VAR_4, *VAR_5, *VAR_6;
 struct hfs_bnode_desc VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_3 = VAR_2->tree;
 VAR_4 = VAR_2->bnode;
 VAR_5 = FUNC_5(VAR_3);
 if (FUNC_1(VAR_5))
  return VAR_5;
 FUNC_9(VAR_4);
 FUNC_4(VAR_0, "split_nodes: %d - %d - %d\n",
  VAR_4->this, VAR_5->this, VAR_4->next);
 VAR_5->next = VAR_4->next;
 VAR_5->prev = VAR_4->this;
 VAR_5->parent = VAR_4->parent;
 VAR_5->type = VAR_4->type;
 VAR_5->height = VAR_4->height;

 if (VAR_4->next)
  VAR_6 = FUNC_8(VAR_3, VAR_4->next);
 else
  VAR_6 = ((void*)0);

 if (FUNC_1(VAR_6)) {
  FUNC_10(VAR_4);
  FUNC_10(VAR_5);
  return VAR_6;
 }

 VAR_14 = VAR_3->node_size / 2 - VAR_4->num_recs * 2 - 14;
 VAR_11 = VAR_3->node_size - 4;
 VAR_8 = 1;
 for (;;) {
  VAR_12 = FUNC_12(VAR_4, VAR_11);
  if (VAR_12 > VAR_14)
   break;
  VAR_11 -= 2;
  if (++VAR_8 < VAR_4->num_recs)
   continue;

  FUNC_10(VAR_4);
  FUNC_10(VAR_5);
  if (VAR_6)
   FUNC_10(VAR_6);
  return FUNC_0(-VAR_1);
 }

 if (VAR_2->record + 1 < VAR_8) {



  VAR_11 += 2;
  VAR_8--;
  VAR_12 = FUNC_12(VAR_4, VAR_11);
 } else {
  FUNC_10(VAR_4);
  FUNC_9(VAR_5);
  VAR_2->bnode = VAR_5;
  VAR_2->record -= VAR_8;
  VAR_2->keyoffset -= VAR_12 - 14;
  VAR_2->entryoffset -= VAR_12 - 14;
 }
 VAR_5->num_recs = VAR_4->num_recs - VAR_8;
 VAR_4->num_recs = VAR_8;

 VAR_9 = VAR_3->node_size - 2;
 VAR_10 = 14;
 VAR_14 = VAR_12 - VAR_10;
 VAR_8 = VAR_5->num_recs;
 VAR_13 = VAR_12;
 while (VAR_8) {
  FUNC_14(VAR_5, VAR_9, VAR_10);
  VAR_11 -= 2;
  VAR_9 -= 2;
  VAR_13 = FUNC_12(VAR_4, VAR_11);
  VAR_10 = VAR_13 - VAR_14;
  VAR_8--;
 }
 FUNC_14(VAR_5, VAR_9, VAR_10);
 FUNC_6(VAR_5, 14, VAR_4, VAR_12, VAR_13 - VAR_12);


 VAR_7.next = FUNC_3(VAR_5->next);
 VAR_7.prev = FUNC_3(VAR_5->prev);
 VAR_7.type = VAR_5->type;
 VAR_7.height = VAR_5->height;
 VAR_7.num_recs = FUNC_2(VAR_5->num_recs);
 VAR_7.reserved = 0;
 FUNC_13(VAR_5, &VAR_7, 0, sizeof(VAR_7));


 VAR_4->next = VAR_5->this;
 FUNC_11(VAR_4, &VAR_7, 0, sizeof(VAR_7));
 VAR_7.next = FUNC_3(VAR_4->next);
 VAR_7.num_recs = FUNC_2(VAR_4->num_recs);
 FUNC_13(VAR_4, &VAR_7, 0, sizeof(VAR_7));


 if (VAR_6) {
  VAR_6->prev = VAR_5->this;
  FUNC_11(VAR_6, &VAR_7, 0, sizeof(VAR_7));
  VAR_7.prev = FUNC_3(VAR_6->prev);
  FUNC_13(VAR_6, &VAR_7, 0, sizeof(VAR_7));
  FUNC_10(VAR_6);
 } else if (VAR_4->this == VAR_3->leaf_tail) {

  VAR_3->leaf_tail = VAR_5->this;
  FUNC_15(VAR_3->inode);
 }

 FUNC_7(VAR_4);
 FUNC_7(VAR_5);
 FUNC_10(VAR_4);

 return VAR_5;
}
