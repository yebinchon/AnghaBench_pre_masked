
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_streaming {scalar_t__ urb_size; int ** urb_buffer; int * urb_dma; TYPE_1__* dev; } ;
struct TYPE_2__ {int udev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct uvc_streaming *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  if (VAR_1->urb_buffer[VAR_2]) {
   FUNC_0(VAR_1->dev->udev, VAR_1->urb_size,
    VAR_1->urb_buffer[VAR_2], VAR_1->urb_dma[VAR_2]);
   VAR_1->urb_buffer[VAR_2] = ((void*)0);
  }
 }

 VAR_1->urb_size = 0;
}
