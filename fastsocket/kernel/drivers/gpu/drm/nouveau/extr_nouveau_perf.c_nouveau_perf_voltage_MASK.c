
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nouveau_pm_level {int volt_min; int volt_max; } ;
struct nouveau_drm {TYPE_2__* pm; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int version; int length; int * data; } ;
struct TYPE_3__ {int version; } ;
struct TYPE_4__ {TYPE_1__ voltage; } ;


 int FUNC_0 (struct nouveau_drm*,char*,...) ;
 void* FUNC_1 (int) ;
 int* FUNC_2 (struct drm_device*,int ) ;
 scalar_t__ FUNC_3 (struct drm_device*,char,struct bit_entry*) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_5(struct drm_device *VAR_0, struct nouveau_pm_level *VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_4(VAR_0);
 struct bit_entry VAR_3;
 u8 *VAR_4;
 int VAR_5;

 VAR_5 = VAR_1->volt_min;
 VAR_1->volt_min = 0;




 if (VAR_2->pm->voltage.version < 0x40) {
  VAR_1->volt_min = VAR_5 * 10000;
  VAR_1->volt_max = VAR_1->volt_min;
  return;
 }




 if (FUNC_3(VAR_0, 'P', &VAR_3) || VAR_3.version != 2 || VAR_3.length < 34) {
  FUNC_0(VAR_2, "where's our volt map table ptr? %d %d\n",
    VAR_3.version, VAR_3.length);
  return;
 }

 VAR_4 = FUNC_2(VAR_0, VAR_3.data[32]);
 if (!VAR_4) {
  FUNC_0(VAR_2, "volt map table pointer invalid\n");
  return;
 }

 if (VAR_5 < VAR_4[3]) {
  VAR_4 += VAR_4[1] + (VAR_4[2] * VAR_5);
  VAR_1->volt_min = FUNC_1(VAR_4[0]);
  VAR_1->volt_max = FUNC_1(VAR_4[4]);
 }
}
