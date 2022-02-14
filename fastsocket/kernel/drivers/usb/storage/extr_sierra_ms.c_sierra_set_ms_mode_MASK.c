
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,int ,int,int *,int ,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_4, __u16 VAR_5)
{
 int VAR_6;
 FUNC_0("SWIMS: %s", "DEVICE MODE SWITCH\n");
 VAR_6 = FUNC_1(VAR_4, FUNC_2(VAR_4, 0),
   VAR_0,
   VAR_3 | VAR_2,
   VAR_5,
   0x0000,
   ((void*)0),
   0,
   VAR_1);
 return VAR_6;
}
