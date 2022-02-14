
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
struct qt_open_channel_data {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int,int ,struct qt_open_channel_data*,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_2, __u16 VAR_3,
      struct qt_open_channel_data *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->dev, FUNC_1(VAR_2->dev, 0),
     VAR_0,
     VAR_1, 1, VAR_3,
     VAR_4,
     sizeof(struct qt_open_channel_data), 300);

 return VAR_5;

}
