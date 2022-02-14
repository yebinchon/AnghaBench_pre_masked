
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct usb_ov511*,int,unsigned char) ;
 unsigned char* VAR_4 ;
 unsigned char* VAR_5 ;

__attribute__((used)) static int
FUNC_2(struct usb_ov511 *VAR_6)
{
 unsigned char *VAR_7 = VAR_5;
 unsigned char *VAR_8 = VAR_4;
 unsigned char VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13 = VAR_3;

 FUNC_0(4, "Uploading quantization tables");

 for (VAR_11 = 0; VAR_11 < VAR_2 / 2; VAR_11++) {
  if (VAR_1) {
   VAR_9 = *VAR_7++;
   VAR_10 = *VAR_7++;
   VAR_9 &= 0x0f;
   VAR_10 &= 0x0f;
   VAR_9 |= VAR_10 << 4;
   VAR_12 = FUNC_1(VAR_6, VAR_13, VAR_9);
   if (VAR_12 < 0)
    return VAR_12;
  }

  if (VAR_0) {
   VAR_9 = *VAR_8++;
   VAR_10 = *VAR_8++;
   VAR_9 &= 0x0f;
   VAR_10 &= 0x0f;
   VAR_9 |= VAR_10 << 4;
   VAR_12 = FUNC_1(VAR_6, VAR_13 + VAR_2/2, VAR_9);
   if (VAR_12 < 0)
    return VAR_12;
  }

  VAR_13++;
 }

 return 0;
}
