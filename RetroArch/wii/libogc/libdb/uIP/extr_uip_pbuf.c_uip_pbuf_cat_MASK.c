
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_pbuf {struct uip_pbuf* next; scalar_t__ tot_len; } ;



void FUNC_0(struct uip_pbuf *VAR_0,struct uip_pbuf *VAR_1)
{
 struct uip_pbuf *VAR_2;

 if(VAR_0==((void*)0) || VAR_1==((void*)0)) return;

 for(VAR_2=VAR_0;VAR_2->next!=((void*)0);VAR_2=VAR_2->next) {
  VAR_2->tot_len += VAR_1->tot_len;
 }
 VAR_2->tot_len += VAR_1->tot_len;
 VAR_2->next = VAR_1;
}
