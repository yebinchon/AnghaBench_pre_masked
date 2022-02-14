
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bc_state {TYPE_3__* cs; } ;
struct TYPE_8__ {unsigned long data; int function; scalar_t__ expires; } ;
struct TYPE_6__ {int bRequest; scalar_t__ wLength; scalar_t__ wIndex; int wValue; int bRequestType; } ;
struct bas_cardstate {int pending; int lock; TYPE_4__ timer_ctrl; int urb_ctrl; scalar_t__ retry_ctrl; TYPE_2__ dr_ctrl; int udev; } ;
struct TYPE_5__ {struct bas_cardstate* bas; } ;
struct TYPE_7__ {int dev; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int,...) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int ,unsigned char*,int *,int ,int ,struct bas_cardstate*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct bc_state *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 struct bas_cardstate *VAR_12 = VAR_8->cs->hw.bas;
 int VAR_13;
 unsigned long VAR_14;

 FUNC_4(VAR_0, "-------> 0x%02x (%d)", VAR_9, VAR_10);

 FUNC_5(&VAR_12->lock, VAR_14);
 if (VAR_12->pending) {
  FUNC_6(&VAR_12->lock, VAR_14);
  FUNC_2(VAR_8->cs->dev,
   "submission of request 0x%02x failed: "
   "request 0x%02x still pending\n",
   VAR_9, VAR_12->pending);
  return -VAR_1;
 }

 VAR_12->dr_ctrl.bRequestType = VAR_4;
 VAR_12->dr_ctrl.bRequest = VAR_9;
 VAR_12->dr_ctrl.wValue = FUNC_1(VAR_10);
 VAR_12->dr_ctrl.wIndex = 0;
 VAR_12->dr_ctrl.wLength = 0;
 FUNC_8(VAR_12->urb_ctrl, VAR_12->udev,
        FUNC_9(VAR_12->udev, 0),
        (unsigned char*) &VAR_12->dr_ctrl, ((void*)0), 0,
        VAR_7, VAR_12);
 VAR_12->retry_ctrl = 0;
 VAR_13 = FUNC_10(VAR_12->urb_ctrl, VAR_2);
 if (FUNC_7(VAR_13)) {
  FUNC_2(VAR_8->cs->dev, "could not submit request 0x%02x: %s\n",
   VAR_9, FUNC_3(VAR_13));
  FUNC_6(&VAR_12->lock, VAR_14);
  return VAR_13;
 }
 VAR_12->pending = VAR_9;

 if (VAR_11 > 0) {
  FUNC_4(VAR_0, "setting timeout of %d/10 secs", VAR_11);
  VAR_12->timer_ctrl.expires = VAR_5 + VAR_11 * VAR_3 / 10;
  VAR_12->timer_ctrl.data = (unsigned long) VAR_8;
  VAR_12->timer_ctrl.function = VAR_6;
  FUNC_0(&VAR_12->timer_ctrl);
 }

 FUNC_6(&VAR_12->lock, VAR_14);
 return 0;
}
