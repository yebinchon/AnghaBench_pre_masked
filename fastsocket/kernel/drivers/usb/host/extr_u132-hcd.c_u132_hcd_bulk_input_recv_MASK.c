
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct urb {size_t* transfer_buffer; int actual_length; scalar_t__ transfer_buffer_length; int transfer_flags; int unlinked; } ;
struct u132_udev {int usb_device; } ;
struct u132_ring {int number; } ;
struct u132_endp {size_t usb_addr; int toggle_bits; int usb_endp; struct u132_ring* ring; scalar_t__ dequeueing; struct u132* u132; } ;
struct u132 {int going; int scheduler_lock; TYPE_2__* platform_dev; struct u132_udev* udev; TYPE_1__* addr; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {size_t address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,struct urb*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct u132*,struct u132_endp*,struct urb*,int) ;
 int FUNC_5 (struct u132*,struct u132_endp*,struct urb*,int) ;
 int FUNC_6 (TYPE_2__*,int ,struct u132_endp*,struct urb*,size_t,int ,int,void (*) (void*,struct urb*,size_t*,int,int,int,int,int,int,int,int,int)) ;
 int FUNC_7 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_8(void *VAR_8, struct urb *VAR_9, u8 *VAR_10,
 int VAR_11, int VAR_12, int VAR_13, int VAR_14,
 int VAR_15, int VAR_16, int VAR_17, int VAR_18, int VAR_19)
{
 struct u132_endp *VAR_20 = VAR_8;
 struct u132 *VAR_21 = VAR_20->u132;
 u8 VAR_22 = VAR_21->addr[VAR_20->usb_addr].address;
 struct u132_udev *VAR_23 = &VAR_21->udev[VAR_22];
 FUNC_2(&VAR_21->scheduler_lock);
 if (VAR_21->going > 1) {
  FUNC_0(&VAR_21->platform_dev->dev, "device has been removed %d\n"
   , VAR_21->going);
  FUNC_3(&VAR_21->scheduler_lock);
  FUNC_4(VAR_21, VAR_20, VAR_9, -VAR_1);
  return;
 } else if (VAR_20->dequeueing) {
  VAR_20->dequeueing = 0;
  FUNC_3(&VAR_21->scheduler_lock);
  FUNC_5(VAR_21, VAR_20, VAR_9, -VAR_0);
  return;
 } else if (VAR_21->going > 0) {
  FUNC_0(&VAR_21->platform_dev->dev, "device is being removed "
    "urb=%p\n", VAR_9);
  FUNC_3(&VAR_21->scheduler_lock);
  FUNC_5(VAR_21, VAR_20, VAR_9, -VAR_1);
  return;
 } else if (!VAR_9->unlinked) {
  struct u132_ring *VAR_24 = VAR_20->ring;
  u8 *VAR_25 = VAR_9->transfer_buffer + VAR_9->actual_length;
  u8 *VAR_26 = VAR_10;
  int VAR_27 = VAR_11;

  while (VAR_27-- > 0)
   *VAR_25++ = *VAR_26++;

  VAR_9->actual_length += VAR_11;
  if ((VAR_14 == VAR_2) &&
   (VAR_9->transfer_buffer_length > VAR_9->actual_length)) {
   int VAR_28;
   VAR_20->toggle_bits = VAR_12;
   FUNC_7(VAR_23->usb_device, VAR_20->usb_endp, 0,
    1 & VAR_12);
   FUNC_3(&VAR_21->scheduler_lock);
   VAR_28 = FUNC_6(VAR_21->platform_dev,
    VAR_24->number, VAR_20, VAR_9, VAR_22,
    VAR_20->usb_endp, VAR_20->toggle_bits,
    FUNC_8);
   if (VAR_28 != 0)
    FUNC_5(VAR_21, VAR_20, VAR_9, VAR_28);
   return;
  } else if (VAR_14 == VAR_2) {
   VAR_20->toggle_bits = VAR_12;
   FUNC_7(VAR_23->usb_device, VAR_20->usb_endp, 0,
    1 & VAR_12);
   FUNC_3(&VAR_21->scheduler_lock);
   FUNC_5(VAR_21, VAR_20, VAR_9,
    VAR_6[VAR_14]);
   return;
  } else if ((VAR_14 == VAR_4) &&
   ((VAR_9->transfer_flags & VAR_5) == 0)) {
   VAR_20->toggle_bits = VAR_12;
   FUNC_7(VAR_23->usb_device, VAR_20->usb_endp, 0,
    1 & VAR_12);
   FUNC_3(&VAR_21->scheduler_lock);
   FUNC_5(VAR_21, VAR_20, VAR_9, 0);
   return;
  } else if (VAR_14 == VAR_4) {
   VAR_20->toggle_bits = VAR_12;
   FUNC_7(VAR_23->usb_device, VAR_20->usb_endp, 0,
    1 & VAR_12);
   FUNC_1(&VAR_21->platform_dev->dev, "urb=%p(SHORT NOT OK"
    ") giving back BULK IN %s\n", VAR_9,
    VAR_7[VAR_14]);
   FUNC_3(&VAR_21->scheduler_lock);
   FUNC_5(VAR_21, VAR_20, VAR_9, 0);
   return;
  } else if (VAR_14 == VAR_3) {
   VAR_20->toggle_bits = 0x2;
   FUNC_7(VAR_23->usb_device, VAR_20->usb_endp, 0, 0);
   FUNC_3(&VAR_21->scheduler_lock);
   FUNC_5(VAR_21, VAR_20, VAR_9,
    VAR_6[VAR_14]);
   return;
  } else {
   VAR_20->toggle_bits = 0x2;
   FUNC_7(VAR_23->usb_device, VAR_20->usb_endp, 0, 0);
   FUNC_0(&VAR_21->platform_dev->dev, "urb=%p giving back B"
    "ULK IN code=%d %s\n", VAR_9, VAR_14,
    VAR_7[VAR_14]);
   FUNC_3(&VAR_21->scheduler_lock);
   FUNC_5(VAR_21, VAR_20, VAR_9,
    VAR_6[VAR_14]);
   return;
  }
 } else {
  FUNC_0(&VAR_21->platform_dev->dev, "CALLBACK called urb=%p "
    "unlinked=%d\n", VAR_9, VAR_9->unlinked);
  FUNC_3(&VAR_21->scheduler_lock);
  FUNC_5(VAR_21, VAR_20, VAR_9, 0);
  return;
 }
}
