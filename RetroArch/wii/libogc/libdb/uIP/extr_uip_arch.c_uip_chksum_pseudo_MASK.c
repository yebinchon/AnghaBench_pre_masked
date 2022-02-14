
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
typedef scalar_t__ u32_t ;
typedef scalar_t__ u16_t ;
struct uip_pbuf {scalar_t__ len; int payload; struct uip_pbuf* next; } ;
struct uip_ip_addr {int addr; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

u16_t FUNC_2(struct uip_pbuf *VAR_0,struct uip_ip_addr *VAR_1,struct uip_ip_addr *VAR_2,u8_t VAR_3,u16_t VAR_4)
{
 u32_t VAR_5,VAR_6,VAR_7;
 struct uip_pbuf *VAR_8;

 VAR_5 = 0;

 VAR_7 = VAR_4;
 for(VAR_8=VAR_0;VAR_8!=((void*)0) && VAR_7>0;VAR_8=VAR_8->next) {
  VAR_6 = (VAR_7>VAR_8->len)?VAR_8->len:VAR_7;
  VAR_5 += FUNC_1(VAR_8->payload,VAR_6);
  VAR_7 -= VAR_6;
 }

 VAR_5 += (VAR_1->addr&0xffffUL);
 VAR_5 += ((VAR_1->addr>>16)&0xffffUL);
 VAR_5 += (VAR_2->addr&0xffffUL);
 VAR_5 += ((VAR_2->addr>>16)&0xffffUL);
 VAR_5 += (u32_t)FUNC_0(VAR_3);
 VAR_5 += (u32_t)FUNC_0(VAR_4);

 while(VAR_5>>16) VAR_5 = (VAR_5&0xffffUL)+(VAR_5>>16);

 return (u16_t)~(VAR_5&0xffffUL);
}
