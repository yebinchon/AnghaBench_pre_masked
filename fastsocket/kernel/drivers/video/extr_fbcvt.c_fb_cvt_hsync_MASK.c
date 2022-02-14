
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_cvt_data {int flags; int htotal; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct fb_cvt_data *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->flags & VAR_1)
  VAR_3 = 32;
 else
  VAR_3 = (VAR_0 * VAR_2->htotal)/100;

 VAR_3 &= ~(VAR_0 - 1);
 return VAR_3;
}
