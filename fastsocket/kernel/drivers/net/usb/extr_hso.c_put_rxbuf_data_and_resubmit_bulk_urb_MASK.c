
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct hso_serial {size_t curr_rx_urb_idx; size_t num_rx_urbs; struct urb** rx_urb; scalar_t__* rx_urb_filled; } ;


 int FUNC_0 (struct hso_serial*,struct urb*) ;
 int FUNC_1 (struct urb*,struct hso_serial*) ;

__attribute__((used)) static void FUNC_2(struct hso_serial *VAR_0)
{
 int VAR_1;
 struct urb *VAR_2;

 while (VAR_0->rx_urb_filled[VAR_0->curr_rx_urb_idx]) {
  VAR_2 = VAR_0->rx_urb[VAR_0->curr_rx_urb_idx];
  VAR_1 = FUNC_1(VAR_2, VAR_0);
  if (VAR_1 == -1)
   return;
  if (VAR_1 == 0) {
   VAR_0->curr_rx_urb_idx++;
   if (VAR_0->curr_rx_urb_idx >= VAR_0->num_rx_urbs)
    VAR_0->curr_rx_urb_idx = 0;
   FUNC_0(VAR_0, VAR_2);
  }
 }
}
