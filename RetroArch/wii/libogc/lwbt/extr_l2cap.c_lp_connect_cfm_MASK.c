
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;
struct pbuf {scalar_t__ payload; } ;
struct l2cap_pcb {int state; int remote_bdaddr; int scid; int psm; int encrypt; struct l2cap_pcb* next; } ;
struct bd_addr {int dummy; } ;
typedef scalar_t__ err_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct l2cap_pcb*,int ,int,scalar_t__) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *,struct bd_addr*) ;
 struct pbuf* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 struct l2cap_pcb* VAR_7 ;
 scalar_t__ FUNC_6 (struct l2cap_pcb*,int ,int ,int *,struct pbuf*) ;

void FUNC_7(struct bd_addr *VAR_8, u8_t VAR_9, err_t VAR_10)
{
 struct l2cap_pcb *VAR_11;
 struct pbuf *VAR_12;
 err_t VAR_13;

 for(VAR_11 = VAR_7; VAR_11 != ((void*)0); VAR_11 = VAR_11->next) {
  if(FUNC_3(&(VAR_11->remote_bdaddr), VAR_8)) {
   break;
  }
 }
 if(VAR_11 == ((void*)0)) {

  FUNC_2("lp_connect_cfm: Silently discard\n");
 } else {
  if(VAR_10 == VAR_0) {
   VAR_11->encrypt = VAR_9;

   if((VAR_12 = FUNC_4(VAR_5, VAR_3, VAR_4)) != ((void*)0)) {
    ((u16_t *)VAR_12->payload)[0] = FUNC_5(VAR_11->psm);
    ((u16_t *)VAR_12->payload)[1] = FUNC_5(VAR_11->scid);
    if((VAR_13 = FUNC_6(VAR_11, VAR_2, 0, &(VAR_11->remote_bdaddr), VAR_12)) == VAR_0) {
     VAR_11->state = VAR_6;
    } else {
     FUNC_1(VAR_11,VAR_1,0x0000,VAR_13);
    }

   } else {
    FUNC_0("lp_connect_cfm: No resources available\n");
    FUNC_1(VAR_11,VAR_1,0x0000,VAR_13);
   }
  } else {
   FUNC_0("lp_connect_cfm: Connection falied\n");
   FUNC_1(VAR_11,VAR_1,0x0000,VAR_13);
  }
 }
}
