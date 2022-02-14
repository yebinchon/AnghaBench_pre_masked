
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct urb {int unlinked; } ;
struct u132_ring {int number; } ;
struct u132_endp {int usb_endp; struct u132_ring* ring; scalar_t__ dequeueing; struct u132* u132; } ;
struct u132 {int going; int scheduler_lock; TYPE_1__* platform_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct u132*,struct u132_endp*,struct urb*,int) ;
 int FUNC_4 (struct u132*,struct u132_endp*,struct urb*,int) ;
 int FUNC_5 (TYPE_1__*,int ,struct u132_endp*,struct urb*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_3, struct urb *VAR_4,
 u8 *VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9,
 int VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
 struct u132_endp *VAR_15 = VAR_3;
 struct u132 *VAR_16 = VAR_15->u132;
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
  int VAR_17;
  struct u132_ring *VAR_18 = VAR_15->ring;
  FUNC_2(&VAR_16->scheduler_lock);
  VAR_17 = FUNC_5(VAR_16->platform_dev,
   VAR_18->number, VAR_15, VAR_4, 0, VAR_15->usb_endp, 0,
   VAR_2);
  if (VAR_17 != 0)
   FUNC_4(VAR_16, VAR_15, VAR_4, VAR_17);
  return;
 } else {
  FUNC_0(&VAR_16->platform_dev->dev, "CALLBACK called urb=%p "
    "unlinked=%d\n", VAR_4, VAR_4->unlinked);
  FUNC_2(&VAR_16->scheduler_lock);
  FUNC_4(VAR_16, VAR_15, VAR_4, 0);
  return;
 }
}
