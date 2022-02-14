
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vga16fb_par {scalar_t__ isVGA; } ;
struct TYPE_2__ {int grayscale; } ;
struct fb_info {TYPE_1__ var; struct vga16fb_par* par; } ;


 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
        unsigned VAR_3, unsigned VAR_4,
        struct fb_info *VAR_5)
{
 struct vga16fb_par *VAR_6 = VAR_5->par;
 int VAR_7;
 if (VAR_0 >= 256)
  return 1;

 VAR_7 = VAR_5->var.grayscale;

 if (VAR_7) {

  VAR_1 = VAR_2 = VAR_3 = (VAR_1 * 77 + VAR_2 * 151 + VAR_3 * 28) >> 8;
 }
 if (VAR_6->isVGA)
  FUNC_1(VAR_0,VAR_1,VAR_2,VAR_3);
 else
  FUNC_0(VAR_0,VAR_1,VAR_2,VAR_3);
 return 0;
}
