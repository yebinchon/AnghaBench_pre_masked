
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int usb_complete_t ;
struct TYPE_5__ {scalar_t__ hcpriv; int transfer_flags; } ;
typedef TYPE_1__ urb_t ;
typedef scalar_t__ u32_t ;
typedef scalar_t__ u16_t ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct usb_device*,int ,void*,int,int ,void*) ;
 int FUNC_1 (struct usb_device*,scalar_t__) ;
 int FUNC_2 (struct usb_device*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;

u32_t FUNC_4(urb_t *VAR_3, struct usb_device *VAR_4, u16_t VAR_5, u16_t VAR_6,
        void *VAR_7, int VAR_8, usb_complete_t VAR_9, void *VAR_10)
{
    u32_t VAR_11;

    if(VAR_6 == VAR_2)
    {
        FUNC_0(VAR_3, VAR_4, FUNC_2(VAR_4, VAR_5),
                VAR_7, VAR_8, VAR_9, VAR_10);

        VAR_3->transfer_flags |= VAR_1;
    }
    else
    {
        FUNC_0(VAR_3, VAR_4, FUNC_1(VAR_4, VAR_5),
                VAR_7, VAR_8, VAR_9, VAR_10);
    }

    if (VAR_5 == 4)
    {
        if (VAR_3->hcpriv)
        {


        }
    }

    VAR_11 = FUNC_3(VAR_3, VAR_0);
    if ((VAR_5 == 4) & (VAR_11 != 0))
    {

    }
    return VAR_11;
}
