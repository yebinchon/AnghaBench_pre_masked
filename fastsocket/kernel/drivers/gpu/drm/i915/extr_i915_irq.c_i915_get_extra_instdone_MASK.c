
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_8,
        uint32_t *VAR_9)
{
 struct drm_i915_private *VAR_10 = VAR_8->dev_private;
 FUNC_3(VAR_9, 0, sizeof(*VAR_9) * VAR_4);

 switch(FUNC_1(VAR_8)->gen) {
 case 2:
 case 3:
  VAR_9[0] = FUNC_0(VAR_5);
  break;
 case 4:
 case 5:
 case 6:
  VAR_9[0] = FUNC_0(VAR_7);
  VAR_9[1] = FUNC_0(VAR_6);
  break;
 default:
  FUNC_2(1, "Unsupported platform\n");
 case 7:
  VAR_9[0] = FUNC_0(VAR_0);
  VAR_9[1] = FUNC_0(VAR_3);
  VAR_9[2] = FUNC_0(VAR_2);
  VAR_9[3] = FUNC_0(VAR_1);
  break;
 }
}
