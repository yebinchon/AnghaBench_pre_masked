
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxafb_info {int (* backlight_power ) (int) ;} ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct pxafb_info *VAR_0, int VAR_1)
{
 FUNC_0("pxafb: backlight o%s\n", VAR_1 ? "n" : "ff");

 if (VAR_0->backlight_power)
  VAR_0->backlight_power(VAR_1);
}
