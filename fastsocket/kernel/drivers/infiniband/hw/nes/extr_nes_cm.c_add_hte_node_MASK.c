
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nes_cm_node {int list; } ;
struct list_head {int dummy; } ;
struct nes_cm_core {int ht_lock; int ht_node_cnt; struct list_head connected_nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int ,char*,struct nes_cm_node*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct nes_cm_core *VAR_2, struct nes_cm_node *VAR_3)
{
 unsigned long VAR_4;
 struct list_head *VAR_5;

 if (!VAR_3 || !VAR_2)
  return -VAR_0;

 FUNC_2(VAR_1, "Adding Node %p to Active Connection HT\n",
    VAR_3);

 FUNC_3(&VAR_2->ht_lock, VAR_4);


 VAR_5 = &VAR_2->connected_nodes;
 FUNC_1(&VAR_3->list, VAR_5);
 FUNC_0(&VAR_2->ht_node_cnt);

 FUNC_4(&VAR_2->ht_lock, VAR_4);

 return 0;
}
