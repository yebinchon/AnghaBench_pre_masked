
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
struct uip_pbuf {scalar_t__ tot_len; scalar_t__ len; struct uip_pbuf* next; } ;


 scalar_t__ FUNC_0 (struct uip_pbuf*) ;

struct uip_pbuf* FUNC_1(struct uip_pbuf *VAR_0)
{
 struct uip_pbuf *VAR_1;
 u8_t VAR_2 = 1;

 if(VAR_0==((void*)0)) return ((void*)0);

 while(VAR_0->tot_len!=VAR_0->len) VAR_0 = VAR_0->next;

 VAR_1 = VAR_0->next;
 if(VAR_1!=((void*)0)) {
  VAR_0->next = ((void*)0);
  VAR_2 = FUNC_0(VAR_1);
 }
 return (VAR_2>0?((void*)0):VAR_1);
}
