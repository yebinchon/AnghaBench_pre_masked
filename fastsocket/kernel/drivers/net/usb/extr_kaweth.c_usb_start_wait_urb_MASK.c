
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_api_data {scalar_t__ done; int wqh; } ;
struct urb {int status; int actual_length; TYPE_1__* dev; struct usb_api_data* context; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (struct urb*,int ) ;
 int FUNC_5 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct urb *VAR_2, int VAR_3, int* VAR_4)
{
 struct usb_api_data VAR_5;
        int VAR_6;

        FUNC_1(&VAR_5.wqh);
        VAR_5.done = 0;

        VAR_2->context = &VAR_5;
        VAR_6 = FUNC_4(VAR_2, VAR_1);
        if (VAR_6) {

                FUNC_2(VAR_2);
                return VAR_6;
        }

 if (!FUNC_5(VAR_5.wqh, VAR_5.done, VAR_3)) {

                FUNC_0(&VAR_2->dev->dev, "usb_control/bulk_msg: timeout\n");
                FUNC_3(VAR_2);
                VAR_6 = -VAR_0;
        }
 else {
                VAR_6 = VAR_2->status;
 }

        if (VAR_4) {
                *VAR_4 = VAR_2->actual_length;
 }

        FUNC_2(VAR_2);
        return VAR_6;
}
