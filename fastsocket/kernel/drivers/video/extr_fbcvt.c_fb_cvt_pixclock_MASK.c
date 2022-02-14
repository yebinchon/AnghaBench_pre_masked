
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_cvt_data {int flags; int f_refresh; int vtotal; int htotal; int hperiod; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct fb_cvt_data *VAR_1)
{
 u32 VAR_2;

 if (VAR_1->flags & VAR_0)
  VAR_2 = (VAR_1->f_refresh * VAR_1->vtotal * VAR_1->htotal)/1000;
 else
  VAR_2 = (VAR_1->htotal * 1000000)/VAR_1->hperiod;

 VAR_2 /= 250;
 VAR_2 *= 250;
 VAR_2 *= 1000;

 return VAR_2;
}
