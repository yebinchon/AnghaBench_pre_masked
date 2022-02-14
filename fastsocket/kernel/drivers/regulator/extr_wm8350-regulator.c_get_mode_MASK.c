
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_dcdc_efficiency {int uA_load_min; int uA_load_max; unsigned int mode; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(int VAR_1, const struct wm8350_dcdc_efficiency *VAR_2)
{
 int VAR_3 = 0;

 while (VAR_2[VAR_3].uA_load_min != -1) {
  if (VAR_1 >= VAR_2[VAR_3].uA_load_min && VAR_1 <= VAR_2[VAR_3].uA_load_max)
   return VAR_2[VAR_3].mode;
 }
 return VAR_0;
}
