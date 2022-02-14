
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef int u16_t ;
struct pbuf {scalar_t__ payload; } ;
struct TYPE_2__ {int l2capcfg; } ;
struct l2cap_pcb {int state; int remote_bdaddr; int scid; TYPE_1__ cfg; int (* l2ca_connect_cfm ) (void*,struct l2cap_pcb*,int ,int ) ;int psm; } ;
struct bd_addr {int dummy; } ;
typedef int err_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct l2cap_pcb*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,struct bd_addr*) ;
 struct pbuf* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (struct l2cap_pcb*,int ,int ,int *,struct pbuf*) ;
 int FUNC_7 (struct bd_addr*,int ) ;
 int FUNC_8 (struct bd_addr*) ;

err_t FUNC_9(struct l2cap_pcb *VAR_9, struct bd_addr *VAR_10, u16_t VAR_11,
                 u8_t VAR_12, err_t (* VAR_13)(void *VAR_14, struct l2cap_pcb *VAR_15,
         u16_t VAR_16, u16_t VAR_17))
{
 err_t VAR_18;
 struct pbuf *VAR_19;

 if(VAR_10 != ((void*)0)) {
  FUNC_2(&(VAR_9->remote_bdaddr),VAR_10);
 } else {
  return VAR_1;
 }

 VAR_9->psm = VAR_11;
 VAR_9->l2ca_connect_cfm = VAR_13;
 VAR_9->scid = FUNC_5();

 VAR_9->cfg.l2capcfg |= VAR_2;

 if(!FUNC_8(VAR_10)) {
  VAR_18 = FUNC_7(VAR_10, VAR_12);
 } else {
  if((VAR_19 = FUNC_3(VAR_6, VAR_4, VAR_5)) == ((void*)0)) {
   FUNC_0("l2cap_connect_req: Could not allocate memory for pbuf\n");
   return VAR_0;
  }
  ((u16_t *)VAR_19->payload)[0] = FUNC_4(VAR_11);
  ((u16_t *)VAR_19->payload)[1] = FUNC_4(VAR_9->scid);
  VAR_18 = FUNC_6(VAR_9, VAR_3, 0, &(VAR_9->remote_bdaddr), VAR_19);

  VAR_9->state = VAR_7;
 }

 FUNC_1(&(VAR_8), VAR_9);

 return VAR_18;
}
