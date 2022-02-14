
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int program_bits; int locationAddr; } ;
union aty_pll {TYPE_1__ ics2595; } ;
typedef int u8 ;
typedef int u32 ;
struct fb_info {scalar_t__ par; } ;
struct atyfb_par {scalar_t__ clk_wr_offset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,struct atyfb_par*) ;
 int FUNC_1 (struct atyfb_par*) ;
 int FUNC_2 (scalar_t__,struct atyfb_par*) ;
 int FUNC_3 (scalar_t__,int,struct atyfb_par*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(const struct fb_info *VAR_5,
        const union aty_pll *VAR_6)
{
 struct atyfb_par *VAR_7 = (struct atyfb_par *) VAR_5->par;
 u32 VAR_8;
 u32 VAR_9;

 u32 VAR_10;

 u8 VAR_11;
 u8 VAR_12;

 VAR_11 = FUNC_2(VAR_0, VAR_7);
 FUNC_3(VAR_0 + VAR_7->clk_wr_offset, 0, VAR_7);

 VAR_12 = FUNC_2(VAR_3 + 3, VAR_7);
 FUNC_3(VAR_3 + 3,
   VAR_12 | (VAR_2 >> 24), VAR_7);

 FUNC_4(15);

 VAR_8 = VAR_6->ics2595.program_bits;
 VAR_9 = VAR_6->ics2595.locationAddr;


 FUNC_3(VAR_0 + VAR_7->clk_wr_offset, 0, VAR_7);
 FUNC_1(VAR_7);
 FUNC_3(VAR_0 + VAR_7->clk_wr_offset, 1, VAR_7);
 FUNC_1(VAR_7);

 FUNC_0(1, VAR_7);
 FUNC_0(0, VAR_7);
 FUNC_0(0, VAR_7);

 for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
  FUNC_0(VAR_9 & 1, VAR_7);
  VAR_9 >>= 1;
 }

 for (VAR_10 = 0; VAR_10 < 8 + 1 + 2 + 2; VAR_10++) {
  FUNC_0(VAR_8 & 1, VAR_7);
  VAR_8 >>= 1;
 }

 FUNC_4(1);

 (void) FUNC_2(VAR_4, VAR_7);
 FUNC_3(VAR_3 + 3, VAR_12, VAR_7);
 FUNC_3(VAR_0 + VAR_7->clk_wr_offset,
   VAR_11 | VAR_1, VAR_7);

 FUNC_4(50);
 FUNC_3(VAR_0 + VAR_7->clk_wr_offset,
   ((VAR_6->ics2595.locationAddr & 0x0F) | VAR_1), VAR_7);
 return;
}
