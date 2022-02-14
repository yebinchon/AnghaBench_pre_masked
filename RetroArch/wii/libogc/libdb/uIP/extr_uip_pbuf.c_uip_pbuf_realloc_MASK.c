
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct uip_pbuf {scalar_t__ tot_len; scalar_t__ len; scalar_t__ flags; struct uip_pbuf* next; scalar_t__ payload; } ;
typedef scalar_t__ s16_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uip_pbuf*,scalar_t__) ;
 int FUNC_1 (struct uip_pbuf*) ;

void FUNC_2(struct uip_pbuf *VAR_1,u16_t VAR_2)
{
 u16_t VAR_3;
 s16_t VAR_4;
 struct uip_pbuf *VAR_5;

 if(VAR_2>=VAR_1->tot_len) return;

 VAR_4 = VAR_2 - VAR_1->tot_len;
 VAR_3 = VAR_2;
 VAR_5 = VAR_1;
 while(VAR_3>VAR_5->len) {
  VAR_3 -= VAR_5->len;
  VAR_5->tot_len += VAR_4;
  VAR_5 = VAR_5->next;
 }

 if(VAR_5->flags==VAR_0 && VAR_3!=VAR_5->len)
  FUNC_0(VAR_5,(u8_t*)VAR_5->payload-(u8_t*)VAR_5+VAR_3);

 VAR_5->len = VAR_3;
 VAR_5->tot_len = VAR_5->len;

 if(VAR_5->next!=((void*)0)) FUNC_1(VAR_5->next);
 VAR_5->next = ((void*)0);
}
