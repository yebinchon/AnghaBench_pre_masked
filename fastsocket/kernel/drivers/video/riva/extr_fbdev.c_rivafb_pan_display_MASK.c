
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* SetStartAddress ) (TYPE_2__*,unsigned int) ;} ;
struct riva_par {TYPE_2__ riva; } ;
struct fb_var_screeninfo {unsigned int yoffset; unsigned int xoffset; } ;
struct TYPE_3__ {unsigned int line_length; } ;
struct fb_info {TYPE_1__ fix; struct riva_par* par; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_0,
         struct fb_info *VAR_1)
{
 struct riva_par *VAR_2 = VAR_1->par;
 unsigned int VAR_3;

 FUNC_0();
 VAR_3 = VAR_0->yoffset * VAR_1->fix.line_length + VAR_0->xoffset;
 VAR_2->riva.SetStartAddress(&VAR_2->riva, VAR_3);
 FUNC_1();
 return 0;
}
