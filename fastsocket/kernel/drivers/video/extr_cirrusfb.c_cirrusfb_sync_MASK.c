
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct cirrusfb_info* par; } ;
struct cirrusfb_info {int regbase; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct cirrusfb_info*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_1)
{
 struct cirrusfb_info *VAR_2 = VAR_1->par;

 if (!FUNC_1(VAR_2)) {
  while (FUNC_2(VAR_2->regbase, VAR_0) & 0x03)
   FUNC_0();
 }
 return 0;
}
