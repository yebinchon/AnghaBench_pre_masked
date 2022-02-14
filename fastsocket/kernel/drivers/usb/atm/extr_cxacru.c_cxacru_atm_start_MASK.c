
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbatm_data {struct usb_interface* usb_intf; struct cxacru_data* driver_data; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {int work; } ;
struct cxacru_data {int poll_state; TYPE_1__ poll_work; int adsl_state_serialize; int poll_state_serialize; } ;
struct atm_dev {int * esi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;




 int FUNC_1 (struct usbatm_data*,char*,int) ;
 int FUNC_2 (struct cxacru_data*,int ,int *,int ,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usbatm_data*,struct atm_dev*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct usbatm_data*,char*,int) ;

__attribute__((used)) static int FUNC_9(struct usbatm_data *VAR_3,
  struct atm_dev *VAR_4)
{
 struct cxacru_data *VAR_5 = VAR_3->driver_data;
 struct usb_interface *VAR_6 = VAR_3->usb_intf;



 int VAR_7;
 int VAR_8 = 1;

 FUNC_5("cxacru_atm_start");


 VAR_7 = FUNC_2(VAR_5, VAR_0, ((void*)0), 0,
   VAR_4->esi, sizeof(VAR_4->esi));
 if (VAR_7 < 0) {
  FUNC_1(VAR_3, "cxacru_atm_start: CARD_GET_MAC_ADDRESS returned %d\n", VAR_7);
  return VAR_7;
 }





 FUNC_0(VAR_2);



 FUNC_6(&VAR_5->adsl_state_serialize);
 VAR_7 = FUNC_2(VAR_5, VAR_1, ((void*)0), 0, ((void*)0), 0);
 if (VAR_7 < 0)
  FUNC_1(VAR_3, "cxacru_atm_start: CHIP_ADSL_LINE_START returned %d\n", VAR_7);


 FUNC_6(&VAR_5->poll_state_serialize);
 switch (VAR_5->poll_state) {
 case 129:

  VAR_5->poll_state = 131;
  break;

 case 128:

  VAR_5->poll_state = 131;
 case 131:
 case 130:

  VAR_8 = 0;
 }
 FUNC_7(&VAR_5->poll_state_serialize);
 FUNC_7(&VAR_5->adsl_state_serialize);

 if (VAR_8)
  FUNC_3(&VAR_5->poll_work.work);
 return 0;

fail_sysfs:
 FUNC_8(VAR_3, "cxacru_atm_start: device_create_file failed (%d)\n", VAR_7);
 FUNC_4(VAR_3, VAR_4);
 return VAR_7;
}
