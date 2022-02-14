
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct pbuf {int len; int payload; struct pbuf* next; } ;
struct ip_addr {scalar_t__ addr; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int) ;

u16_t
FUNC_2(struct pbuf *VAR_0,
       struct ip_addr *VAR_1, struct ip_addr *VAR_2,
       u8_t VAR_3, u32_t VAR_4)
{
  u32_t VAR_5;
  struct pbuf *VAR_6;
  u8_t VAR_7, VAR_8;

  VAR_5 = 0;
  VAR_7 = 0;
  for(VAR_6 = VAR_0; VAR_6 != ((void*)0); VAR_6 = VAR_6->next) {
    VAR_5 += FUNC_0(VAR_6->payload, VAR_6->len);
    while (VAR_5 >> 16) {
      VAR_5 = (VAR_5 & 0xffff) + (VAR_5 >> 16);
    }
    if (VAR_6->len % 2 != 0) {
      VAR_7 = 1 - VAR_7;
      VAR_5 = ((VAR_5 & 0xff) << 8) | ((VAR_5 & 0xff00) >> 8);
    }
  }

  if (VAR_7) {
    VAR_5 = ((VAR_5 & 0xff) << 8) | ((VAR_5 & 0xff00) >> 8);
  }

  for(VAR_8 = 0; VAR_8 < 8; VAR_8++) {
    VAR_5 += ((u16_t *)VAR_1->addr)[VAR_8] & 0xffff;
    VAR_5 += ((u16_t *)VAR_2->addr)[VAR_8] & 0xffff;
    while (VAR_5 >> 16) {
      VAR_5 = (VAR_5 & 0xffff) + (VAR_5 >> 16);
    }
  }
  VAR_5 += (u16_t)FUNC_1((u16_t)VAR_3);
  VAR_5 += ((u16_t *)&VAR_4)[0] & 0xffff;
  VAR_5 += ((u16_t *)&VAR_4)[1] & 0xffff;

  while (VAR_5 >> 16) {
    VAR_5 = (VAR_5 & 0xffff) + (VAR_5 >> 16);
  }
  return ~(VAR_5 & 0xffff);
}
