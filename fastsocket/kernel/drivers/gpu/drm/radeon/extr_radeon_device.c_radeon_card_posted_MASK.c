
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_device {int num_crtc; scalar_t__ family; TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ subsystem_vendor; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_18 ;

bool FUNC_3(struct radeon_device *VAR_19)
{
 uint32_t VAR_20;

 if (VAR_18 && VAR_19->pdev->subsystem_vendor == VAR_12)
  return 0;


 if (FUNC_1(VAR_19)) {
  VAR_20 = FUNC_2(VAR_10 + VAR_4) |
   FUNC_2(VAR_10 + VAR_5);
   if (VAR_19->num_crtc >= 4) {
    VAR_20 |= FUNC_2(VAR_10 + VAR_6) |
     FUNC_2(VAR_10 + VAR_7);
   }
   if (VAR_19->num_crtc >= 6) {
    VAR_20 |= FUNC_2(VAR_10 + VAR_8) |
     FUNC_2(VAR_10 + VAR_9);
   }
  if (VAR_20 & VAR_11)
   return 1;
 } else if (FUNC_0(VAR_19)) {
  VAR_20 = FUNC_2(VAR_1) |
        FUNC_2(VAR_2);
  if (VAR_20 & VAR_0) {
   return 1;
  }
 } else {
  VAR_20 = FUNC_2(VAR_17) |
        FUNC_2(VAR_15);
  if (VAR_20 & VAR_16) {
   return 1;
  }
 }


 if (VAR_19->family >= VAR_3)
  VAR_20 = FUNC_2(VAR_13);
 else
  VAR_20 = FUNC_2(VAR_14);

 if (VAR_20)
  return 1;

 return 0;

}
