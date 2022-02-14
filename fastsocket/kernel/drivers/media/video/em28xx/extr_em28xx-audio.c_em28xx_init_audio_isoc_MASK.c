
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int interval; int number_of_packets; int transfer_buffer_length; TYPE_1__* iso_frame_desc; int complete; int transfer_buffer; int transfer_flags; int pipe; struct em28xx* context; int dev; } ;
struct TYPE_4__ {struct urb** urb; int * transfer_buffer; } ;
struct em28xx {TYPE_2__ adev; int udev; } ;
struct TYPE_3__ {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int FUNC_1 (struct em28xx*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const,int ) ;
 int FUNC_5 (int ,int,int const) ;
 struct urb* FUNC_6 (int,int ) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_10(struct em28xx *VAR_7)
{
 int VAR_8, VAR_9;
 const int VAR_10 = VAR_2 *
       VAR_1;

 FUNC_0("Starting isoc transfers\n");

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  struct urb *VAR_11;
  int VAR_12, VAR_13;

  VAR_7->adev.transfer_buffer[VAR_8] = FUNC_4(VAR_10, VAR_4);
  if (!VAR_7->adev.transfer_buffer[VAR_8])
   return -VAR_3;

  FUNC_5(VAR_7->adev.transfer_buffer[VAR_8], 0x80, VAR_10);
  VAR_11 = FUNC_6(VAR_2, VAR_4);
  if (!VAR_11) {
   FUNC_2("usb_alloc_urb failed!\n");
   for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
    FUNC_7(VAR_7->adev.urb[VAR_12]);
    FUNC_3(VAR_7->adev.transfer_buffer[VAR_12]);
   }
   return -VAR_3;
  }

  VAR_11->dev = VAR_7->udev;
  VAR_11->context = VAR_7;
  VAR_11->pipe = FUNC_8(VAR_7->udev, 0x83);
  VAR_11->transfer_flags = VAR_5;
  VAR_11->transfer_buffer = VAR_7->adev.transfer_buffer[VAR_8];
  VAR_11->interval = 1;
  VAR_11->complete = VAR_6;
  VAR_11->number_of_packets = VAR_2;
  VAR_11->transfer_buffer_length = VAR_10;

  for (VAR_12 = VAR_13 = 0; VAR_12 < VAR_2;
        VAR_12++, VAR_13 += VAR_1) {
   VAR_11->iso_frame_desc[VAR_12].offset = VAR_13;
   VAR_11->iso_frame_desc[VAR_12].length =
       VAR_1;
  }
  VAR_7->adev.urb[VAR_8] = VAR_11;
 }

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_9 = FUNC_9(VAR_7->adev.urb[VAR_8], VAR_4);
  if (VAR_9) {
   FUNC_1(VAR_7);
   return VAR_9;
  }
 }

 return 0;
}
