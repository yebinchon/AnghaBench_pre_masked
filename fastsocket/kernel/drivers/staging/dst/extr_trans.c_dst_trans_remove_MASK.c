
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_trans {struct dst_node* n; } ;
struct dst_node {int trans_lock; } ;


 int FUNC_0 (struct dst_trans*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct dst_trans *VAR_0)
{
 int VAR_1;
 struct dst_node *VAR_2 = VAR_0->n;

 FUNC_1(&VAR_2->trans_lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_2->trans_lock);

 return VAR_1;
}
