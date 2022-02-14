
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
struct uip_pbuf {struct uip_pbuf* next; } ;



u8_t FUNC_0(struct uip_pbuf *VAR_0)
{
 u8_t VAR_1;

 VAR_1 = 0;
 while(VAR_0!=((void*)0)) {
  VAR_1++;
  VAR_0 = VAR_0->next;
 }
 return VAR_1;
}
