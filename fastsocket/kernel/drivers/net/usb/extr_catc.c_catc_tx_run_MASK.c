
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct catc {int tx_ptr; size_t tx_idx; TYPE_1__* netdev; TYPE_2__* tx_urb; int usbdev; int * tx_buf; scalar_t__ is_f5u011; } ;
struct TYPE_4__ {int transfer_buffer_length; int dev; int transfer_buffer; } ;
struct TYPE_3__ {int trans_start; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(struct catc *VAR_2)
{
 int VAR_3;

 if (VAR_2->is_f5u011)
  VAR_2->tx_ptr = (VAR_2->tx_ptr + 63) & ~63;

 VAR_2->tx_urb->transfer_buffer_length = VAR_2->tx_ptr;
 VAR_2->tx_urb->transfer_buffer = VAR_2->tx_buf[VAR_2->tx_idx];
 VAR_2->tx_urb->dev = VAR_2->usbdev;

 if ((VAR_3 = FUNC_1(VAR_2->tx_urb, VAR_0)) < 0)
  FUNC_0("submit(tx_urb), status %d", VAR_3);

 VAR_2->tx_idx = !VAR_2->tx_idx;
 VAR_2->tx_ptr = 0;

 VAR_2->netdev->trans_start = VAR_1;
 return VAR_3;
}
