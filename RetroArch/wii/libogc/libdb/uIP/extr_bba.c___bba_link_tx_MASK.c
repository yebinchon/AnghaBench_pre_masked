
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct uip_pbuf {scalar_t__ tot_len; scalar_t__ len; int * payload; struct uip_pbuf* next; } ;
struct uip_netif {int dummy; } ;
typedef int s8_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;

__attribute__((used)) static s8_t FUNC_11(struct uip_netif *VAR_13,struct uip_pbuf *VAR_14)
{
 u8 VAR_15[60];
 u32 VAR_16;
 struct uip_pbuf *VAR_17;

 if(FUNC_0(VAR_7,VAR_8,((void*)0))==0) return VAR_10;

 if(VAR_14->tot_len>VAR_5) {
  FUNC_2("__bba_link_tx: packet dropped due to big buffer.\n");
  FUNC_1(VAR_7);
  return VAR_12;
 }

 if(!FUNC_3()) {
  FUNC_1(VAR_7);
  return VAR_9;
 }

 while((FUNC_5(VAR_1)&(VAR_2|VAR_3)));

 VAR_16 = VAR_14->tot_len;
 FUNC_6(VAR_4,VAR_16);

 FUNC_10();
 FUNC_9(VAR_6);
 for(VAR_17=VAR_14;VAR_17!=((void*)0);VAR_17=VAR_17->next) {
  FUNC_8(VAR_17->payload,VAR_17->len);
 }
 if(VAR_16<VAR_0) {
  VAR_16 = (VAR_0-VAR_16);
  FUNC_8(VAR_15,VAR_16);
 }
 FUNC_4();

 FUNC_7(VAR_1,((FUNC_5(VAR_1)&~VAR_2)|VAR_3));
 FUNC_1(VAR_7);
 return VAR_11;
}
