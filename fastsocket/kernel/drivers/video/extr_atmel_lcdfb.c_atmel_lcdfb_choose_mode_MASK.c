
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {int modelist; } ;


 struct fb_videomode* FUNC_0 (struct fb_videomode*,int *) ;
 int FUNC_1 (struct fb_videomode*,struct fb_var_screeninfo*) ;
 int FUNC_2 (struct fb_var_screeninfo*,struct fb_videomode const*) ;

__attribute__((used)) static const struct fb_videomode *FUNC_3(struct fb_var_screeninfo *VAR_0,
           struct fb_info *VAR_1)
{
 struct fb_videomode VAR_2;
 const struct fb_videomode *VAR_3 = ((void*)0);

 FUNC_1(&VAR_2, VAR_0);
 VAR_3 = FUNC_0(&VAR_2, &VAR_1->modelist);
 if (VAR_3)
  FUNC_2(VAR_0, VAR_3);
 return VAR_3;
}
