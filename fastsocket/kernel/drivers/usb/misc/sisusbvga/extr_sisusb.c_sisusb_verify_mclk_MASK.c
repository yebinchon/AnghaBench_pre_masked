
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sisusb_usb_data {int dummy; } ;


 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_6(struct sisusb_usb_data *VAR_2)
{
 int VAR_3 = 0;
 u32 VAR_4 = VAR_1;
 u8 VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_3 |= FUNC_5(VAR_4, 0xaa);
 VAR_3 |= FUNC_5(VAR_4 + 16, 0x55);
 VAR_3 |= FUNC_1(VAR_4, &VAR_5);
 VAR_3 |= FUNC_1(VAR_4 + 16, &VAR_6);
 if ((VAR_5 != 0xaa) || (VAR_6 != 0x55)) {
  for (VAR_7 = 0, VAR_8 = 16; VAR_7 < 2; VAR_7++, VAR_8 += 16) {
   VAR_3 |= FUNC_0(VAR_0, 0x21, &VAR_5);
   VAR_3 |= FUNC_3(VAR_0, 0x21, (VAR_5 & 0xfb));
   VAR_3 |= FUNC_4(VAR_0, 0x3c, 0x01);
   VAR_3 |= FUNC_3(VAR_0, 0x3c, 0xfe);
   VAR_3 |= FUNC_2(VAR_0, 0x21, VAR_5);
   VAR_3 |= FUNC_5(VAR_4 + 16 + VAR_8, VAR_8);
   VAR_3 |= FUNC_1(VAR_4 + 16 + VAR_8, &VAR_5);
   if (VAR_5 == VAR_8) {
    VAR_3 |= FUNC_5(VAR_4 + VAR_8, VAR_8);
    break;
   }
  }
 }
 return VAR_3;
}
