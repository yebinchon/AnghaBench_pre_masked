
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;
struct pbuf {int len; struct pbuf* next; int * payload; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static struct pbuf *
FUNC_1(struct pbuf *VAR_0, u16_t * VAR_1,
           u8_t * VAR_2, u16_t VAR_3)
{
  u16_t VAR_4;

  VAR_0->payload = (u8_t *)VAR_0->payload + *VAR_1;
  VAR_0->len -= *VAR_1;
  while (VAR_3) {
    VAR_4 = VAR_3 < VAR_0->len ? VAR_3 : VAR_0->len;
    FUNC_0(VAR_2, VAR_0->payload, VAR_4);
    VAR_2 += VAR_4;
    VAR_3 -= VAR_4;
    if (VAR_3)
      VAR_0 = VAR_0->next;
    else
      *VAR_1 = VAR_4;
  }
  return VAR_0;
}
