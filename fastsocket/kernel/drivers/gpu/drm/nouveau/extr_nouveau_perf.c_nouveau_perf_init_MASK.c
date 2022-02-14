
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct nvbios {scalar_t__ type; int* data; int offset; } ;
struct TYPE_5__ {int head; int * func; int name; } ;
struct nouveau_pm_level {int fanspeed; int volt_min; int core; int memory; int shader; int memscript; int vdec; int dom6; int id; TYPE_2__ profile; int name; int timing; void* hub07; void* daemon; void* rop; void* copy; void* hub01; void* hub06; void* unka0; } ;
struct TYPE_4__ {scalar_t__ supported; } ;
struct nouveau_pm {size_t nr_perflvl; int profiles; TYPE_1__ voltage; struct nouveau_pm_level* perflvl; } ;
struct nouveau_drm {int device; struct nvbios vbios; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {int chipset; int card_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *,int *) ;
 struct nouveau_drm* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int,int *) ;
 int* FUNC_7 (struct drm_device*,int,int*,int*,int*,int*) ;
 int* FUNC_8 (struct drm_device*,int*) ;
 int FUNC_9 (struct drm_device*,struct nouveau_pm_level*) ;
 struct nouveau_pm* FUNC_10 (struct drm_device*) ;
 int VAR_2 ;
 int FUNC_11 (struct drm_device*,int) ;
 TYPE_3__* FUNC_12 (int ) ;
 int FUNC_13 (int ,int,char*,int) ;
 void* FUNC_14 (int) ;

