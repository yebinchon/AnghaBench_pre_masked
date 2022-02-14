
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i1480u {int * rx_skb; TYPE_1__* rx_buf; } ;
struct TYPE_2__ {scalar_t__ urb; int * data; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct i1480u *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->rx_buf[VAR_2].data)
   FUNC_0(VAR_1->rx_buf[VAR_2].data);
  if (VAR_1->rx_buf[VAR_2].urb) {
   FUNC_2(VAR_1->rx_buf[VAR_2].urb);
   FUNC_1(VAR_1->rx_buf[VAR_2].urb);
  }
 }
 if (VAR_1->rx_skb != ((void*)0))
  FUNC_0(VAR_1->rx_skb);
}
