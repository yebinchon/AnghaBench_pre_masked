
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct fb_info* FUNC_1 (struct device*) ;
 int FUNC_2 (struct fb_info*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct fb_info *VAR_5 = FUNC_1(VAR_1);
 char *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_0();
 VAR_5->flags |= VAR_0;
 VAR_7 = FUNC_2(VAR_5, FUNC_4(VAR_3, &VAR_6, 0));
 VAR_5->flags &= ~VAR_0;
 FUNC_3();
 if (VAR_7 < 0)
  return VAR_7;
 return VAR_4;
}
