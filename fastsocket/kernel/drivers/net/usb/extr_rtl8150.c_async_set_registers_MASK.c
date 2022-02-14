
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {void* wLength; scalar_t__ wIndex; void* wValue; int bRequest; int bRequestType; } ;
struct TYPE_8__ {int flags; int netdev; TYPE_3__* ctrl_urb; int rx_creg; TYPE_1__ dr; int udev; } ;
typedef TYPE_2__ rtl8150_t ;
struct TYPE_9__ {int transfer_buffer_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_3__*,int ,int ,char*,int *,int ,int ,TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_8(rtl8150_t * VAR_7, u16 VAR_8, u16 VAR_9)
{
 int VAR_10;

 if (FUNC_4(VAR_5, &VAR_7->flags))
  return -VAR_0;

 VAR_7->dr.bRequestType = VAR_3;
 VAR_7->dr.bRequest = VAR_4;
 VAR_7->dr.wValue = FUNC_0(VAR_8);
 VAR_7->dr.wIndex = 0;
 VAR_7->dr.wLength = FUNC_0(VAR_9);
 VAR_7->ctrl_urb->transfer_buffer_length = VAR_9;
 FUNC_5(VAR_7->ctrl_urb, VAR_7->udev,
    FUNC_6(VAR_7->udev, 0), (char *) &VAR_7->dr,
    &VAR_7->rx_creg, VAR_9, VAR_6, VAR_7);
 if ((VAR_10 = FUNC_7(VAR_7->ctrl_urb, VAR_2))) {
  if (VAR_10 == -VAR_1)
   FUNC_2(VAR_7->netdev);
  FUNC_1("control request submission failed: %d", VAR_10);
 } else
  FUNC_3(VAR_5, &VAR_7->flags);

 return VAR_10;
}
