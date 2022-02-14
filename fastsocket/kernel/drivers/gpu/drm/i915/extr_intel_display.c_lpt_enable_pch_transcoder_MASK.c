
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_private {TYPE_1__* info; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct drm_i915_private*,int ) ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_8 (int,int) ;

__attribute__((used)) static void FUNC_9(struct drm_i915_private *VAR_10,
          enum transcoder VAR_11)
{
 u32 VAR_12, VAR_13;


 FUNC_0(VAR_10->info->gen < 5);


 FUNC_7(VAR_10, (enum pipe) VAR_11);
 FUNC_6(VAR_10, VAR_2);


 VAR_12 = FUNC_2(VAR_9);
 VAR_12 |= VAR_3;
 FUNC_3(VAR_9, VAR_12);

 VAR_12 = VAR_4;
 VAR_13 = FUNC_2(FUNC_4(VAR_11));

 if ((VAR_13 & VAR_1) ==
     VAR_0)
  VAR_12 |= VAR_5;
 else
  VAR_12 |= VAR_6;

 FUNC_3(FUNC_5(VAR_2), VAR_12);
 if (FUNC_8(FUNC_2(VAR_8) & VAR_7, 100))
  FUNC_1("Failed to enable PCH transcoder\n");
}
