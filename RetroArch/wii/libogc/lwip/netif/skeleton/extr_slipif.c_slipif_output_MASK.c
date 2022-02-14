
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct pbuf {int len; scalar_t__ payload; struct pbuf* next; } ;
struct netif {int state; } ;
struct ip_addr {int dummy; } ;
typedef int err_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int ) ;

err_t
FUNC_1(struct netif *VAR_2, struct pbuf *VAR_3, struct ip_addr *VAR_4)
{
  struct pbuf *VAR_5;
  int VAR_6;
  u8_t VAR_7;


  FUNC_0(129, VAR_2->state);

  for(VAR_5 = VAR_3; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
    for(VAR_6 = 0; VAR_6 < VAR_5->len; VAR_6++) {
      VAR_7 = ((u8_t *)VAR_5->payload)[VAR_6];
      switch (VAR_7) {
      case 129:
  FUNC_0(128, VAR_2->state);
  FUNC_0(VAR_0, VAR_2->state);
  break;
      case 128:
  FUNC_0(128, VAR_2->state);
  FUNC_0(VAR_1, VAR_2->state);
  break;
      default:
  FUNC_0(VAR_7, VAR_2->state);
  break;
      }
    }
  }
  FUNC_0(129, VAR_2->state);
  return 0;
}
