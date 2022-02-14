
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;
struct pbuf {scalar_t__ payload; } ;
struct l2cap_pcb {scalar_t__ state; scalar_t__ (* l2ca_disconnect_cfm ) (void*,struct l2cap_pcb*) ;int remote_bdaddr; int scid; int dcid; } ;
typedef scalar_t__ err_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct pbuf* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct l2cap_pcb*,int ,int ,int *,struct pbuf*) ;

err_t FUNC_4(struct l2cap_pcb *VAR_10, err_t (* VAR_11)(void *VAR_12, struct l2cap_pcb *VAR_13))
{
 struct pbuf *VAR_14;
 err_t VAR_15;

 if(VAR_10->state == VAR_6 || VAR_10->state == VAR_3) {
  if((VAR_14 = FUNC_1(VAR_8, VAR_5, VAR_7)) == ((void*)0)) {
   FUNC_0("l2cap_disconnect_req: Could not allocate memory for pbuf\n");
   return VAR_1;
  }
  VAR_10->l2ca_disconnect_cfm = VAR_11;

  ((u16_t *)VAR_14->payload)[0] = FUNC_2(VAR_10->dcid);
  ((u16_t *)VAR_14->payload)[1] = FUNC_2(VAR_10->scid);

  VAR_15 = FUNC_3(VAR_10, VAR_4, 0, &(VAR_10->remote_bdaddr), VAR_14);

  if(VAR_15 == VAR_2) {
   VAR_10->state = VAR_9;
  }
 } else {
  return VAR_0;
 }

 return VAR_15;
}
