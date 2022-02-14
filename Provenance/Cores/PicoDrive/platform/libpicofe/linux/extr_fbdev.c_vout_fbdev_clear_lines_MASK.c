
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xres_virtual; int bits_per_pixel; int yres; } ;
struct vout_fbdev {int top_border; int buffer_count; int fb_size; scalar_t__ mem; TYPE_1__ fbvar_new; } ;


 int FUNC_0 (char*,int ,int) ;

void FUNC_1(struct vout_fbdev *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->fbvar_new.xres_virtual * VAR_0->fbvar_new.bits_per_pixel / 8;
 int VAR_4;

 if (VAR_1 + VAR_2 > VAR_0->top_border + VAR_0->fbvar_new.yres)
  VAR_2 = VAR_0->top_border + VAR_0->fbvar_new.yres - VAR_1;

 if (VAR_1 >= 0 && VAR_2 > 0)
  for (VAR_4 = 0; VAR_4 < VAR_0->buffer_count; VAR_4++)
   FUNC_0((char *)VAR_0->mem + VAR_0->fb_size * VAR_4 + VAR_1 * VAR_3, 0, VAR_3 * VAR_2);
}
