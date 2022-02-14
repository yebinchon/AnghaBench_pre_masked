
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int device; struct cirrusfb_info* par; } ;
struct cirrusfb_info {int regbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,unsigned char) ;

__attribute__((used)) static void FUNC_4(const struct fb_info *VAR_2, int VAR_3)
{
 struct cirrusfb_info *VAR_4 = VAR_2->par;
 unsigned char VAR_5, VAR_6;

 FUNC_0(VAR_4 != ((void*)0));
 VAR_5 = FUNC_2(VAR_4->regbase, VAR_1) & ~0x40;

 if (VAR_3) {
  FUNC_1(VAR_2->device, "Set %s as pixclock source.\n",
   (VAR_3 == 2) ? "MCLK/2" : "MCLK");
  VAR_5 |= 0x40;
  VAR_6 = FUNC_2(VAR_4->regbase, VAR_0) & ~0x1;
  if (VAR_3 == 2)
   VAR_6 |= 1;

  FUNC_3(VAR_4->regbase, VAR_0, VAR_6);
 }
 FUNC_3(VAR_4->regbase, VAR_1, VAR_5);
}
