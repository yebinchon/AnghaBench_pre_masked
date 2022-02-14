
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ftdi {int disconnected; int * bulk_in_buffer; int ftdi_list; TYPE_1__* udev; } ;
struct kref {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,struct usb_ftdi*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct usb_ftdi* FUNC_2 (struct kref*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct kref *VAR_2)
{
        struct usb_ftdi *VAR_3 = FUNC_2(VAR_2);
        FUNC_0(&VAR_3->udev->dev, "FREEING ftdi=%p\n", VAR_3);
        FUNC_6(VAR_3->udev);
        VAR_3->disconnected += 1;
        FUNC_4(&VAR_1);
        FUNC_3(&VAR_3->ftdi_list);
        VAR_0 -= 1;
        FUNC_5(&VAR_1);
        FUNC_1(VAR_3->bulk_in_buffer);
        VAR_3->bulk_in_buffer = ((void*)0);
}
