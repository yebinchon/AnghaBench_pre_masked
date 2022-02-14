
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {unsigned long corr; unsigned long gfx_power; } ;
struct TYPE_3__ {int cur_delay; } ;
struct drm_i915_private {TYPE_2__ ips; TYPE_1__ rps; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (struct drm_i915_private*) ;
 int VAR_1 ;
 int FUNC_4 (struct drm_i915_private*,int) ;

__attribute__((used)) static unsigned long FUNC_5(struct drm_i915_private *VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 u32 VAR_8, VAR_9;

 FUNC_2(&VAR_1);

 VAR_8 = FUNC_0(VAR_0 + (VAR_2->rps.cur_delay * 4));
 VAR_8 = (VAR_8 >> 24) & 0x7f;
 VAR_9 = FUNC_4(VAR_2, VAR_8);

 VAR_5 = VAR_9;

 VAR_3 = FUNC_3(VAR_2);




 if (VAR_3 > 80)
  VAR_4 = ((VAR_3 * 2349) + 135940);
 else if (VAR_3 >= 50)
  VAR_4 = ((VAR_3 * 964) + 29317);
 else
  VAR_4 = ((VAR_3 * 301) + 1004);

 VAR_4 = VAR_4 * ((150142 * VAR_5) / 10000 - 78642);
 VAR_4 /= 100000;
 VAR_6 = (VAR_4 * VAR_2->ips.corr);

 VAR_7 = (VAR_6 * VAR_5) / 10000;
 VAR_7 /= 100;

 FUNC_1(VAR_2);

 return VAR_2->ips.gfx_power + VAR_7;
}
