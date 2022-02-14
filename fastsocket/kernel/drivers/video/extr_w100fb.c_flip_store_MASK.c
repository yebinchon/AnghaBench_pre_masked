
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w100fb_par {int flip; } ;
struct fb_info {struct w100fb_par* par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct w100fb_par*) ;
 struct fb_info* FUNC_1 (struct device*) ;
 unsigned int FUNC_2 (char const*,int *,int) ;
 int FUNC_3 (struct w100fb_par*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0, struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4;
 struct fb_info *VAR_5 = FUNC_1(VAR_0);
 struct w100fb_par *VAR_6=VAR_5->par;

 VAR_4 = FUNC_2(VAR_2, ((void*)0), 10);

 if (VAR_4 > 0)
  VAR_6->flip = 1;
 else
  VAR_6->flip = 0;

 FUNC_4();
 FUNC_3(VAR_6);
 FUNC_5();

 FUNC_0(VAR_6);

 return VAR_3;
}
