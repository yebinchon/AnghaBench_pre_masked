
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vc_data {int vc_itcolor; int vc_ulcolor; int vc_halfcolor; } ;
typedef int attr ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct vc_data *VAR_1, u8 VAR_2, u8 VAR_3,
       u8 VAR_4, u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 u8 VAR_8 = VAR_2;

 if (VAR_0) {
  if (VAR_7)
   VAR_8 = (VAR_8 & 0xF0) | VAR_1->vc_itcolor;
  else if (VAR_5)
   VAR_8 = (VAR_8 & 0xf0) | VAR_1->vc_ulcolor;
  else if (VAR_3 == 0)
   VAR_8 = (VAR_8 & 0xf0) | VAR_1->vc_halfcolor;
 }
 if (VAR_6)
  VAR_8 =
      ((VAR_8) & 0x88) | ((((VAR_8) >> 4) | ((VAR_8) << 4)) &
           0x77);
 if (VAR_4)
  VAR_8 ^= 0x80;
 if (VAR_3 == 2)
  VAR_8 ^= 0x08;
 if (!VAR_0) {
  if (VAR_7)
   VAR_8 = (VAR_8 & 0xF8) | 0x02;
  else if (VAR_5)
   VAR_8 = (VAR_8 & 0xf8) | 0x01;
  else if (VAR_3 == 0)
   VAR_8 = (VAR_8 & 0xf0) | 0x08;
 }
 return VAR_8;
}