void
FUNC_15(struct drm_device *VAR_3)
{
 struct nouveau_drm *VAR_4 = FUNC_5(VAR_3);
 struct nouveau_pm *VAR_5 = FUNC_10(VAR_3);
 struct nvbios *VAR_6 = &VAR_4->vbios;
 u8 *VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14 = -1;

 if (VAR_6->type == VAR_0 && VAR_6->data[VAR_6->offset + 6] < 0x25) {
  FUNC_3(VAR_3);
  return;
 }

 VAR_7 = FUNC_8(VAR_3, &VAR_8);

 while ((VAR_7 = FUNC_7(VAR_3, ++VAR_14, &VAR_8, &VAR_9, &VAR_10, &VAR_11))) {
  struct nouveau_pm_level *VAR_15 = &VAR_5->perflvl[VAR_5->nr_perflvl];

  if (VAR_7[0] == 0xff)
   continue;

  switch (VAR_8) {
  case 0x12:
  case 0x13:
  case 0x15:
   VAR_15->fanspeed = VAR_7[55];
   if (VAR_9 > 56)
    VAR_15->volt_min = VAR_7[56];
   VAR_15->core = FUNC_2(VAR_7[1]) * 10;
   VAR_15->memory = FUNC_2(VAR_7[5]) * 20;
   break;
  case 0x21:
  case 0x23:
  case 0x24:
   VAR_15->fanspeed = VAR_7[4];
   VAR_15->volt_min = VAR_7[5];
   VAR_15->shader = FUNC_1(VAR_7[6]) * 1000;
   VAR_15->core = VAR_15->shader;
   VAR_15->core += (signed char)VAR_7[8] * 1000;
   if (FUNC_12(VAR_4->device)->chipset == 0x49 ||
       FUNC_12(VAR_4->device)->chipset == 0x4b)
    VAR_15->memory = FUNC_1(VAR_7[11]) * 1000;
   else
    VAR_15->memory = FUNC_1(VAR_7[11]) * 2000;
   break;
  case 0x25:
   VAR_15->fanspeed = VAR_7[4];
   VAR_15->volt_min = VAR_7[5];
   VAR_15->core = FUNC_1(VAR_7[6]) * 1000;
   VAR_15->shader = FUNC_1(VAR_7[10]) * 1000;
   VAR_15->memory = FUNC_1(VAR_7[12]) * 1000;
   break;
  case 0x30:
   VAR_15->memscript = FUNC_1(VAR_7[2]);
  case 0x35:
   VAR_15->fanspeed = VAR_7[6];
   VAR_15->volt_min = VAR_7[7];
   VAR_15->core = FUNC_1(VAR_7[8]) * 1000;
   VAR_15->shader = FUNC_1(VAR_7[10]) * 1000;
   VAR_15->memory = FUNC_1(VAR_7[12]) * 1000;
   VAR_15->vdec = FUNC_1(VAR_7[16]) * 1000;
   VAR_15->dom6 = FUNC_1(VAR_7[20]) * 1000;
   break;
  case 0x40:

   VAR_15->fanspeed = 0;
   VAR_15->volt_min = VAR_7[2];
   if (FUNC_12(VAR_4->device)->card_type == VAR_1) {
    VAR_15->core = ((FUNC_1(VAR_7[VAR_9 + (0) * VAR_11]) & 0xfff) * 1000);
    VAR_15->shader = ((FUNC_1(VAR_7[VAR_9 + (1) * VAR_11]) & 0xfff) * 1000);
    VAR_15->memory = ((FUNC_1(VAR_7[VAR_9 + (2) * VAR_11]) & 0xfff) * 1000);
    VAR_15->vdec = ((FUNC_1(VAR_7[VAR_9 + (3) * VAR_11]) & 0xfff) * 1000);
    VAR_15->unka0 = ((FUNC_1(VAR_7[VAR_9 + (4) * VAR_11]) & 0xfff) * 1000);
   } else {
    VAR_15->hub06 = ((FUNC_1(VAR_7[VAR_9 + (0) * VAR_11]) & 0xfff) * 1000);
    VAR_15->hub01 = ((FUNC_1(VAR_7[VAR_9 + (1) * VAR_11]) & 0xfff) * 1000);
    VAR_15->copy = ((FUNC_1(VAR_7[VAR_9 + (2) * VAR_11]) & 0xfff) * 1000);
    VAR_15->shader = ((FUNC_1(VAR_7[VAR_9 + (3) * VAR_11]) & 0xfff) * 1000);
    VAR_15->rop = ((FUNC_1(VAR_7[VAR_9 + (4) * VAR_11]) & 0xfff) * 1000);
    VAR_15->memory = ((FUNC_1(VAR_7[VAR_9 + (5) * VAR_11]) & 0xfff) * 1000);
    VAR_15->vdec = ((FUNC_1(VAR_7[VAR_9 + (6) * VAR_11]) & 0xfff) * 1000);
    VAR_15->daemon = ((FUNC_1(VAR_7[VAR_9 + (10) * VAR_11]) & 0xfff) * 1000);
    VAR_15->hub07 = ((FUNC_1(VAR_7[VAR_9 + (11) * VAR_11]) & 0xfff) * 1000);
    VAR_15->core = VAR_15->shader / 2;
   }
   break;
  }


  FUNC_9(VAR_3, VAR_15);
  if (VAR_5->voltage.supported && VAR_15->volt_min) {
   VAR_13 = FUNC_11(VAR_3, VAR_15->volt_min);
   if (VAR_13 < 0) {
    FUNC_0(VAR_4, "perflvl %d, bad vid\n", VAR_14);
    continue;
   }
  }


  VAR_12 = FUNC_6(VAR_3, VAR_15->memory,
               &VAR_15->timing);
  if (VAR_12) {
   FUNC_0(VAR_4, "perflvl %d, bad timing: %d\n", VAR_14, VAR_12);
   continue;
  }

  FUNC_13(VAR_15->name, sizeof(VAR_15->name),
    "performance_level_%d", VAR_14);
  VAR_15->id = VAR_14;

  FUNC_13(VAR_15->profile.name, sizeof(VAR_15->profile.name),
    "%d", VAR_15->id);
  VAR_15->profile.func = &VAR_2;
  FUNC_4(&VAR_15->profile.head, &VAR_5->profiles);


  VAR_5->nr_perflvl++;
 }
}
