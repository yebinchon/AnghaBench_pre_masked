
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ actual_length; struct sisusb_urb_context* context; } ;
struct sisusb_usb_data {int wait_q; int * urbstatus; int present; int sisusb_dev; } ;
struct sisusb_urb_context {size_t urbindex; int * actual_length; struct sisusb_usb_data* sisusb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct urb *VAR_1)
{
 struct sisusb_urb_context *VAR_2 = VAR_1->context;
 struct sisusb_usb_data *VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = VAR_2->sisusb;

 if (!VAR_3 || !VAR_3->sisusb_dev || !VAR_3->present)
  return;


 if (VAR_2->actual_length)
  *(VAR_2->actual_length) += VAR_1->actual_length;


 VAR_3->urbstatus[VAR_2->urbindex] &= ~VAR_0;
 FUNC_0(&VAR_3->wait_q);
}
