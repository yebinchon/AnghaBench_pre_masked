
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (int,int const) ;
 int VAR_0 ;
 int FUNC_4 (int,char*,int ) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_3, enum port VAR_4,
          bool VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_3->dev_private;
 u32 VAR_7;
 int VAR_8;
 const u32 *VAR_9 = ((VAR_5) ?
  VAR_2 :
  VAR_1);

 FUNC_2("Initializing DDI buffers for port %c in %s mode\n",
   FUNC_5(VAR_4),
   VAR_5 ? "FDI" : "DP");

 FUNC_4((VAR_5 && (VAR_4 != VAR_0)),
  "Programming port %c in FDI mode, this probably will not work.\n",
  FUNC_5(VAR_4));

 for (VAR_8=0, VAR_7=FUNC_1(VAR_4); VAR_8 < FUNC_0(VAR_2); VAR_8++) {
  FUNC_3(VAR_7, VAR_9[VAR_8]);
  VAR_7 += 4;
 }
}
