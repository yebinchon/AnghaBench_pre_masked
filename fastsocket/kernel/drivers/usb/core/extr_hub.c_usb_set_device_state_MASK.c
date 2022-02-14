
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {scalar_t__ state; int active_duration; int dev; TYPE_2__* actconfig; scalar_t__ parent; } ;
typedef enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;
struct TYPE_3__ {int bmAttributes; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct usb_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct usb_device *VAR_6,
  enum usb_device_state VAR_7)
{
 unsigned long VAR_8;

 FUNC_2(&VAR_4, VAR_8);
 if (VAR_6->state == VAR_2)
  ;
 else if (VAR_7 != VAR_2) {




  if (VAR_6->parent) {
   if (VAR_6->state == VAR_3
     || VAR_7 == VAR_3)
    ;
   else if (VAR_7 == VAR_1)
    FUNC_0(&VAR_6->dev,
     (VAR_6->actconfig->desc.bmAttributes
      & VAR_0));
   else
    FUNC_0(&VAR_6->dev, 0);
  }
  if (VAR_6->state == VAR_3 &&
   VAR_7 != VAR_3)
   VAR_6->active_duration -= VAR_5;
  else if (VAR_7 == VAR_3 &&
    VAR_6->state != VAR_3)
   VAR_6->active_duration += VAR_5;
  VAR_6->state = VAR_7;
 } else
  FUNC_1(VAR_6);
 FUNC_3(&VAR_4, VAR_8);
}
