
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
struct qt2_status_data {int dummy; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,int ,int ,int,int,struct qt2_status_data*,int,int) ;
 unsigned int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_2, __u16
  VAR_3, struct qt2_status_data *VAR_4)
{
 int VAR_5;
 __u16 VAR_6;
 __u8 VAR_7;
 unsigned int VAR_8;
 VAR_6 = sizeof(struct qt2_status_data);
 VAR_7 = VAR_1;
 VAR_8 = FUNC_1(VAR_2->dev, 0);
 VAR_5 = FUNC_0(VAR_2->dev, VAR_8, VAR_0,
   VAR_7, 0x00, VAR_3, VAR_4, VAR_6, 5000);
 return VAR_5;
}
