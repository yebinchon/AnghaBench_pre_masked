
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_sig {scalar_t__ state; struct l2cap_sig* next; struct l2cap_sig* unrsp_sigs; } ;
struct l2cap_pcb {scalar_t__ state; struct l2cap_pcb* next; struct l2cap_pcb* unrsp_sigs; } ;
typedef int err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct l2cap_sig**,struct l2cap_sig*) ;
 int FUNC_1 (int *,struct l2cap_sig*) ;
 struct l2cap_sig* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

err_t FUNC_2(struct l2cap_pcb *VAR_7)
{
 struct l2cap_sig *VAR_8;

 if(VAR_7->state == VAR_1) {
  FUNC_0((struct l2cap_pcb**)((void*)&(VAR_3)), VAR_7);
  FUNC_1(&VAR_4, VAR_7);
 } else {
  FUNC_0(&(VAR_2), VAR_7);

  while(VAR_7->unrsp_sigs != ((void*)0)) {
   VAR_8 = VAR_7->unrsp_sigs;
   VAR_7->unrsp_sigs = VAR_7->unrsp_sigs->next;
   FUNC_1(&VAR_6, VAR_8);
  }

  FUNC_1(&VAR_5, VAR_7);
 }
 VAR_7 = ((void*)0);
 return VAR_0;
}
