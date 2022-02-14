
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _sas_node {int list; } ;
struct MPT3SAS_ADAPTER {int sas_node_lock; int sas_expander_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_0,
 struct _sas_node *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->sas_node_lock, VAR_2);
 FUNC_0(&VAR_1->list, &VAR_0->sas_expander_list);
 FUNC_2(&VAR_0->sas_node_lock, VAR_2);
}
