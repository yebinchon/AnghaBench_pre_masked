
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wacom_features {unsigned char unit; unsigned char unitExpo; int pressure_max; void* y_max; void* device_type; void* pktlen; int type; void* y_phy; void* x_max; void* x_phy; } ;
struct usb_interface {TYPE_2__* altsetting; } ;
struct usb_device {int dummy; } ;
struct hid_descriptor {int wDescriptorLength; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (struct usb_device*,int ,int ,int,int,int ,unsigned char*,int,int) ;
 int FUNC_4 (struct usb_device*,int ) ;
 void* FUNC_5 (unsigned char*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_14, struct hid_descriptor *VAR_15,
      struct wacom_features *VAR_16)
{
 struct usb_device *VAR_17 = FUNC_0(VAR_14);
 char VAR_18 = 0;

  int VAR_19 = 0;
 int VAR_20 = 0, VAR_21 = VAR_13, VAR_22 = 0, VAR_23 = 0;
 unsigned char *VAR_24;

 VAR_24 = FUNC_2(VAR_15->wDescriptorLength, VAR_3);
 if (!VAR_24)
  return -VAR_2;


 do {
  VAR_19 = FUNC_3(VAR_17, FUNC_4(VAR_17, 0),
   VAR_8,
   VAR_7 | VAR_6,
   VAR_4 << 8,
   VAR_14->altsetting[0].desc.bInterfaceNumber,
   VAR_24,
   VAR_15->wDescriptorLength,
   5000);
 } while (VAR_19 < 0 && VAR_18++ < 5);


 if (VAR_19 < 0)
  goto out;

 for (VAR_20 = 0; VAR_20 < VAR_15->wDescriptorLength; VAR_20++) {

  switch (VAR_24[VAR_20]) {
  case 133:
   switch (VAR_24[VAR_20 + 1]) {
   case 131:
    VAR_21 = VAR_12;
    VAR_20++;
    break;

   case 132:
    VAR_21 = VAR_11;
    VAR_20++;
    break;
   }
   break;

  case 135:
   switch (VAR_24[VAR_20 + 1]) {
   case 129:
    if (VAR_21 == VAR_11) {
     if (VAR_22) {
      VAR_16->device_type = VAR_0;
      if (VAR_16->type == VAR_5) {

       VAR_16->pktlen = VAR_10;
      }
      VAR_16->x_max =
       FUNC_5(&VAR_24[VAR_20 + 3]);
      VAR_16->x_phy =
       FUNC_5(&VAR_24[VAR_20 + 6]);
      VAR_16->unit = VAR_24[VAR_20 + 9];
      VAR_16->unitExpo = VAR_24[VAR_20 + 11];
      VAR_20 += 12;
     } else if (VAR_23) {

      if (VAR_16->type == VAR_5)
       VAR_16->pktlen = VAR_9;
      VAR_16->device_type = VAR_1;
      VAR_16->x_max =
       FUNC_5(&VAR_24[VAR_20 + 3]);
      VAR_20 += 4;
     }
    } else if (VAR_21 == VAR_12) {




     VAR_16->pressure_max = 255;
     VAR_20 += 4;
    }
    break;

   case 128:
    if (VAR_21 == VAR_11) {
     if (VAR_22) {
      VAR_16->device_type = VAR_0;
      if (VAR_16->type == VAR_5) {

       VAR_16->pktlen = VAR_10;
       VAR_16->y_max =
        FUNC_5(&VAR_24[VAR_20 + 3]);
       VAR_16->y_phy =
        FUNC_5(&VAR_24[VAR_20 + 6]);
       VAR_20 += 7;
      } else {
       VAR_16->y_max =
        VAR_16->x_max;
       VAR_16->y_phy =
        FUNC_5(&VAR_24[VAR_20 + 3]);
       VAR_20 += 4;
      }
     } else if (VAR_23) {

      if (VAR_16->type == VAR_5)
       VAR_16->pktlen = VAR_9;
      VAR_16->device_type = VAR_1;
      VAR_16->y_max =
       FUNC_5(&VAR_24[VAR_20 + 3]);
      VAR_20 += 4;
     }
    }
    break;

   case 134:
    VAR_22 = 1;
    VAR_20++;
    break;

   case 130:
    VAR_23 = 1;
    VAR_20++;
    break;
   }
   break;

  case 136:

   VAR_22 = VAR_21 = 0;
   break;
  }
 }

 out:
 VAR_19 = 0;
 FUNC_1(VAR_24);
 return VAR_19;
}
