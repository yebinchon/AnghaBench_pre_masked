
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dev; } ;
typedef enum spcp8x5_type { ____Placeholder_spcp8x5_type } spcp8x5_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ,int ,int ,int *,int ,int) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct usb_device *VAR_3, u16 VAR_4,
     u16 VAR_5, enum spcp8x5_type VAR_6)
{
 int VAR_7;



 if (VAR_6 == VAR_2)
  return;

 VAR_7 = FUNC_1(VAR_3, FUNC_2(VAR_3, 0),
         VAR_1, VAR_0,
         VAR_4, VAR_5, ((void*)0), 0, 100);
 FUNC_0(&VAR_3->dev, "value = %#x , index = %#x\n", VAR_4, VAR_5);
 if (VAR_7 < 0)
  FUNC_0(&VAR_3->dev,
   "RTSCTS usb_control_msg(enable flowctrl) = %d\n", VAR_7);
}
