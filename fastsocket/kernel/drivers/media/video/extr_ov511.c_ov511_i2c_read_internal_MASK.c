
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,unsigned char,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct usb_ov511*,int ) ;
 int FUNC_3 (struct usb_ov511*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct usb_ov511 *VAR_4, unsigned char VAR_5)
{
 int VAR_6, VAR_7, VAR_8;


 for (VAR_8 = VAR_0; ; ) {

  VAR_6 = FUNC_3(VAR_4, VAR_3, VAR_5);
  if (VAR_6 < 0)
   return VAR_6;


  VAR_6 = FUNC_3(VAR_4, VAR_1, 0x03);
  if (VAR_6 < 0)
   return VAR_6;


  do {
   VAR_6 = FUNC_2(VAR_4, VAR_1);
  } while (VAR_6 > 0 && ((VAR_6 & 1) == 0));
  if (VAR_6 < 0)
   return VAR_6;

  if ((VAR_6&2) == 0)
   break;


  FUNC_3(VAR_4, VAR_1, 0x10);

  if (--VAR_8 < 0) {
   FUNC_1("i2c write retries exhausted");
   return -1;
  }
 }


 for (VAR_8 = VAR_0; ; ) {

  VAR_6 = FUNC_3(VAR_4, VAR_1, 0x05);
  if (VAR_6 < 0)
   return VAR_6;


  do {
   VAR_6 = FUNC_2(VAR_4, VAR_1);
  } while (VAR_6 > 0 && ((VAR_6&1) == 0));
  if (VAR_6 < 0)
   return VAR_6;

  if ((VAR_6&2) == 0)
   break;


  VAR_6 = FUNC_3(VAR_4, VAR_1, 0x10);
  if (VAR_6 < 0)
   return VAR_6;

  if (--VAR_8 < 0) {
   FUNC_1("i2c read retries exhausted");
   return -1;
  }
 }

 VAR_7 = FUNC_2(VAR_4, VAR_2);

 FUNC_0(5, "0x%02X:0x%02X", VAR_5, VAR_7);


 VAR_6 = FUNC_3(VAR_4, VAR_1, 0x05);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_7;
}
