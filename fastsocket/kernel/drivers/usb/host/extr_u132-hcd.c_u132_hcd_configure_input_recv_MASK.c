
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct urb {int actual_length; int transfer_flags; struct urb* unlinked; int * transfer_buffer; } ;
struct u132_ring {int number; } ;
struct u132_endp {size_t usb_addr; int usb_endp; struct u132_ring* ring; scalar_t__ dequeueing; struct u132* u132; } ;
struct u132 {int going; int scheduler_lock; TYPE_2__* platform_dev; TYPE_1__* addr; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 struct urb** VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,struct urb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int FUNC_4 (struct u132*,struct u132_endp*,struct urb*,int) ;
 int FUNC_5 (struct u132*,struct u132_endp*,struct urb*,int) ;
 int FUNC_6 (TYPE_2__*,int ,struct u132_endp*,struct urb*,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_9, struct urb *VAR_10, u8 *VAR_11,
 int VAR_12, int VAR_13, int VAR_14, int VAR_15,
 int VAR_16, int VAR_17, int VAR_18, int VAR_19, int VAR_20)
{
 struct u132_endp *VAR_21 = VAR_9;
 struct u132 *VAR_22 = VAR_21->u132;
 u8 VAR_23 = VAR_22->addr[VAR_21->usb_addr].address;
 FUNC_2(&VAR_22->scheduler_lock);
 if (VAR_22->going > 1) {
  FUNC_0(&VAR_22->platform_dev->dev, "device has been removed %d\n"
   , VAR_22->going);
  FUNC_3(&VAR_22->scheduler_lock);
  FUNC_4(VAR_22, VAR_21, VAR_10, -VAR_1);
  return;
 } else if (VAR_21->dequeueing) {
  VAR_21->dequeueing = 0;
  FUNC_3(&VAR_22->scheduler_lock);
  FUNC_5(VAR_22, VAR_21, VAR_10, -VAR_0);
  return;
 } else if (VAR_22->going > 0) {
  FUNC_0(&VAR_22->platform_dev->dev, "device is being removed "
    "urb=%p\n", VAR_10);
  FUNC_3(&VAR_22->scheduler_lock);
  FUNC_5(VAR_22, VAR_21, VAR_10, -VAR_1);
  return;
 } else if (!VAR_10->unlinked) {
  struct u132_ring *VAR_24 = VAR_21->ring;
  u8 *VAR_25 = VAR_10->transfer_buffer;
  u8 *VAR_26 = VAR_11;
  int VAR_27 = VAR_12;

  while (VAR_27-- > 0)
   *VAR_25++ = *VAR_26++;

  VAR_10->actual_length = VAR_12;
  if ((VAR_15 == VAR_2) || ((VAR_15 ==
   VAR_4) && ((VAR_10->transfer_flags &
   VAR_5) == 0))) {
   int VAR_28;
   FUNC_3(&VAR_22->scheduler_lock);
   VAR_28 = FUNC_6(VAR_22->platform_dev,
    VAR_24->number, VAR_21, VAR_10, VAR_23,
    VAR_21->usb_endp, 0x3,
    VAR_8);
   if (VAR_28 != 0)
    FUNC_5(VAR_22, VAR_21, VAR_10, VAR_28);
   return;
  } else if (VAR_15 == VAR_3) {
   FUNC_3(&VAR_22->scheduler_lock);
   FUNC_1(&VAR_22->platform_dev->dev, "giving back SETUP I"
    "NPUT STALL urb %p\n", VAR_10);
   FUNC_5(VAR_22, VAR_21, VAR_10,
    VAR_6[VAR_15]);
   return;
  } else {
   FUNC_3(&VAR_22->scheduler_lock);
   FUNC_0(&VAR_22->platform_dev->dev, "giving back SETUP IN"
    "PUT %s urb %p\n", VAR_7[VAR_15],
    VAR_10);
   FUNC_5(VAR_22, VAR_21, VAR_10,
    VAR_6[VAR_15]);
   return;
  }
 } else {
  FUNC_0(&VAR_22->platform_dev->dev, "CALLBACK called urb=%p "
    "unlinked=%d\n", VAR_10, VAR_10->unlinked);
  FUNC_3(&VAR_22->scheduler_lock);
  FUNC_5(VAR_22, VAR_21, VAR_10, 0);
  return;
 }
}
