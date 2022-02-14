
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;
struct l2cap_pcb_listen {int callback_arg; int state; int (* l2ca_connect_ind ) (void*,struct l2cap_pcb*,int ) ;int psm; int bdaddr; } ;
struct l2cap_pcb {int callback_arg; } ;
struct bd_addr {int dummy; } ;
typedef int err_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct l2cap_pcb_listen*) ;
 int FUNC_2 (int *,struct bd_addr*) ;
 struct l2cap_pcb_listen* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct l2cap_pcb*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

err_t FUNC_5(struct l2cap_pcb *VAR_6, struct bd_addr *VAR_7, u16_t VAR_8,err_t (* VAR_9)(void *VAR_10, struct l2cap_pcb *VAR_11, err_t VAR_12))
{
 struct l2cap_pcb_listen *VAR_13;

 VAR_13 = FUNC_3(&VAR_4);
 if(VAR_13 == ((void*)0)) {
  FUNC_0("l2cap_connect_ind: Could not allocate memory for lpcb\n");
  return VAR_0;
 }

 FUNC_2(&(VAR_13->bdaddr),VAR_7);
 VAR_13->psm = VAR_8;
 VAR_13->l2ca_connect_ind = VAR_9;
 VAR_13->state = VAR_2;
 VAR_13->callback_arg = VAR_6->callback_arg;
 FUNC_4(&VAR_5, VAR_6);
 FUNC_1(&(VAR_3), VAR_13);
 return VAR_1;
}
