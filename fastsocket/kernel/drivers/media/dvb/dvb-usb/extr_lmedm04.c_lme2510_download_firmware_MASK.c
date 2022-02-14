
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct firmware {int size; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int,char*,int,int,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct usb_device*,int*,int,int) ;
 int FUNC_4 (struct usb_device*,int*,int,int) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct usb_device*,int ,int,int,int,int,int*,int,int) ;
 int FUNC_8 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct usb_device *VAR_1,
     const struct firmware *VAR_2)
{
 int VAR_3 = 0;
 u8 VAR_4[512] = {0};
 u16 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 u8 VAR_10, VAR_11, VAR_12;
 u8 *VAR_13;

 VAR_10 = 0x31;
 VAR_7 = 1;


 FUNC_2("FRM Starting Firmware Download");

 for (VAR_12 = 1; VAR_12 < 3; VAR_12++) {
  VAR_8 = (VAR_12 == 1) ? 0 : 512;
  VAR_9 = (VAR_12 == 1) ? 512 : VAR_2->size;
  for (VAR_5 = VAR_8; VAR_5 < VAR_9; VAR_5 += (VAR_10+1)) {
   VAR_13 = (u8 *)(VAR_2->data + VAR_5);
   if ((VAR_9 - VAR_5) > VAR_10) {
    VAR_4[0] = VAR_12;
    VAR_11 = VAR_10;
   } else {
    VAR_4[0] = VAR_12 | 0x80;
    VAR_11 = (u8)(VAR_9 - VAR_5)-1;
   }
  VAR_4[1] = VAR_11;
  FUNC_5(&VAR_4[2], VAR_13, VAR_11+1);
  VAR_6 = (u8) VAR_11 + 4;
  VAR_4[VAR_6-1] = FUNC_0(VAR_13, VAR_11+1);
  FUNC_1(1, "Data S=%02x:E=%02x CS= %02x", VAR_4[3],
    VAR_4[VAR_11+2], VAR_4[VAR_11+3]);
  VAR_3 |= FUNC_4(VAR_1, VAR_4, VAR_6, 1);
  VAR_3 |= FUNC_3(VAR_1, VAR_4, VAR_7 , 1);
  VAR_3 |= (VAR_4[0] == 0x88) ? 0 : -1;
  }
 }

 FUNC_7(VAR_1, FUNC_8(VAR_1, 0),
   0x06, 0x80, 0x0200, 0x00, VAR_4, 0x0109, 1000);


 VAR_4[0] = 0x8a;
 VAR_7 = 1;
 FUNC_6(2000);
 VAR_3 |= FUNC_4(VAR_1, VAR_4 , VAR_7, 1);
 VAR_3 |= FUNC_3(VAR_1, VAR_4, VAR_7, 1);
 FUNC_6(400);

 if (VAR_3 < 0)
  FUNC_2("FRM Firmware Download Failed (%04x)" , VAR_3);
 else
  FUNC_2("FRM Firmware Download Completed - Resetting Device");


 return (VAR_3 < 0) ? -VAR_0 : 0;
}
