
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int period_in_ps; } ;
union aty_pll {TYPE_1__ ics2595; } ;
typedef int u32 ;
struct fb_info {scalar_t__ par; } ;
struct atyfb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct atyfb_par*) ;
 int FUNC_1 (scalar_t__,int,struct atyfb_par*) ;
 int FUNC_2 (int ,int,struct atyfb_par*) ;

__attribute__((used)) static int FUNC_3(const struct fb_info *VAR_3,
     const union aty_pll *VAR_4, u32 VAR_5,
     u32 VAR_6)
{
 struct atyfb_par *VAR_7 = (struct atyfb_par *) VAR_3->par;
 u32 VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;

 VAR_8 = 100000000 / VAR_4->ics2595.period_in_ps;

 switch (VAR_5) {
 case 8:
  if (VAR_8 > 8000) {
   VAR_10 = 0x24;
   VAR_9 = 1;
  } else
   VAR_10 = 0x04;
  break;
 case 15:
  VAR_10 = 0x16;
  break;
 case 16:
  VAR_10 = 0x36;
  break;
 case 24:
  VAR_10 = 0xE6;
  break;
 case 32:
  VAR_10 = 0xE6;
  break;
 }

 if (1 )
  VAR_10 |= 0x02;

 FUNC_0(VAR_7);
 FUNC_1(VAR_2 + 2, VAR_10, VAR_7);

 FUNC_2(VAR_0, 0x890e20f1, VAR_7);
 FUNC_2(VAR_1, 0x00072000, VAR_7);
 return VAR_9;
}
