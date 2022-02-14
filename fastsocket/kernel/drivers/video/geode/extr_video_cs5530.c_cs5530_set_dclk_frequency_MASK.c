
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct geodefb_par {scalar_t__ vid_regs; } ;
struct TYPE_4__ {long pixclock; } ;
struct fb_info {TYPE_1__ var; struct geodefb_par* par; } ;
struct TYPE_5__ {int pll_value; long pixclock; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_2)
{
 struct geodefb_par *VAR_3 = VAR_2->par;
 int VAR_4;
 u32 VAR_5;
 long VAR_6, VAR_7;


 VAR_5 = VAR_1[0].pll_value;
 VAR_6 = VAR_1[0].pixclock - VAR_2->var.pixclock;
 if (VAR_6 < 0) VAR_6 = -VAR_6;
 for (VAR_4 = 1; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  VAR_7 = VAR_1[VAR_4].pixclock - VAR_2->var.pixclock;
  if (VAR_7 < 0L) VAR_7 = -VAR_7;
  if (VAR_7 < VAR_6) {
   VAR_6 = VAR_7;
   VAR_5 = VAR_1[VAR_4].pll_value;
  }
 }

 FUNC_2(VAR_5, VAR_3->vid_regs + VAR_0);
 FUNC_2(VAR_5 | 0x80000100, VAR_3->vid_regs + VAR_0);
 FUNC_1(500);
 FUNC_2(VAR_5 & 0x7FFFFFFF, VAR_3->vid_regs + VAR_0);
 FUNC_2(VAR_5 & 0x7FFFFEFF, VAR_3->vid_regs + VAR_0);
}
