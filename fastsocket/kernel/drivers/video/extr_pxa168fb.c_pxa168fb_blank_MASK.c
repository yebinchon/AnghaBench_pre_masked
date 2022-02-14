
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168fb_info {int is_blanked; } ;
struct fb_info {struct pxa168fb_info* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*) ;

__attribute__((used)) static int FUNC_1(int VAR_1, struct fb_info *VAR_2)
{
 struct pxa168fb_info *VAR_3 = VAR_2->par;

 VAR_3->is_blanked = (VAR_1 == VAR_0) ? 0 : 1;
 FUNC_0(VAR_2);

 return 0;
}
