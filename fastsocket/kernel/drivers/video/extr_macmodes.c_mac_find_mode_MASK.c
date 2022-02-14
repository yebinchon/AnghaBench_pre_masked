
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {int dummy; } ;


 unsigned int FUNC_0 (struct fb_videomode*) ;
 size_t VAR_0 ;
 int FUNC_1 (struct fb_var_screeninfo*,struct fb_info*,char const*,struct fb_videomode const*,unsigned int,struct fb_videomode*,unsigned int) ;
 struct fb_videomode* VAR_1 ;
 int FUNC_2 (char const*,char*,int) ;

int FUNC_3(struct fb_var_screeninfo *VAR_2, struct fb_info *VAR_3,
    const char *VAR_4, unsigned int VAR_5)
{
    const struct fb_videomode *VAR_6 = ((void*)0);
    unsigned int VAR_7 = 0;

    if (VAR_4 && !FUNC_2(VAR_4, "mac", 3)) {
 VAR_4 += 3;
 VAR_6 = VAR_1;
 VAR_7 = FUNC_0(VAR_1);
    }
    return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7,
   &VAR_1[VAR_0], VAR_5);
}
