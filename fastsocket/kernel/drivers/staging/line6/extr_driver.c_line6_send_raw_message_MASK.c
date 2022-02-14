
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6 {int ifcdev; int ep_control_write; int usbdev; scalar_t__ max_packet_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct usb_line6*,char,char const*,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,int ,char*,int,int*,int) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct usb_line6 *VAR_2, const char *VAR_3,
      int VAR_4)
{
 int VAR_5, VAR_6 = 0;





 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += VAR_2->max_packet_size) {
  int VAR_7;
  const char *VAR_8 = VAR_3 + VAR_5;
  int VAR_9 = FUNC_2(VAR_2->max_packet_size, VAR_4 - VAR_5);
  int VAR_10;

  VAR_10 = FUNC_3(VAR_2->usbdev,
        FUNC_4(VAR_2->usbdev,
         VAR_2->ep_control_write),
        (char *)VAR_8, VAR_9,
        &VAR_7, VAR_1 * VAR_0);

  if (VAR_10) {
   FUNC_0(VAR_2->ifcdev,
    "usb_interrupt_msg failed (%d)\n", VAR_10);
   break;
  }

  VAR_6 += VAR_9;
 }

 return VAR_6;
}
