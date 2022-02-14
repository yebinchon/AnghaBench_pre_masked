
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int num_crtc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (struct radeon_device*,int) ;
 scalar_t__ FUNC_2 (struct radeon_device*,int) ;

void FUNC_3(struct radeon_device *VAR_3, int VAR_4)
{
 unsigned VAR_5 = 0;

 if (VAR_4 >= VAR_3->num_crtc)
  return;

 if (!(FUNC_0(VAR_0 + VAR_2[VAR_4]) & VAR_1))
  return;




 while (FUNC_2(VAR_3, VAR_4)) {
  if (VAR_5++ % 100 == 0) {
   if (!FUNC_1(VAR_3, VAR_4))
    break;
  }
 }

 while (!FUNC_2(VAR_3, VAR_4)) {
  if (VAR_5++ % 100 == 0) {
   if (!FUNC_1(VAR_3, VAR_4))
    break;
  }
 }
}
