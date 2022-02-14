
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acm_wb {TYPE_1__* urb; int len; int dmah; int buf; } ;
struct acm {int dev; int transmitting; } ;
struct TYPE_2__ {int dev; int transfer_buffer_length; int transfer_dma; int transfer_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct acm*,struct acm_wb*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct acm *VAR_1, struct acm_wb *VAR_2)
{
 int VAR_3;

 VAR_1->transmitting++;

 VAR_2->urb->transfer_buffer = VAR_2->buf;
 VAR_2->urb->transfer_dma = VAR_2->dmah;
 VAR_2->urb->transfer_buffer_length = VAR_2->len;
 VAR_2->urb->dev = VAR_1->dev;

 VAR_3 = FUNC_2(VAR_2->urb, VAR_0);
 if (VAR_3 < 0) {
  FUNC_1("usb_submit_urb(write bulk) failed: %d", VAR_3);
  FUNC_0(VAR_1, VAR_2);
 }
 return VAR_3;
}
