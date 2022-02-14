
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active_crtcs; } ;
struct radeon_device {int num_crtc; int ddev; TYPE_1__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int*,int*) ;

__attribute__((used)) static bool FUNC_1(struct radeon_device *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 bool VAR_7 = 1;




 for (VAR_3 = 0; (VAR_3 < VAR_2->num_crtc) && VAR_7; VAR_3++) {
  if (VAR_2->pm.active_crtcs & (1 << VAR_3)) {
   VAR_6 = FUNC_0(VAR_2->ddev, VAR_3, &VAR_4, &VAR_5);
   if ((VAR_6 & VAR_1) &&
       !(VAR_6 & VAR_0))
    VAR_7 = 0;
  }
 }

 return VAR_7;
}
