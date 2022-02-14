
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct atyfb_par {scalar_t__ clk_wr_offset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct atyfb_par const*) ;
 int FUNC_1 (scalar_t__,struct atyfb_par const*) ;
 int FUNC_2 (scalar_t__,int,struct atyfb_par const*) ;

__attribute__((used)) static void FUNC_3(u8 VAR_1, const struct atyfb_par *VAR_2)
{
 u8 VAR_3;

 VAR_1 &= 0x01;
 VAR_3 = FUNC_1(VAR_0, VAR_2);
 FUNC_2(VAR_0 + VAR_2->clk_wr_offset,
   (VAR_3 & ~0x04) | (VAR_1 << 2), VAR_2);

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 FUNC_2(VAR_0 + VAR_2->clk_wr_offset, (VAR_3 & ~0x08) | (0 << 3),
   VAR_2);

 FUNC_0(VAR_2);

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 FUNC_2(VAR_0 + VAR_2->clk_wr_offset, (VAR_3 & ~0x08) | (1 << 3),
   VAR_2);

 FUNC_0(VAR_2);
 return;
}
