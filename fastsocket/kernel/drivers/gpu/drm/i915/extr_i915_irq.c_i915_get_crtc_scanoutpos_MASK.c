
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef int drm_i915_private_t ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct drm_device*,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct drm_device *VAR_5, int VAR_6,
        int *VAR_7, int *VAR_8)
{
 drm_i915_private_t *VAR_9 = (drm_i915_private_t *) VAR_5->dev_private;
 u32 VAR_10 = 0, VAR_11 = 0;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 bool VAR_16 = 1;
 int VAR_17 = 0;
 enum transcoder VAR_18 = FUNC_9(VAR_9,
              VAR_6);

 if (!FUNC_8(VAR_5, VAR_6)) {
  FUNC_0("trying to get scanoutpos for disabled "
     "pipe %c\n", FUNC_10(VAR_6));
  return 0;
 }


 VAR_15 = 1 + ((FUNC_2(FUNC_7(VAR_18)) >> 16) & 0x1fff);

 if (FUNC_3(VAR_5)->gen >= 4) {



  VAR_11 = FUNC_2(FUNC_4(VAR_6));




  *VAR_7 = VAR_11 & 0x1fff;
  *VAR_8 = 0;
 } else {




  VAR_11 = (FUNC_2(FUNC_5(VAR_6)) & VAR_3) >> VAR_4;

  VAR_14 = 1 + ((FUNC_2(FUNC_1(VAR_18)) >> 16) & 0x1fff);
  *VAR_7 = VAR_11 / VAR_14;
  *VAR_8 = VAR_11 - (*VAR_7 * VAR_14);
 }


 VAR_10 = FUNC_2(FUNC_6(VAR_18));


 VAR_12 = VAR_10 & 0x1fff;
 VAR_13 = (VAR_10 >> 16) & 0x1fff;

 if ((*VAR_7 < VAR_12) || (*VAR_7 > VAR_13))
  VAR_16 = 0;


 if (VAR_16 && (*VAR_7 >= VAR_12))
  *VAR_7 = *VAR_7 - VAR_15;


 if (VAR_10 > 0)
  VAR_17 |= VAR_2 | VAR_0;


 if (VAR_16)
  VAR_17 |= VAR_1;

 return VAR_17;
}
