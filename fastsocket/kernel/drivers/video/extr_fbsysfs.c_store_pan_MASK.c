
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {void* yoffset; void* xoffset; } ;
struct fb_info {struct fb_var_screeninfo var; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct fb_info* FUNC_1 (struct device*) ;
 int FUNC_2 (struct fb_info*,struct fb_var_screeninfo*) ;
 int FUNC_3 () ;
 void* FUNC_4 (char const*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct fb_info *VAR_5 = FUNC_1(VAR_1);
 struct fb_var_screeninfo VAR_6;
 char *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_6 = VAR_5->var;
 VAR_6.xoffset = FUNC_4(VAR_3, &VAR_7, 0);
 VAR_7++;
 if (VAR_7 - VAR_3 >= VAR_4)
  return -VAR_0;
 VAR_6.yoffset = FUNC_4(VAR_7, &VAR_7, 0);

 FUNC_0();
 VAR_8 = FUNC_2(VAR_5, &VAR_6);
 FUNC_3();

 if (VAR_8 < 0)
  return VAR_8;
 return VAR_4;
}
