
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_stv {int udev; } ;


 int FUNC_0 (int,char*,int,unsigned short,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,unsigned short,int,unsigned short,int ,unsigned char*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4 (int VAR_6, struct usb_stv *VAR_7, unsigned short VAR_8, unsigned short VAR_9, unsigned char *VAR_10, int VAR_11)
{
 int VAR_12 = -1;

 switch (VAR_6) {
 case 0:
  VAR_12 = FUNC_1 (VAR_7->udev,
           FUNC_2 (VAR_7->udev, 0),
           VAR_8,
           (VAR_1 | VAR_5 | VAR_4),
           VAR_9, 0, VAR_10, VAR_11, VAR_0);
  break;

 case 1:
  VAR_12 = FUNC_1 (VAR_7->udev,
           FUNC_3 (VAR_7->udev, 0),
           VAR_8,
           (VAR_2 | VAR_5 | VAR_4),
           VAR_9, 0, VAR_10, VAR_11, VAR_0);
  break;

 case 2:
  VAR_12 = FUNC_1 (VAR_7->udev,
           FUNC_2 (VAR_7->udev, 0),
           VAR_8,
           (VAR_1 | VAR_3),
           VAR_9, 0, VAR_10, VAR_11, VAR_0);
  break;

 case 3:
  VAR_12 = FUNC_1 (VAR_7->udev,
           FUNC_3 (VAR_7->udev, 0),
           VAR_8,
           (VAR_2 | VAR_5 | VAR_3),
           VAR_9, 0, VAR_10, VAR_11, VAR_0);
  break;

 }
 if ((VAR_12 < 0) && (VAR_8 != 0x0a)) {
  FUNC_0 (1, "STV(e): usb_control_msg error %i, request = 0x%x, error = %i", VAR_6, VAR_8, VAR_12);
 }
 return VAR_12;
}
