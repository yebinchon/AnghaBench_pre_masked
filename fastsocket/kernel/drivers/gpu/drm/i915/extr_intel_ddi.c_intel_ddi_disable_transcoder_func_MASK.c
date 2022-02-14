
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(struct drm_i915_private *VAR_3,
           enum transcoder VAR_4)
{
 uint32_t VAR_5 = FUNC_2(VAR_4);
 uint32_t VAR_6 = FUNC_0(VAR_5);

 VAR_6 &= ~(VAR_0 | VAR_1);
 VAR_6 |= VAR_2;
 FUNC_1(VAR_5, VAR_6);
}
