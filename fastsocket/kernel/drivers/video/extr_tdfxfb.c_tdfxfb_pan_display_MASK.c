
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tdfx_par {int dummy; } ;
struct fb_var_screeninfo {int yoffset; scalar_t__ xoffset; } ;
struct TYPE_2__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; struct tdfx_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tdfx_par*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct tdfx_par*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_3,
         struct fb_info *VAR_4)
{
 struct tdfx_par *VAR_5 = VAR_4->par;
 u32 VAR_6 = VAR_3->yoffset * VAR_4->fix.line_length;

 if (VAR_2 || VAR_3->xoffset)
  return -VAR_0;

 FUNC_0(VAR_5, 1);
 FUNC_1(VAR_5, VAR_1, VAR_6);

 return 0;
}
