
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct pbuf {int len; int payload; struct pbuf* next; } ;


 scalar_t__ FUNC_0 (int ,int) ;

u16_t
FUNC_1(struct pbuf *VAR_0)
{
  u32_t VAR_1;
  struct pbuf *VAR_2;
  u8_t VAR_3;

  VAR_1 = 0;
  VAR_3 = 0;
  for(VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
    VAR_1 += FUNC_0(VAR_2->payload, VAR_2->len);
    while (VAR_1 >> 16) {
      VAR_1 = (VAR_1 & 0xffff) + (VAR_1 >> 16);
    }
    if (VAR_2->len % 2 != 0) {
      VAR_3 = 1 - VAR_3;
      VAR_1 = (VAR_1 & 0xff << 8) | (VAR_1 & 0xff00 >> 8);
    }
  }

  if (VAR_3) {
    VAR_1 = ((VAR_1 & 0xff) << 8) | ((VAR_1 & 0xff00) >> 8);
  }
  return ~(VAR_1 & 0xffff);
}
