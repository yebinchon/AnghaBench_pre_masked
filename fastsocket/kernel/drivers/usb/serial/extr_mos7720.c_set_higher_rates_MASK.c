
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int number; struct usb_serial* serial; } ;
struct usb_serial {int minor; } ;
struct moschip_port {unsigned char shadowMCR; unsigned char shadowLCR; struct usb_serial_port* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_serial*,int ,int,int,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct moschip_port *VAR_5,
       unsigned int VAR_6)
{
 unsigned char VAR_7;
 struct usb_serial_port *VAR_8;
 struct usb_serial *VAR_9;
 int VAR_10;

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_8 = VAR_5->port;
 VAR_9 = VAR_8->serial;




 FUNC_0("Sending Setting Commands ..........");
 VAR_10 = VAR_8->number - VAR_8->serial->minor;

 VAR_7 = 0x000;
 FUNC_1(VAR_9, VAR_3, VAR_10, 0x01, &VAR_7);
 VAR_7 = 0x000;
 FUNC_1(VAR_9, VAR_3, VAR_10, 0x02, &VAR_7);
 VAR_7 = 0x0CF;
 FUNC_1(VAR_9, VAR_3, VAR_8->number, 0x02, &VAR_7);
 VAR_7 = 0x00b;
 VAR_5->shadowMCR = VAR_7;
 FUNC_1(VAR_9, VAR_3, VAR_10, 0x04, &VAR_7);
 VAR_7 = 0x00b;
 FUNC_1(VAR_9, VAR_3, VAR_10, 0x04, &VAR_7);

 VAR_7 = 0x000;
 FUNC_1(VAR_9, VAR_2, VAR_1, 0x08, &VAR_7);
 VAR_7 = 0x000;
 FUNC_1(VAR_9, VAR_3, VAR_1, 0x08, &VAR_7);






 VAR_7 = VAR_6 * 0x10;
 FUNC_1(VAR_9, VAR_3, VAR_1, VAR_10 + 1, &VAR_7);

 VAR_7 = 0x003;
 FUNC_1(VAR_9, VAR_2, VAR_1, 0x08, &VAR_7);
 VAR_7 = 0x003;
 FUNC_1(VAR_9, VAR_3, VAR_1, 0x08, &VAR_7);

 VAR_7 = 0x02b;
 VAR_5->shadowMCR = VAR_7;
 FUNC_1(VAR_9, VAR_3, VAR_10, 0x04, &VAR_7);
 VAR_7 = 0x02b;
 FUNC_1(VAR_9, VAR_3, VAR_10, 0x04, &VAR_7);





 VAR_7 = VAR_5->shadowLCR | VAR_4;
 VAR_5->shadowLCR = VAR_7;
 FUNC_1(VAR_9, VAR_3, VAR_10, 0x03, &VAR_7);

 VAR_7 = 0x001;
 FUNC_1(VAR_9, VAR_3, VAR_10, 0x00, &VAR_7);
 VAR_7 = 0x000;
 FUNC_1(VAR_9, VAR_3, VAR_10, 0x01, &VAR_7);

 VAR_7 = VAR_5->shadowLCR & ~VAR_4;
 VAR_5->shadowLCR = VAR_7;
 FUNC_1(VAR_9, VAR_3, VAR_10, 0x03, &VAR_7);

 return 0;
}
