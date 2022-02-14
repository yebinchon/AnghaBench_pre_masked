
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfs_btree {int pages_per_bnode; int hash_lock; int cnid; } ;
struct hfs_bnode {int flags; int * page; int refcnt; int this; struct hfs_btree* tree; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;
 int FUNC_4 (struct hfs_bnode*) ;
 int FUNC_5 (struct hfs_bnode*) ;
 int FUNC_6 (struct hfs_bnode*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

void FUNC_10(struct hfs_bnode *VAR_2)
{
 if (VAR_2) {
  struct hfs_btree *VAR_3 = VAR_2->tree;
  int VAR_4;

  FUNC_3(VAR_0, "put_node(%d:%d): %d\n",
         VAR_2->tree->cnid, VAR_2->this, FUNC_2(&VAR_2->refcnt));
  FUNC_0(!FUNC_2(&VAR_2->refcnt));
  if (!FUNC_1(&VAR_2->refcnt, &VAR_3->hash_lock))
   return;
  for (VAR_4 = 0; VAR_4 < VAR_3->pages_per_bnode; VAR_4++) {
   if (!VAR_2->page[VAR_4])
    continue;
   FUNC_7(VAR_2->page[VAR_4]);
  }

  if (FUNC_9(VAR_1, &VAR_2->flags)) {
   FUNC_6(VAR_2);
   FUNC_8(&VAR_3->hash_lock);
   FUNC_4(VAR_2);
   FUNC_5(VAR_2);
   return;
  }
  FUNC_8(&VAR_3->hash_lock);
 }
}
