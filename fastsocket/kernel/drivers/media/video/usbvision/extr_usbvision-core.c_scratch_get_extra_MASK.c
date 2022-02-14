
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {scalar_t__ scratch; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (unsigned char*,scalar_t__,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct usb_usbvision *VAR_2,
        unsigned char *VAR_3, int *VAR_4, int VAR_5)
{
 int VAR_6;

 if (*VAR_4 + VAR_5 < VAR_1) {
  FUNC_1(VAR_3, VAR_2->scratch + *VAR_4, VAR_5);
  *VAR_4 += VAR_5;
 } else {
  VAR_6 = VAR_1 - *VAR_4;
  FUNC_1(VAR_3, VAR_2->scratch + *VAR_4, VAR_6);
  if (VAR_5 == VAR_6) {
   *VAR_4 = 0;
  } else {
   FUNC_1(VAR_3 + VAR_6, VAR_2->scratch, VAR_5 - VAR_6);
   *VAR_4 = VAR_5 - VAR_6;
  }
 }

 FUNC_0(VAR_0, "len=%d, new ptr=%d\n", VAR_5, *VAR_4);

 return VAR_5;
}
