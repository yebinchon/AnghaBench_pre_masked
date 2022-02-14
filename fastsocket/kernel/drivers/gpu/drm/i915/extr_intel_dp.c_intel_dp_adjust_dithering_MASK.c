
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dpcd; } ;
struct drm_display_mode {int private_flags; int clock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct intel_dp*) ;

__attribute__((used)) static bool
FUNC_5(struct intel_dp *VAR_1,
     struct drm_display_mode *VAR_2,
     bool VAR_3)
{
 int VAR_4 =
  FUNC_0(FUNC_4(VAR_1));
 int VAR_5 = FUNC_1(VAR_1->dpcd);
 int VAR_6, VAR_7;

 VAR_7 = FUNC_2(VAR_2->clock, 24);
 VAR_6 = FUNC_3(VAR_4, VAR_5);

 if (VAR_7 > VAR_6) {
  VAR_7 = FUNC_2(VAR_2->clock, 18);
  if (VAR_7 > VAR_6)
   return 0;

  if (VAR_3)
   VAR_2->private_flags
    |= VAR_0;

  return 1;
 }

 return 1;
}
