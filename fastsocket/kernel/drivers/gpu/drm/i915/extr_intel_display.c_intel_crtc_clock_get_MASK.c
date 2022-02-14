
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_3__ {int m1; int n; int m2; int p1; int p2; int dot; } ;
typedef TYPE_1__ intel_clock_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* FUNC_7 (int) ;
 int FUNC_8 (struct drm_device*,int,TYPE_1__*) ;
 struct intel_crtc* FUNC_9 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_24, struct drm_crtc *VAR_25)
{
 struct drm_i915_private *VAR_26 = VAR_24->dev_private;
 struct intel_crtc *VAR_27 = FUNC_9(VAR_25);
 int VAR_28 = VAR_27->pipe;
 u32 VAR_29 = FUNC_4(FUNC_0(VAR_28));
 u32 VAR_30;
 intel_clock_t VAR_31;

 if ((VAR_29 & VAR_0) == 0)
  VAR_30 = FUNC_4(FUNC_2(VAR_28));
 else
  VAR_30 = FUNC_4(FUNC_3(VAR_28));

 VAR_31.m1 = (VAR_30 & VAR_10) >> VAR_11;
 if (FUNC_6(VAR_24)) {
  VAR_31.n = FUNC_7((VAR_30 & VAR_17) >> VAR_16) - 1;
  VAR_31.m2 = (VAR_30 & VAR_14) >> VAR_13;
 } else {
  VAR_31.n = (VAR_30 & VAR_15) >> VAR_16;
  VAR_31.m2 = (VAR_30 & VAR_12) >> VAR_13;
 }

 if (!FUNC_5(VAR_24)) {
  if (FUNC_6(VAR_24))
   VAR_31.p1 = FUNC_7((VAR_29 & VAR_6) >>
    VAR_8);
  else
   VAR_31.p1 = FUNC_7((VAR_29 & VAR_3) >>
          VAR_7);

  switch (VAR_29 & VAR_9) {
  case 129:
   VAR_31.p2 = VAR_29 & VAR_2 ?
    5 : 10;
   break;
  case 128:
   VAR_31.p2 = VAR_29 & VAR_1 ?
    7 : 14;
   break;
  default:
   FUNC_1("Unknown DPLL mode %08x in programmed "
      "mode\n", (int)(VAR_29 & VAR_9));
   return 0;
  }


  FUNC_8(VAR_24, 96000, &VAR_31);
 } else {
  bool VAR_32 = (VAR_28 == 1) && (FUNC_4(VAR_18) & VAR_19);

  if (VAR_32) {
   VAR_31.p1 = FUNC_7((VAR_29 & VAR_5) >>
           VAR_7);
   VAR_31.p2 = 14;

   if ((VAR_29 & VAR_23) ==
       VAR_20) {

    FUNC_8(VAR_24, 66000, &VAR_31);
   } else
    FUNC_8(VAR_24, 48000, &VAR_31);
  } else {
   if (VAR_29 & VAR_21)
    VAR_31.p1 = 2;
   else {
    VAR_31.p1 = ((VAR_29 & VAR_4) >>
         VAR_7) + 2;
   }
   if (VAR_29 & VAR_22)
    VAR_31.p2 = 4;
   else
    VAR_31.p2 = 2;

   FUNC_8(VAR_24, 48000, &VAR_31);
  }
 }






 return VAR_31.dot;
}
