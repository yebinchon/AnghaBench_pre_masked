
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_complete_t ;
typedef int urb_t ;
typedef int u32_t ;
typedef scalar_t__ u16_t ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct usb_device*,int ,void*,int,int ,void*,int ) ;
 int FUNC_1 (struct usb_device*,scalar_t__) ;
 int FUNC_2 (struct usb_device*,scalar_t__) ;
 int FUNC_3 (int *,int ) ;

u32_t FUNC_4(urb_t *VAR_2, struct usb_device *VAR_3, u16_t VAR_4, u16_t VAR_5,
        void *VAR_6, int VAR_7, usb_complete_t VAR_8, void *VAR_9,
        u32_t VAR_10)
{
    u32_t VAR_11;

    if(VAR_5 == VAR_1)
    {
        FUNC_0(VAR_2, VAR_3, FUNC_2(VAR_3, VAR_4),
                VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
    }
    else
    {
        FUNC_0(VAR_2, VAR_3, FUNC_1(VAR_3, VAR_4),
                VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
    }

    VAR_11 = FUNC_3(VAR_2, VAR_0);

    return VAR_11;
}
