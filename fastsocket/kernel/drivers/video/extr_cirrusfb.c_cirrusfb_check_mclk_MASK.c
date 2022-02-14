
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int device; struct cirrusfb_info* par; } ;
struct cirrusfb_info {int regbase; } ;


 int VAR_0 ;
 int FUNC_0 (long) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_1, long VAR_2)
{
 struct cirrusfb_info *VAR_3 = VAR_1->par;
 long VAR_4 = FUNC_2(VAR_3->regbase, VAR_0) & 0x3f;


 VAR_4 = (14318 * VAR_4) >> 3;
 FUNC_1(VAR_1->device, "Read MCLK of %ld kHz\n", VAR_4);





 if (FUNC_0(VAR_2 - VAR_4) < 250) {
  FUNC_1(VAR_1->device, "Using VCLK = MCLK\n");
  return 1;
 } else if (FUNC_0(VAR_2 - (VAR_4 / 2)) < 250) {
  FUNC_1(VAR_1->device, "Using VCLK = MCLK/2\n");
  return 2;
 }

 return 0;
}
