
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_usb {int * usb3v1; int * usb1v5; int * usb1v8; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct twl4030_usb *VAR_12)
{

 FUNC_3(VAR_2, 0xC0, VAR_1);
 FUNC_3(VAR_2, 0x0C, VAR_1);


 FUNC_3(VAR_3, 0, VAR_11);


 FUNC_3(VAR_3, 0x14, VAR_10);


 FUNC_3(VAR_3, 0, VAR_8);

 VAR_12->usb3v1 = FUNC_1(VAR_12->dev, "usb3v1");
 if (FUNC_0(VAR_12->usb3v1))
  return -VAR_0;

 FUNC_3(VAR_3, 0, VAR_9);


 FUNC_3(VAR_3, 0, VAR_4);

 VAR_12->usb1v5 = FUNC_1(VAR_12->dev, "usb1v5");
 if (FUNC_0(VAR_12->usb1v5))
  goto fail1;

 FUNC_3(VAR_3, 0, VAR_5);


 FUNC_3(VAR_3, 0, VAR_6);

 VAR_12->usb1v8 = FUNC_1(VAR_12->dev, "usb1v8");
 if (FUNC_0(VAR_12->usb1v8))
  goto fail2;

 FUNC_3(VAR_3, 0, VAR_7);


 FUNC_3(VAR_2, 0, VAR_1);

 return 0;

fail2:
 FUNC_2(VAR_12->usb1v5);
 VAR_12->usb1v5 = ((void*)0);
fail1:
 FUNC_2(VAR_12->usb3v1);
 VAR_12->usb3v1 = ((void*)0);
 return -VAR_0;
}
