
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvbios {char* data; size_t offset; } ;
struct nouveau_pm {int nr_perflvl; TYPE_1__* perflvl; } ;
struct nouveau_drm {struct nvbios vbios; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int memory; int name; } ;


 int FUNC_0 (struct nouveau_drm*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_drm*,char*,char) ;
 int FUNC_2 (char) ;
 char* FUNC_3 (struct drm_device*,char) ;
 struct nouveau_device* FUNC_4 (struct drm_device*) ;
 struct nouveau_drm* FUNC_5 (struct drm_device*) ;
 struct nouveau_pm* FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct nouveau_device*,int ) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void
FUNC_9(struct drm_device *VAR_1)
{
 struct nouveau_device *VAR_2 = FUNC_4(VAR_1);
 struct nouveau_drm *VAR_3 = FUNC_5(VAR_1);
 struct nvbios *VAR_4 = &VAR_3->vbios;
 struct nouveau_pm *VAR_5 = FUNC_6(VAR_1);
 char *VAR_6, *VAR_7, *VAR_8 = &VAR_4->data[VAR_4->offset];
 int VAR_9, VAR_10;

 if (VAR_8[5] < 0x5 || VAR_8[6] < 0x14) {
  FUNC_0(VAR_3, "BMP version too old for perf\n");
  return;
 }

 VAR_6 = FUNC_3(VAR_1, VAR_8[0x73]);
 if (!VAR_6) {
  FUNC_0(VAR_3, "No memclock table pointer found.\n");
  return;
 }

 switch (VAR_6[0]) {
 case 0x12:
 case 0x14:
 case 0x18:
  VAR_10 = 0;
  VAR_9 = 1;
  break;
 case 0x01:
  VAR_10 = VAR_6[1] & 1;
  VAR_9 = (VAR_10 ? 8 : 2);
  break;
 default:
  FUNC_1(VAR_3, "Unknown memclock table version %x.\n", VAR_6[0]);
  return;
 }

 VAR_7 = VAR_6 + VAR_9;
 if (VAR_10)
  VAR_7 += (FUNC_7(VAR_2, VAR_0) & 0x3c) >> 1;

 FUNC_8(VAR_5->perflvl[0].name, "performance_level_0");
 VAR_5->perflvl[0].memory = FUNC_2(VAR_7[0]) * 20;
 VAR_5->nr_perflvl = 1;
}
