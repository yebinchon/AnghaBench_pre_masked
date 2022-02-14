
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
struct pbuf {int len; scalar_t__ payload; } ;
struct netif {int state; } ;
struct TYPE_2__ {int drop; int recv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 TYPE_1__ VAR_5 ;
 struct pbuf* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct pbuf*,struct pbuf*) ;
 int FUNC_4 (struct pbuf*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static struct pbuf *
FUNC_6( struct netif * VAR_6 )
{
  u8_t VAR_7;
  struct pbuf *VAR_8, *VAR_9;
  int VAR_10;
  int VAR_11;

  VAR_9 = VAR_8 = ((void*)0);
  VAR_10 = VAR_11 = 0;
  VAR_7 = 0;

  while (1) {
    VAR_7 = FUNC_5(VAR_6->state);
    switch (VAR_7) {
    case 131:
      if (VAR_10 > 0) {

  FUNC_4(VAR_9, VAR_10);

  FUNC_0(VAR_5.recv);

  FUNC_1(VAR_4, ("slipif: Got packet\n"));
  return VAR_9;
      }
      break;

    case 130:
      VAR_7 = FUNC_5(VAR_6->state);
      switch (VAR_7) {
      case 129:
  VAR_7 = 131;
  break;
      case 128:
  VAR_7 = 130;
  break;
      }


    default:
      if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_4, ("slipif_input: alloc\n"));
  VAR_8 = FUNC_2(VAR_1, VAR_3, VAR_2);

  if (VAR_8 == ((void*)0)) {
    FUNC_0(VAR_5.drop);
    FUNC_1(VAR_4, ("slipif_input: no new pbuf! (DROP)\n"));
  }

  if (VAR_9 != ((void*)0)) {
    FUNC_3(VAR_9, VAR_8);
  } else {
    VAR_9 = VAR_8;
  }
      }
      if (VAR_8 != ((void*)0) && VAR_10 < VAR_0) {
  ((u8_t *)VAR_8->payload)[VAR_11] = VAR_7;
  VAR_10++;
  VAR_11++;
  if (VAR_11 >= VAR_8->len) {
    VAR_11 = 0;
    VAR_8 = ((void*)0);
  }
      }
      break;
    }

  }
  return ((void*)0);
}
