
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct us_data {int dummy; } ;


 int VAR_0 ;
 struct usb_device_id const* VAR_1 ;
 int FUNC_0 (struct us_data**,struct usb_interface*,struct usb_device_id const*,int) ;
 int FUNC_1 (struct us_data*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_2,
    const struct usb_device_id *VAR_3)
{
 struct us_data *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4, VAR_2, VAR_3,
   (VAR_3 - VAR_1) + VAR_0);
 if (VAR_5)
  return VAR_5;



 VAR_5 = FUNC_1(VAR_4);
 return VAR_5;
}
