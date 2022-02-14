
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa168fb_info {int pix_fmt; int panel_rbswap; scalar_t__ reg_base; scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct pxa168fb_info *VAR_2)
{
 u32 VAR_3;




 VAR_3 = FUNC_0(VAR_2->reg_base + VAR_0);
 VAR_3 |= VAR_2->active ? 0x00000100 : 0;
 VAR_2->active = 0;





 if (VAR_2->pix_fmt == VAR_1)
  VAR_3 |= 0x10000000;




 VAR_3 &= ~(0xF << 16);
 VAR_3 |= (VAR_2->pix_fmt >> 1) << 16;






 VAR_3 &= ~(1 << 12);
 VAR_3 |= ((VAR_2->pix_fmt & 1) ^ (VAR_2->panel_rbswap)) << 12;

 FUNC_1(VAR_3, VAR_2->reg_base + VAR_0);
}
