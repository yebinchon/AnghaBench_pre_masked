
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
struct atyfb_par {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct atyfb_par*) ;
 int FUNC_1 (scalar_t__,struct atyfb_par*) ;
 int FUNC_2 (scalar_t__,char,struct atyfb_par*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(const struct fb_info *VAR_3,
       const union aty_pll *VAR_4)
{
 struct atyfb_par *VAR_5 = (struct atyfb_par *) VAR_3->par;
 u32 VAR_6;
 u32 VAR_7;

 u8 VAR_8, VAR_9, VAR_10;
 char VAR_11;

 VAR_11 = FUNC_1(VAR_1 + 3, VAR_5);
 FUNC_2(VAR_1 + 3,
   VAR_11 | (VAR_0 >> 24), VAR_5);

 VAR_6 = VAR_4->ics2595.program_bits;
 VAR_7 = VAR_4->ics2595.locationAddr;


 FUNC_0(VAR_5);
 VAR_9 = FUNC_1(VAR_2 + 2, VAR_5) | 1;
 FUNC_0(VAR_5);
 FUNC_2(VAR_2 + 2, VAR_9, VAR_5);

 VAR_8 = VAR_9;
 VAR_10 = VAR_8;
 VAR_8 |= 8;
 VAR_9 = 1;

 FUNC_2(VAR_2, VAR_9, VAR_5);
 FUNC_2(VAR_2 + 2, VAR_8, VAR_5);

 FUNC_3(400);

 VAR_7 = (VAR_7 << 2) + 0x40;
 VAR_9 = VAR_7;
 VAR_8 = VAR_6 >> 8;

 FUNC_2(VAR_2, VAR_9, VAR_5);
 FUNC_2(VAR_2 + 2, VAR_8, VAR_5);

 VAR_9 = VAR_7 + 1;
 VAR_8 = (u8) VAR_6;

 FUNC_2(VAR_2, VAR_9, VAR_5);
 FUNC_2(VAR_2 + 2, VAR_8, VAR_5);

 VAR_9 = VAR_7 + 2;
 VAR_8 = 0x77;

 FUNC_2(VAR_2, VAR_9, VAR_5);
 FUNC_2(VAR_2 + 2, VAR_8, VAR_5);

 FUNC_3(400);
 VAR_8 = VAR_10 & (~(1 | 8));
 VAR_9 = 1;

 FUNC_2(VAR_2, VAR_9, VAR_5);
 FUNC_2(VAR_2 + 2, VAR_8, VAR_5);

 (void) FUNC_1(VAR_2, VAR_5);
 FUNC_2(VAR_1 + 3, VAR_11, VAR_5);
 return;
}
