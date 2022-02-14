
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int iManufacturer; int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct TYPE_5__ {void* rc_codes; } ;
struct dvb_usb_device_properties {TYPE_2__ rc_core; } ;
typedef int manufacturer ;
struct TYPE_6__ {int eeprom_sum; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct usb_device*,int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct usb_device *VAR_8,
  struct dvb_usb_device_properties *VAR_9)
{
 u16 VAR_10 = FUNC_1(VAR_8->descriptor.idVendor);
 u16 VAR_11 = FUNC_1(VAR_8->descriptor.idProduct);


 VAR_9->rc_core.rc_codes = FUNC_0(
  VAR_7, VAR_5);


 if (!VAR_9->rc_core.rc_codes)
  VAR_9->rc_core.rc_codes = FUNC_0(
   VAR_3.eeprom_sum, VAR_4);


 if (!VAR_9->rc_core.rc_codes)
  VAR_9->rc_core.rc_codes = FUNC_0(
   (VAR_10 << 16) + VAR_11, VAR_6);


 if (!VAR_9->rc_core.rc_codes && VAR_10 == VAR_2) {




  char VAR_12[10];
  FUNC_2(VAR_12, 0, sizeof(VAR_12));
  FUNC_4(VAR_8, VAR_8->descriptor.iManufacturer,
   VAR_12, sizeof(VAR_12));
  if (!FUNC_3("MSI", VAR_12)) {


   VAR_9->rc_core.rc_codes = FUNC_0(
    VAR_0,
    VAR_5);
  }
 }


 if (!VAR_9->rc_core.rc_codes)
  VAR_9->rc_core.rc_codes = VAR_1;

 return;
}
