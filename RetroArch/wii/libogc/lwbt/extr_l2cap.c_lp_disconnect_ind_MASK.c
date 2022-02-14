
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct l2cap_pcb {int state; int remote_bdaddr; struct l2cap_pcb* next; } ;
struct bd_addr {int dummy; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct l2cap_pcb*,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,struct bd_addr*) ;
 struct l2cap_pcb* VAR_2 ;
 int FUNC_3 (struct bd_addr*,int ) ;

void FUNC_4(struct bd_addr *VAR_3,u8_t VAR_4)
{
 struct l2cap_pcb *VAR_5, *VAR_6;
 err_t VAR_7;

 (void)VAR_7;

 for(VAR_5 = VAR_2; VAR_5 != ((void*)0);) {
  VAR_6 = VAR_5->next;
  FUNC_1("lp_disconnect_ind: Find a pcb with a matching Bluetooth address\n");

  if(FUNC_2(&(VAR_5->remote_bdaddr), VAR_3)) {
   VAR_5->state = VAR_1;
   FUNC_1("lp_disconnect_ind: Notify application\n");
   FUNC_0(VAR_5,VAR_0,VAR_7);
  }
  VAR_5 = VAR_6;
 }
 if(&FUNC_3) FUNC_3(VAR_3,VAR_4);
}
