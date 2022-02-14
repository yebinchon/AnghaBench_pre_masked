
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_pbuf {struct uip_pbuf* next; } ;


 int FUNC_0 (struct uip_pbuf*) ;

void FUNC_1(struct uip_pbuf *VAR_0,struct uip_pbuf *VAR_1)
{
 if(VAR_0==((void*)0) || VAR_1==((void*)0) || VAR_0==VAR_1) return;

 while(VAR_0->next!=((void*)0)) VAR_0 = VAR_0->next;

 VAR_0->next = VAR_1;
 FUNC_0(VAR_1);
}
