
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct flow_divert_pcb {int hash; } ;
struct flow_divert_group {int lck; int pcb_tree; } ;


 int FUNC_0 (struct flow_divert_pcb*) ;
 struct flow_divert_pcb* FUNC_1 (int ,int *,struct flow_divert_pcb*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct flow_divert_pcb *
FUNC_4(uint32_t VAR_1, struct flow_divert_group *VAR_2)
{
 struct flow_divert_pcb VAR_3;
 struct flow_divert_pcb *VAR_4 = ((void*)0);

 VAR_3.hash = VAR_1;

 FUNC_3(&VAR_2->lck);
 VAR_4 = FUNC_1(VAR_0, &VAR_2->pcb_tree, &VAR_3);
 FUNC_0(VAR_4);
 FUNC_2(&VAR_2->lck);

 return VAR_4;
}
