
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct catc {int timer; int is_f5u011; TYPE_1__* irq_urb; int usbdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct catc* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3)
{
 struct catc *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 VAR_4->irq_urb->dev = VAR_4->usbdev;
 if ((VAR_5 = FUNC_4(VAR_4->irq_urb, VAR_0)) < 0) {
  FUNC_0("submit(irq_urb) status %d", VAR_5);
  return -1;
 }

 FUNC_3(VAR_3);

 if (!VAR_4->is_f5u011)
  FUNC_1(&VAR_4->timer, VAR_2 + VAR_1);

 return 0;
}
