
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_seg {struct l2cap_seg* next; } ;
struct l2cap_pcb_listen {struct l2cap_pcb_listen* next; } ;
struct l2cap_pcb {struct l2cap_pcb* next; } ;


 int FUNC_0 (struct l2cap_seg**,struct l2cap_seg*) ;
 int FUNC_1 (int *,struct l2cap_seg*) ;
 struct l2cap_pcb* VAR_0 ;
 int FUNC_2 (struct l2cap_pcb*) ;
 int FUNC_3 () ;
 struct l2cap_seg* VAR_1 ;
 struct l2cap_pcb_listen* VAR_2 ;
 int VAR_3 ;

void FUNC_4(void)
{
 struct l2cap_pcb *VAR_4, *VAR_5;
 struct l2cap_pcb_listen *VAR_6, *VAR_7;
 struct l2cap_seg *VAR_8, *VAR_9;

 for(VAR_4 = VAR_0; VAR_4 != ((void*)0);) {
  VAR_5 = VAR_4->next;
  FUNC_2(VAR_4);
  VAR_4 = VAR_5;
 }

 for(VAR_6 = VAR_2; VAR_6 != ((void*)0);) {
  VAR_7 = VAR_6->next;
  FUNC_2((struct l2cap_pcb *)VAR_6);
  VAR_6 = VAR_7;
 }

 for(VAR_8 = VAR_1; VAR_8 != ((void*)0);) {
  VAR_9 = VAR_8->next;
  FUNC_0(&(VAR_1), VAR_8);
  FUNC_1(&VAR_3, VAR_8);
  VAR_8 = VAR_9;
 }

 FUNC_3();
}
