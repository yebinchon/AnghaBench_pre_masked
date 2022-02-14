
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vc_data {int vc_itcolor; int vc_ulcolor; int vc_hi_font_mask; int vc_can_do_color; TYPE_1__* vc_sw; } ;
typedef int a ;
struct TYPE_2__ {int (* con_build_attr ) (struct vc_data*,int,int,int,int,int,int) ;} ;


 int FUNC_0 (struct vc_data*,int,int,int,int,int,int) ;

__attribute__((used)) static u8 FUNC_1(struct vc_data *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3,
    u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 if (VAR_0->vc_sw->con_build_attr)
  return VAR_0->vc_sw->con_build_attr(VAR_0, VAR_1, VAR_2,
         VAR_3, VAR_4, VAR_5, VAR_6);
 {
 u8 VAR_7 = VAR_1;
 if (!VAR_0->vc_can_do_color)
  return VAR_2 |
         (VAR_6 ? 2 : 0) |
         (VAR_4 ? 4 : 0) |
         (VAR_5 ? 8 : 0) |
         (VAR_3 ? 0x80 : 0);
 if (VAR_6)
  VAR_7 = (VAR_7 & 0xF0) | VAR_0->vc_itcolor;
 else if (VAR_4)
  VAR_7 = (VAR_7 & 0xf0) | VAR_0->vc_ulcolor;
 else if (VAR_2 == 0)
  VAR_7 = (VAR_7 & 0xf0) | VAR_0->vc_ulcolor;
 if (VAR_5)
  VAR_7 = ((VAR_7) & 0x88) | ((((VAR_7) >> 4) | ((VAR_7) << 4)) & 0x77);
 if (VAR_3)
  VAR_7 ^= 0x80;
 if (VAR_2 == 2)
  VAR_7 ^= 0x08;
 if (VAR_0->vc_hi_font_mask == 0x100)
  VAR_7 <<= 1;
 return VAR_7;
 }



}
