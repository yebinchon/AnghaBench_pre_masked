
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usbtmc_device_data {TYPE_1__* usb_dev; int bulk_out; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(struct usbtmc_device_data *VAR_8)
{
 u8 *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(2, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_8->usb_dev,
        FUNC_4(VAR_8->usb_dev, 0),
        VAR_6,
        VAR_3 | VAR_7 |
        VAR_5,
        VAR_4, VAR_8->bulk_out,
        VAR_9, 0, VAR_2);

 if (VAR_10 < 0) {
  FUNC_0(&VAR_8->usb_dev->dev, "usb_control_msg returned %d\n",
   VAR_10);
  goto exit;
 }
 VAR_10 = 0;

exit:
 FUNC_1(VAR_9);
 return VAR_10;
}
