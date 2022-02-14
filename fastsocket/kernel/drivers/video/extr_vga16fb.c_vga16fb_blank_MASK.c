
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vga16fb_par {int vesa_blanked; int palette_blanked; } ;
struct fb_info {struct vga16fb_par* par; } ;




 int FUNC_0 () ;
 int FUNC_1 (struct vga16fb_par*,int) ;
 int FUNC_2 (struct vga16fb_par*) ;

__attribute__((used)) static int FUNC_3(int VAR_0, struct fb_info *VAR_1)
{
 struct vga16fb_par *VAR_2 = VAR_1->par;

 switch (VAR_0) {
 case 128:
  if (VAR_2->vesa_blanked) {
   FUNC_2(VAR_2);
   VAR_2->vesa_blanked = 0;
  }
  if (VAR_2->palette_blanked) {
   VAR_2->palette_blanked = 0;
  }
  break;
 case 129:
  FUNC_0();
  VAR_2->palette_blanked = 1;
  break;
 default:
  FUNC_1(VAR_2, VAR_0);
  VAR_2->vesa_blanked = 1;
  break;
 }
 return 0;
}
