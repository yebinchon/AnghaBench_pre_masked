
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {int fsb_freq; int mem_freq; int is_ddr3; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int VAR_0 ;




 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_5)
{
 drm_i915_private_t *VAR_6 = VAR_5->dev_private;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_0);

 switch (VAR_7 & VAR_1) {
 case 133:
  VAR_6->fsb_freq = 533;
  break;
 case 131:
  VAR_6->fsb_freq = 800;
  break;
 case 132:
  VAR_6->fsb_freq = 667;
  break;
 case 134:
  VAR_6->fsb_freq = 400;
  break;
 }

 switch (VAR_7 & VAR_2) {
 case 130:
  VAR_6->mem_freq = 533;
  break;
 case 129:
  VAR_6->mem_freq = 667;
  break;
 case 128:
  VAR_6->mem_freq = 800;
  break;
 }


 VAR_7 = FUNC_0(VAR_3);
 VAR_6->is_ddr3 = (VAR_7 & VAR_4) ? 1 : 0;
}
