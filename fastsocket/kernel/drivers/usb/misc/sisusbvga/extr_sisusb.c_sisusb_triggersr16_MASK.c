
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sisusb_usb_data {int dummy; } ;


 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct sisusb_usb_data *VAR_1, u8 VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_0(VAR_0, 0x16, &VAR_4);
 if (VAR_2 <= 1) {
  VAR_4 &= 0x3f;
  VAR_3 |= FUNC_1(VAR_0, 0x16, VAR_4);
  VAR_4 |= 0x80;
  VAR_3 |= FUNC_1(VAR_0, 0x16, VAR_4);
 } else {
  VAR_4 |= 0xc0;
  VAR_3 |= FUNC_1(VAR_0, 0x16, VAR_4);
  VAR_4 &= 0x0f;
  VAR_3 |= FUNC_1(VAR_0, 0x16, VAR_4);
  VAR_4 |= 0x80;
  VAR_3 |= FUNC_1(VAR_0, 0x16, VAR_4);
  VAR_4 &= 0x0f;
  VAR_3 |= FUNC_1(VAR_0, 0x16, VAR_4);
  VAR_4 |= 0xd0;
  VAR_3 |= FUNC_1(VAR_0, 0x16, VAR_4);
  VAR_4 &= 0x0f;
  VAR_3 |= FUNC_1(VAR_0, 0x16, VAR_4);
  VAR_4 |= 0xa0;
  VAR_3 |= FUNC_1(VAR_0, 0x16, VAR_4);
 }
 return VAR_3;
}
