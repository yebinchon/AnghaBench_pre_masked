
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {int index; int value; scalar_t__ request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usb_interface*,int *,int ,int *,int ) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_device*,int ,scalar_t__,int,int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_7,
    const struct usb_device_id *VAR_8)
{
 int VAR_9, VAR_10;
 struct usb_device *VAR_11 = FUNC_1(VAR_7);


 for (VAR_9 = 0; VAR_5[VAR_9].request; VAR_9++) {
  VAR_10 = FUNC_2(VAR_11, FUNC_3(VAR_11, 0),
          VAR_5[VAR_9].request,
          VAR_3 | VAR_2,
          VAR_5[VAR_9].value,
          VAR_5[VAR_9].index, ((void*)0), 0,
          VAR_0);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_0(VAR_7, &VAR_6,
      VAR_1, ((void*)0), VAR_4);
 if (VAR_10)
  return VAR_10;

 return 0;
}
