
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_t ;
typedef int u16_t ;
struct uip_pbuf {int len; int payload; struct uip_pbuf* next; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

u16_t FUNC_1(struct uip_pbuf *VAR_0)
{
  u32_t VAR_1;
  struct uip_pbuf *VAR_2;

  VAR_1 = 0;
  for(VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
 VAR_1 += FUNC_0(VAR_2->payload,VAR_2->len);
  }
  while(VAR_1>>16) VAR_1 = (VAR_1&0xffffUL)+(VAR_1>>16);

  return (u16_t)~(VAR_1 & 0xffffUL);
}
