
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct _sas_node {int list; } ;
struct MPT2SAS_ADAPTER {int sas_node_lock; scalar_t__ shost_recovery; } ;


 int FUNC_0 (struct MPT2SAS_ADAPTER*,struct _sas_node*) ;
 int FUNC_1 (int *) ;
 struct _sas_node* FUNC_2 (struct MPT2SAS_ADAPTER*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void
FUNC_5(struct MPT2SAS_ADAPTER *VAR_0, u64 VAR_1)
{
 struct _sas_node *VAR_2;
 unsigned long VAR_3;

 if (VAR_0->shost_recovery)
  return;

 FUNC_3(&VAR_0->sas_node_lock, VAR_3);
 VAR_2 = FUNC_2(VAR_0,
     VAR_1);
 if (VAR_2)
  FUNC_1(&VAR_2->list);
 FUNC_4(&VAR_0->sas_node_lock, VAR_3);
 if (VAR_2)
  FUNC_0(VAR_0, VAR_2);
}
