
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idProduct; } ;
struct usb_device {int dev; TYPE_1__ descriptor; } ;
struct firmware {int dummy; } ;
typedef int lme2510c_s7395 ;
typedef int lme2510c_lg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct usb_device*) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_3, int VAR_4)
{
 const struct firmware *VAR_5 = ((void*)0);
 char VAR_6[] = "dvb-usb-lme2510c-s7395.fw";
 char VAR_7[] = "dvb-usb-lme2510c-lg.fw";
 char *VAR_8[] = {"Loading", "Switching to"};
 int VAR_9;

 VAR_4 = (VAR_4 > 0) ? (VAR_4 & 1) : 0;

 if (VAR_3->descriptor.idProduct == 0x1122)
  return 0;

 switch (VAR_1) {
 case 0:
 default:
  FUNC_2(&VAR_2, VAR_6, sizeof(VAR_6));
  VAR_9 = FUNC_4(&VAR_5, VAR_2, &VAR_3->dev);
  if (VAR_9 == 0) {
   FUNC_0("FRM %s S7395 Firmware", VAR_8[VAR_4]);
   break;
  }
  if (VAR_4 == 0)
   VAR_1 = 1;
  else
   VAR_4 = 0;
 case 1:
  FUNC_2(&VAR_2, VAR_7, sizeof(VAR_7));
  VAR_9 = FUNC_4(&VAR_5, VAR_2, &VAR_3->dev);
  if (VAR_9 == 0) {
   FUNC_0("FRM %s LG Firmware", VAR_8[VAR_4]);
   break;
  }
  FUNC_0("FRM No Firmware Found - please install");
  VAR_1 = 0;
  VAR_4 = 0;
  break;
 }

 FUNC_3(VAR_5);

 if (VAR_4) {
  FUNC_1(VAR_3);
  return -VAR_0;
 }

 return VAR_9;
}
