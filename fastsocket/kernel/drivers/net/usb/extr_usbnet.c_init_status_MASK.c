
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct usbnet {TYPE_6__* interrupt; TYPE_4__* udev; TYPE_3__* status; TYPE_1__* driver_info; } ;
struct usb_interface {int dev; } ;
struct TYPE_13__ {int transfer_flags; } ;
struct TYPE_12__ {scalar_t__ speed; } ;
struct TYPE_10__ {int bEndpointAddress; scalar_t__ bInterval; } ;
struct TYPE_11__ {TYPE_2__ desc; } ;
struct TYPE_9__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,int ,unsigned int,unsigned int) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (unsigned int,int ) ;
 unsigned int FUNC_3 (int,int) ;
 TYPE_6__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_4__*,unsigned int,char*,unsigned int,int ,struct usbnet*,unsigned int) ;
 unsigned int FUNC_6 (TYPE_4__*,unsigned int,int ) ;
 int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_9 (struct usbnet *VAR_6, struct usb_interface *VAR_7)
{
 char *VAR_8 = ((void*)0);
 unsigned VAR_9 = 0;
 unsigned VAR_10;
 unsigned VAR_11;

 if (!VAR_6->driver_info->status)
  return 0;

 VAR_9 = FUNC_8 (VAR_6->udev,
   VAR_6->status->desc.bEndpointAddress
    & VAR_3);
 VAR_10 = FUNC_6 (VAR_6->udev, VAR_9, 0);


 VAR_11 = FUNC_3 ((int) VAR_6->status->desc.bInterval,
  (VAR_6->udev->speed == VAR_4) ? 7 : 3);

 VAR_8 = FUNC_2 (VAR_10, VAR_1);
 if (VAR_8) {
  VAR_6->interrupt = FUNC_4 (0, VAR_1);
  if (!VAR_6->interrupt) {
   FUNC_1 (VAR_8);
   return -VAR_0;
  } else {
   FUNC_5(VAR_6->interrupt, VAR_6->udev, VAR_9,
    VAR_8, VAR_10, VAR_5, VAR_6, VAR_11);
   VAR_6->interrupt->transfer_flags |= VAR_2;
   FUNC_0(&VAR_7->dev,
    "status ep%din, %d bytes period %d\n",
    FUNC_7(VAR_9), VAR_10, VAR_11);
  }
 }
 return 0;
}
