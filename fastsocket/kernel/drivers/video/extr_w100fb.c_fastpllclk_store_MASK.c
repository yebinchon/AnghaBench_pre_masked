
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w100fb_par {int fastpll_mode; } ;
struct fb_info {struct w100fb_par* par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct w100fb_par*) ;
 struct fb_info* FUNC_1 (struct device*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,int *,int) ;
 int FUNC_4 (struct w100fb_par*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct fb_info *VAR_4 = FUNC_1(VAR_0);
 struct w100fb_par *VAR_5=VAR_4->par;

 if (FUNC_3(VAR_2, ((void*)0), 10) > 0) {
  VAR_5->fastpll_mode=1;
  FUNC_2("w100fb: Using fast system clock (if possible)\n");
 } else {
  VAR_5->fastpll_mode=0;
  FUNC_2("w100fb: Using normal system clock\n");
 }

 FUNC_4(VAR_5);
 FUNC_0(VAR_5);

 return VAR_3;
}
