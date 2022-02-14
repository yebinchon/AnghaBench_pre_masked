
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vga16fb_par {int ref_count; int state; } ;
struct fb_info {struct vga16fb_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_1, int VAR_2)
{
 struct vga16fb_par *VAR_3 = VAR_1->par;

 if (!VAR_3->ref_count)
  return -VAR_0;

 if (VAR_3->ref_count == 1)
  FUNC_0(&VAR_3->state);
 VAR_3->ref_count--;

 return 0;
}
