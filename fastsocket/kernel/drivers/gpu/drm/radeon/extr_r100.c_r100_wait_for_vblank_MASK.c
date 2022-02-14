
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int num_crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*,int) ;
 scalar_t__ FUNC_2 (struct radeon_device*,int) ;

void FUNC_3(struct radeon_device *VAR_4, int VAR_5)
{
 unsigned VAR_6 = 0;

 if (VAR_5 >= VAR_4->num_crtc)
  return;

 if (VAR_5 == 0) {
  if (!(FUNC_0(VAR_3) & VAR_2))
   return;
 } else {
  if (!(FUNC_0(VAR_1) & VAR_0))
   return;
 }




 while (FUNC_2(VAR_4, VAR_5)) {
  if (VAR_6++ % 100 == 0) {
   if (!FUNC_1(VAR_4, VAR_5))
    break;
  }
 }

 while (!FUNC_2(VAR_4, VAR_5)) {
  if (VAR_6++ % 100 == 0) {
   if (!FUNC_1(VAR_4, VAR_5))
    break;
  }
 }
}
