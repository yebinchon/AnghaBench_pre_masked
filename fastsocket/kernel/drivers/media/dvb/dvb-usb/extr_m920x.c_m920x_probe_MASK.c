
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct m920x_inits {int dummy; } ;
struct dvb_usb_device {int dummy; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct usb_interface*,int *,int ,struct dvb_usb_device**,int ) ;
 int FUNC_2 (struct dvb_usb_device*,struct m920x_inits*) ;
 int FUNC_3 (struct usb_interface*) ;
 int VAR_4 ;
 struct m920x_inits* VAR_5 ;
 struct m920x_inits* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct m920x_inits* VAR_9 ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_10,
         const struct usb_device_id *VAR_11)
{
 struct dvb_usb_device *VAR_12 = ((void*)0);
 int VAR_13;
 struct m920x_inits *VAR_14 = ((void*)0);
 int VAR_15 = VAR_10->cur_altsetting->desc.bInterfaceNumber;

 FUNC_0("Probing for m920x device at interface %d\n", VAR_15);

 if (VAR_15 == 0) {




  VAR_13 = FUNC_1(VAR_10, &VAR_4,
       VAR_0, &VAR_12, VAR_1);
  if (VAR_13 == 0) {
   VAR_14 = VAR_5;
   goto found;
  }

  VAR_13 = FUNC_1(VAR_10, &VAR_2,
       VAR_0, &VAR_12, VAR_1);
  if (VAR_13 == 0) {

   goto found;
  }


  VAR_13 = FUNC_1(VAR_10, &VAR_8,
       VAR_0, &VAR_12, VAR_1);
  if (VAR_13 == 0) {
   VAR_14 = VAR_9;
   goto found;
  }

  VAR_13 = FUNC_1(VAR_10, &VAR_3,
       VAR_0, &VAR_12, VAR_1);
  if (VAR_13 == 0) {

   goto found;
  }

  VAR_13 = FUNC_1(VAR_10, &VAR_7,
       VAR_0, &VAR_12, VAR_1);
  if (VAR_13 == 0) {
   VAR_14 = VAR_6;
   goto found;
  }

  return VAR_13;
 } else {






 }

 found:
 if ((VAR_13 = FUNC_3(VAR_10)) < 0)
  return VAR_13;

 if (VAR_12 && (VAR_13 = FUNC_2(VAR_12, VAR_14)) != 0)
  return VAR_13;

 return VAR_13;
}
