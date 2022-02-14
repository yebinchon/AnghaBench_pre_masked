
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6 {int ifcdev; int ep_control_write; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (struct usb_line6*,char,unsigned char*,int) ;
 int FUNC_4 (int ,int ,unsigned char*,int,unsigned int*,int) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct usb_line6 *VAR_6, int VAR_7)
{
 int VAR_8;
 unsigned char *VAR_9;
 unsigned int VAR_10;

 VAR_9 = FUNC_2(2, VAR_1);

 if (!VAR_9) {
  FUNC_0(VAR_6->ifcdev, "out of memory\n");
  return -VAR_0;
 }

 VAR_9[0] = VAR_4 | VAR_3;
 VAR_9[1] = VAR_7;





 VAR_8 = FUNC_4(VAR_6->usbdev,
       FUNC_5(VAR_6->usbdev,
        VAR_6->ep_control_write),
       VAR_9, 2, &VAR_10, VAR_5 * VAR_2);

 if (VAR_8)
  FUNC_0(VAR_6->ifcdev, "usb_interrupt_msg failed (%d)\n", VAR_8);

 FUNC_1(VAR_9);
 return VAR_8;
}
