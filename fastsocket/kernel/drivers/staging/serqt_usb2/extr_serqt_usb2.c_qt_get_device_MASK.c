
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
struct qt_get_device_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct qt_get_device_data*,unsigned char*,int) ;
 int FUNC_3 (int ,int ,int ,int,int ,int ,unsigned char*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_serial *VAR_3,
    struct qt_get_device_data *VAR_4)
{
 int VAR_5;
 unsigned char *VAR_6;

 VAR_6 =
     FUNC_1(sizeof(struct qt_get_device_data), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_3->dev, FUNC_4(VAR_3->dev, 0),
     VAR_2, 0xc0, 0, 0,
     VAR_6,
     sizeof(struct qt_get_device_data), 300);
 if (VAR_5 > 0)
  FUNC_2(VAR_4, VAR_6,
         sizeof(struct qt_get_device_data));
 FUNC_0(VAR_6);

 return VAR_5;
}
