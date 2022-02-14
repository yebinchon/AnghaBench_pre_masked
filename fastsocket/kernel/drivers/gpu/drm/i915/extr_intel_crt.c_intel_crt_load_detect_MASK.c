
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int crtc; struct drm_device* dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct intel_crt {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_6__ {int pipe; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int) ;
 int VAR_0 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_1 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (struct drm_device*,int) ;
 TYPE_3__* FUNC_13 (int ) ;

__attribute__((used)) static enum drm_connector_status
FUNC_14(struct intel_crt *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->base.base.dev;
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 uint32_t VAR_7 = FUNC_13(VAR_4->base.base.crtc)->pipe;
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10, VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;
 uint32_t VAR_19;
 uint32_t VAR_20;
 uint32_t VAR_21;
 uint32_t VAR_22;
 uint8_t VAR_23;
 enum drm_connector_status VAR_24;

 FUNC_1("starting load-detect on CRT\n");

 VAR_17 = FUNC_0(VAR_7);
 VAR_18 = FUNC_11(VAR_7);
 VAR_19 = FUNC_9(VAR_7);
 VAR_20 = FUNC_10(VAR_7);
 VAR_21 = FUNC_6(VAR_7);
 VAR_22 = FUNC_7(VAR_7);

 VAR_8 = FUNC_2(VAR_17);
 VAR_9 = FUNC_2(VAR_18);
 VAR_13 = FUNC_2(VAR_19);

 VAR_10 = ((VAR_9 >> 16) & 0xfff) + 1;
 VAR_11 = (VAR_9 & 0x7ff) + 1;

 VAR_14 = (VAR_13 & 0xfff) + 1;
 VAR_15 = ((VAR_13 >> 16) & 0xfff) + 1;


 FUNC_4(VAR_17, 0x500050);

 if (!FUNC_5(VAR_5)) {
  uint32_t VAR_25 = FUNC_2(VAR_21);
  FUNC_4(VAR_21, VAR_25 | VAR_0);
  FUNC_8(VAR_21);


  FUNC_12(VAR_5, VAR_7);
  VAR_23 = FUNC_3(VAR_1);
  VAR_24 = ((VAR_23 & (1 << 4)) != 0) ?
   VAR_2 :
   VAR_3;

  FUNC_4(VAR_21, VAR_25);
 } else {
  bool VAR_26 = 0;
  int VAR_27, VAR_28;





  if (VAR_14 <= VAR_11 && VAR_15 >= VAR_10) {
   uint32_t VAR_29 = FUNC_2(VAR_20);
   uint32_t VAR_30 = (VAR_29 & 0xffff) + 1;

   VAR_14 = VAR_30;
   FUNC_4(VAR_19,
       (VAR_14 - 1) |
       ((VAR_15 - 1) << 16));
   VAR_26 = 1;
  }

  if (VAR_14 - VAR_11 >= VAR_10 - VAR_15)
   VAR_12 = (VAR_14 + VAR_11) >> 1;
  else
   VAR_12 = (VAR_10 + VAR_15) >> 1;




  while (FUNC_2(VAR_22) >= VAR_11)
   ;
  while ((VAR_16 = FUNC_2(VAR_22)) <= VAR_12)
   ;



  VAR_28 = 0;
  VAR_27 = 0;
  do {
   VAR_27++;

   VAR_23 = FUNC_3(VAR_1);
   if (VAR_23 & (1 << 4))
    VAR_28++;
  } while ((FUNC_2(VAR_22) == VAR_16));


  if (VAR_26)
   FUNC_4(VAR_19, VAR_13);






  VAR_24 = VAR_28 * 4 > VAR_27 * 3 ?
    VAR_2 :
    VAR_3;
 }


 FUNC_4(VAR_17, VAR_8);

 return VAR_24;
}
