
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device_descriptor {int idProduct; int idVendor; int bNumConfigurations; int bMaxPacketSize0; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bcdDevice; int bcdUSB; } ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int,int,int,int,...) ;

__attribute__((used)) static char *FUNC_3(char *VAR_2, char *VAR_3,
    const struct usb_device_descriptor *VAR_4)
{
 u16 VAR_5 = FUNC_1(VAR_4->bcdUSB);
 u16 VAR_6 = FUNC_1(VAR_4->bcdDevice);

 if (VAR_2 > VAR_3)
  return VAR_2;
 VAR_2 += FUNC_2(VAR_2, VAR_0,
     VAR_5 >> 8, VAR_5 & 0xff,
     VAR_4->bDeviceClass,
     FUNC_0(VAR_4->bDeviceClass),
     VAR_4->bDeviceSubClass,
     VAR_4->bDeviceProtocol,
     VAR_4->bMaxPacketSize0,
     VAR_4->bNumConfigurations);
 if (VAR_2 > VAR_3)
  return VAR_2;
 VAR_2 += FUNC_2(VAR_2, VAR_1,
    FUNC_1(VAR_4->idVendor),
    FUNC_1(VAR_4->idProduct),
    VAR_6 >> 8, VAR_6 & 0xff);
 return VAR_2;
}
