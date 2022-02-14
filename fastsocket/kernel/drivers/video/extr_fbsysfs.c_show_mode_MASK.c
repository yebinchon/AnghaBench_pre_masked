
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct fb_info* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct fb_info *VAR_3 = FUNC_0(VAR_0);

 if (!VAR_3->mode)
  return 0;

 return FUNC_1(VAR_2, 0, VAR_3->mode);
}
