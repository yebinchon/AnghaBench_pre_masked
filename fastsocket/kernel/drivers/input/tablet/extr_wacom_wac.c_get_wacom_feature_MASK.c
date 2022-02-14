
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {int dummy; } ;
struct usb_device_id {int dummy; } ;


 struct wacom_features* VAR_0 ;
 struct usb_device_id const* VAR_1 ;

struct wacom_features * FUNC_0(const struct usb_device_id *VAR_2)
{
        int VAR_3 = VAR_2 - VAR_1;
        struct wacom_features *VAR_4 = &VAR_0[VAR_3];

        return VAR_4;
}
