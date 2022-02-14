
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef size_t u16_t ;
struct pbuf {size_t len; scalar_t__ payload; struct pbuf* next; } ;



u8_t
FUNC_0(struct pbuf* VAR_0, u16_t VAR_1)
{
  u16_t VAR_2 = VAR_1;
  struct pbuf* VAR_3 = VAR_0;


  while ((VAR_3 != ((void*)0)) && (VAR_3->len <= VAR_2)) {
    VAR_2 -= VAR_3->len;
    VAR_3 = VAR_3->next;
  }

  if ((VAR_3 != ((void*)0)) && (VAR_3->len > VAR_2)) {
    return ((u8_t*)VAR_3->payload)[VAR_2];
  }
  return 0;
}
