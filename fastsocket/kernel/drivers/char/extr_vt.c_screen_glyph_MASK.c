
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int vc_hi_font_mask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vc_data*,int,int) ;

u16 FUNC_2(struct vc_data *VAR_0, int VAR_1)
{
 u16 VAR_2 = FUNC_0(FUNC_1(VAR_0, VAR_1, 1));
 u16 VAR_3 = VAR_2 & 0xff;

 if (VAR_2 & VAR_0->vc_hi_font_mask)
  VAR_3 |= 0x100;
 return VAR_3;
}
