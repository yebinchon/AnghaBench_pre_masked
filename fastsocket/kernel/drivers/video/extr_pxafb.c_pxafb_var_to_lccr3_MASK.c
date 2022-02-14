
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int length; } ;
struct fb_var_screeninfo {TYPE_1__ transp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fb_var_screeninfo*) ;
 int FUNC_2 (struct fb_var_screeninfo*) ;

__attribute__((used)) static uint32_t FUNC_3(struct fb_var_screeninfo *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3);
 uint32_t VAR_5;

 if (VAR_4 < 0)
  return 0;

 VAR_5 = FUNC_0(VAR_4);

 switch (FUNC_2(VAR_3)) {
 case 16: VAR_5 |= VAR_3->transp.length ? VAR_2 : 0; break;
 case 18: VAR_5 |= VAR_2; break;
 case 24: VAR_5 |= VAR_3->transp.length ? VAR_1 : VAR_2;
   break;
 case 19:
 case 25: VAR_5 |= VAR_0; break;
 }
 return VAR_5;
}
