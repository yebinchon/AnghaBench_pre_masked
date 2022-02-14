
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct urb {int actual_length; int unlinked; int * transfer_buffer; } ;
struct u132_ring {int number; } ;
struct u132_endp {size_t usb_addr; int usb_endp; struct u132_ring* ring; scalar_t__ dequeueing; struct u132* u132; } ;
struct u132 {int going; int scheduler_lock; TYPE_2__* platform_dev; TYPE_1__* addr; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct u132*,struct u132_endp*,struct urb*,int) ;
 int FUNC_4 (struct u132*,struct u132_endp*,struct urb*,int) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,int ,struct u132_endp*,struct urb*,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_3, struct urb *VAR_4, u8 *VAR_5,
 int VAR_6, int VAR_7, int VAR_8, int VAR_9,
 int VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
 struct u132_endp *VAR_15 = VAR_3;
 struct u132 *VAR_16 = VAR_15->u132;
 u8 VAR_17 = VAR_16->addr[VAR_15->usb_addr].address;
 FUNC_1(&VAR_16->scheduler_lock);
 if (VAR_16->going > 1) {
  FUNC_0(&VAR_16->platform_dev->dev, "device has been removed %d\n"
   , VAR_16->going);
  FUNC_2(&VAR_16->scheduler_lock);
  FUNC_3(VAR_16, VAR_15, VAR_4, -VAR_1);
  return;
 } else if (VAR_15->dequeueing) {
  VAR_15->dequeueing = 0;
  FUNC_2(&VAR_16->scheduler_lock);
  FUNC_4(VAR_16, VAR_15, VAR_4, -VAR_0);
  return;
 } else if (VAR_16->going > 0) {
  FUNC_0(&VAR_16->platform_dev->dev, "device is being removed "
    "urb=%p\n", VAR_4);
  FUNC_2(&VAR_16->scheduler_lock);
  FUNC_4(VAR_16, VAR_15, VAR_4, -VAR_1);
  return;
 } else if (!VAR_4->unlinked) {
  int VAR_18;
  struct u132_ring *VAR_19 = VAR_15->ring;
  u8 *VAR_20 = VAR_4->transfer_buffer;
  u8 *VAR_21 = VAR_5;
  int VAR_22 = VAR_6;

  while (VAR_22-- > 0)
   *VAR_20++ = *VAR_21++;

  VAR_4->actual_length = VAR_6;
  FUNC_2(&VAR_16->scheduler_lock);
  VAR_18 = FUNC_5(VAR_16->platform_dev,
   VAR_19->number, VAR_15, VAR_4, VAR_17, VAR_15->usb_endp, 0x3,
   VAR_2);
  if (VAR_18 != 0)
   FUNC_4(VAR_16, VAR_15, VAR_4, VAR_18);
  return;
 } else {
  FUNC_0(&VAR_16->platform_dev->dev, "CALLBACK called urb=%p "
    "unlinked=%d\n", VAR_4, VAR_4->unlinked);
  FUNC_2(&VAR_16->scheduler_lock);
  FUNC_4(VAR_16, VAR_15, VAR_4, 0);
  return;
 }
}
