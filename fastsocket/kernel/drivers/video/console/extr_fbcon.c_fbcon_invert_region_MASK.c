
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int vc_hi_font_mask; scalar_t__ vc_origin; int vc_can_do_color; } ;
typedef int a ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_3, u16 * VAR_4, int VAR_5)
{
 while (VAR_5--) {
  u16 VAR_6 = FUNC_0(VAR_4);
  if (!VAR_3->vc_can_do_color)
   VAR_6 ^= 0x0800;
  else if (VAR_3->vc_hi_font_mask == 0x100)
   VAR_6 = ((VAR_6) & 0x11ff) | (((VAR_6) & 0xe000) >> 4) |
       (((VAR_6) & 0x0e00) << 4);
  else
   VAR_6 = ((VAR_6) & 0x88ff) | (((VAR_6) & 0x7000) >> 4) |
       (((VAR_6) & 0x0700) << 4);
  FUNC_1(VAR_6, VAR_4++);
  if (VAR_4 == (u16 *) VAR_1)
   VAR_4 = (u16 *) VAR_0;
  if (VAR_4 == (u16 *) VAR_2)
   VAR_4 = (u16 *) VAR_3->vc_origin;
 }
}
