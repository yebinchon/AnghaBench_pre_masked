
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_divert_pcb {struct flow_divert_group* group; int ref_count; } ;
struct flow_divert_group {int lck; int pcb_tree; int ctl_unit; } ;


 int FUNC_0 (int ,struct flow_divert_pcb*,char*,int ,int ) ;
 int FUNC_1 (struct flow_divert_pcb*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,struct flow_divert_pcb*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct flow_divert_pcb *VAR_2)
{
 if (VAR_2->group != ((void*)0)) {
  struct flow_divert_group *VAR_3 = VAR_2->group;
  FUNC_4(&VAR_3->lck);
  FUNC_0(VAR_0, VAR_2, "Removing from group %d, ref count = %d", VAR_3->ctl_unit, VAR_2->ref_count);
  FUNC_2(VAR_1, &VAR_3->pcb_tree, VAR_2);
  VAR_2->group = ((void*)0);
  FUNC_1(VAR_2);
  FUNC_3(&VAR_3->lck);
 }
}
