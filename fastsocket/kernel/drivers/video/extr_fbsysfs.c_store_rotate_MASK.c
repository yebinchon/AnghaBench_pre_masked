
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int rotate; } ;
struct fb_info {struct fb_var_screeninfo var; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct fb_info*,struct fb_var_screeninfo*) ;
 struct fb_info* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
       struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct fb_info *VAR_4 = FUNC_1(VAR_0);
 struct fb_var_screeninfo VAR_5;
 char **VAR_6 = ((void*)0);
 int VAR_7;

 VAR_5 = VAR_4->var;
 VAR_5.rotate = FUNC_2(VAR_2, VAR_6, 0);

 if ((VAR_7 = FUNC_0(VAR_4, &VAR_5)))
  return VAR_7;

 return VAR_3;
}
