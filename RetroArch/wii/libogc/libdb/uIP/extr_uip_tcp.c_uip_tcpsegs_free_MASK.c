
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct uip_tcpseg {struct uip_tcpseg* next; } ;


 scalar_t__ FUNC_0 (struct uip_tcpseg*) ;

u8_t FUNC_1(struct uip_tcpseg *VAR_0)
{
 u8_t VAR_1 = 0;
 struct uip_tcpseg *VAR_2;

 while(VAR_0!=((void*)0)) {
  VAR_2 = VAR_0->next;
  VAR_1 += FUNC_0(VAR_0);
  VAR_0 = VAR_2;
 }

 return VAR_1;
}
