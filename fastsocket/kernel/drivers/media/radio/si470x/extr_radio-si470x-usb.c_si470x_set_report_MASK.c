
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si470x_device {TYPE_1__* intf; int usbdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int ,int,unsigned char,int,void*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct si470x_device *VAR_5, void *VAR_6, int VAR_7)
{
 unsigned char *VAR_8 = (unsigned char *) VAR_6;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_5->usbdev,
  FUNC_2(VAR_5->usbdev, 0),
  VAR_0,
  VAR_3 | VAR_2 | VAR_1,
  VAR_8[0], 2,
  VAR_6, VAR_7, VAR_4);

 if (VAR_9 < 0)
  FUNC_0(&VAR_5->intf->dev,
   "si470x_set_report: usb_control_msg returned %d\n",
   VAR_9);
 return VAR_9;
}
