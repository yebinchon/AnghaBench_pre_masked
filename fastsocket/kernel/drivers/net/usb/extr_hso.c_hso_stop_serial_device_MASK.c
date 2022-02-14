
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct hso_tiocmget {struct urb* urb; int waitq; } ;
struct hso_serial {int num_rx_urbs; struct hso_tiocmget* tiocmget; TYPE_1__* shared_int; struct urb* tx_urb; scalar_t__ curr_rx_urb_offset; scalar_t__ curr_rx_urb_idx; scalar_t__* rx_urb_filled; struct urb** rx_urb; } ;
struct hso_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ use_count; int shared_int_lock; struct urb* shared_intr_urb; } ;


 int VAR_0 ;
 struct hso_serial* FUNC_0 (struct hso_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hso_device *VAR_1)
{
 int VAR_2;
 struct hso_serial *VAR_3 = FUNC_0(VAR_1);
 struct hso_tiocmget *VAR_4;

 if (!VAR_3)
  return -VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_3->num_rx_urbs; VAR_2++) {
  if (VAR_3->rx_urb[VAR_2]) {
    FUNC_3(VAR_3->rx_urb[VAR_2]);
    VAR_3->rx_urb_filled[VAR_2] = 0;
  }
 }
 VAR_3->curr_rx_urb_idx = 0;
 VAR_3->curr_rx_urb_offset = 0;

 if (VAR_3->tx_urb)
  FUNC_3(VAR_3->tx_urb);

 if (VAR_3->shared_int) {
  FUNC_1(&VAR_3->shared_int->shared_int_lock);
  if (VAR_3->shared_int->use_count &&
      (--VAR_3->shared_int->use_count == 0)) {
   struct urb *VAR_5;

   VAR_5 = VAR_3->shared_int->shared_intr_urb;
   if (VAR_5)
    FUNC_3(VAR_5);
  }
  FUNC_2(&VAR_3->shared_int->shared_int_lock);
 }
 VAR_4 = VAR_3->tiocmget;
 if (VAR_4) {
  FUNC_4(&VAR_4->waitq);
  FUNC_3(VAR_4->urb);
 }

 return 0;
}
