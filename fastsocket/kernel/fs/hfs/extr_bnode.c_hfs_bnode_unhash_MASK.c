
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfs_bnode {TYPE_1__* tree; struct hfs_bnode* next_hash; int this; int refcnt; } ;
struct TYPE_2__ {int node_hash_cnt; struct hfs_bnode** node_hash; int cnid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 size_t FUNC_3 (int ) ;

void FUNC_4(struct hfs_bnode *VAR_1)
{
 struct hfs_bnode **VAR_2;

 FUNC_2(VAR_0, "remove_node(%d:%d): %d\n",
  VAR_1->tree->cnid, VAR_1->this, FUNC_1(&VAR_1->refcnt));
 for (VAR_2 = &VAR_1->tree->node_hash[FUNC_3(VAR_1->this)];
      *VAR_2 && *VAR_2 != VAR_1; VAR_2 = &(*VAR_2)->next_hash)
  ;
 FUNC_0(!*VAR_2);
 *VAR_2 = VAR_1->next_hash;
 VAR_1->tree->node_hash_cnt--;
}
