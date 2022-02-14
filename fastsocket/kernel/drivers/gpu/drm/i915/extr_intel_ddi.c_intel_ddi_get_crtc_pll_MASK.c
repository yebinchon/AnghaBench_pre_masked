
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum port { ____Placeholder_port } port ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static uint32_t FUNC_8(struct drm_i915_private *VAR_5,
           enum pipe VAR_6)
{
 uint32_t VAR_7, VAR_8;
 enum port VAR_9;
 enum transcoder VAR_10 = FUNC_5(VAR_5,
              VAR_6);
 int VAR_11;

 if (VAR_10 == VAR_3) {
  VAR_9 = VAR_0;
 } else {
  VAR_7 = FUNC_1(FUNC_3(VAR_10));
  VAR_7 &= VAR_4;

  for (VAR_11 = VAR_1; VAR_11 <= VAR_2; VAR_11++)
   if (VAR_7 == FUNC_4(VAR_11))
    VAR_9 = VAR_11;
 }

 VAR_8 = FUNC_1(FUNC_2(VAR_9));

 FUNC_0("Pipe %c connected to port %c using clock 0x%08x\n",
        FUNC_6(VAR_6), FUNC_7(VAR_9), VAR_8);

 return VAR_8;
}
