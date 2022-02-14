
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvbios {scalar_t__ type; int* data; int offset; } ;
struct nouveau_pm_voltage {int vid_mask; int version; int nr_level; int supported; TYPE_1__* level; } ;
struct nouveau_pm {struct nouveau_pm_voltage voltage; } ;
struct nouveau_gpio {scalar_t__ (* find ) (struct nouveau_gpio*,int ,int ,int,struct dcb_gpio_func*) ;} ;
struct nouveau_drm {struct nvbios vbios; int device; } ;
struct drm_device {int dummy; } ;
struct dcb_gpio_func {int dummy; } ;
struct bit_entry {int version; int* data; } ;
typedef scalar_t__ s16 ;
struct TYPE_2__ {int voltage; int vid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*,...) ;
 int FUNC_1 (struct nouveau_drm*,char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int* FUNC_4 (struct drm_device*,int) ;
 scalar_t__ FUNC_5 (struct drm_device*,char,struct bit_entry*) ;
 void* FUNC_6 (int,int,int ) ;
 struct nouveau_drm* FUNC_7 (struct drm_device*) ;
 struct nouveau_gpio* FUNC_8 (int ) ;
 struct nouveau_pm* FUNC_9 (struct drm_device*) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (struct nouveau_gpio*,int ,int ,int,struct dcb_gpio_func*) ;
 int * VAR_3 ;

void
FUNC_11(struct drm_device *VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_7(VAR_4);
 struct nouveau_gpio *VAR_6 = FUNC_8(VAR_5->device);
 struct nouveau_pm *VAR_7 = FUNC_9(VAR_4);
 struct nouveau_pm_voltage *VAR_8 = &VAR_7->voltage;
 struct nvbios *VAR_9 = &VAR_5->vbios;
 struct dcb_gpio_func VAR_10;
 struct bit_entry VAR_11;
 u8 *VAR_12 = ((void*)0), *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 if (VAR_9->type == VAR_1) {
  if (FUNC_5(VAR_4, 'P', &VAR_11))
   return;

  if (VAR_11.version == 1)
   VAR_12 = FUNC_4(VAR_4, VAR_11.data[16]);
  else
  if (VAR_11.version == 2)
   VAR_12 = FUNC_4(VAR_4, VAR_11.data[12]);
  else {
   FUNC_1(VAR_5, "unknown volt for BIT P %d\n", VAR_11.version);
  }
 } else {
  if (VAR_9->data[VAR_9->offset + 6] < 0x27) {
   FUNC_0(VAR_5, "BMP version too old for voltage\n");
   return;
  }

  VAR_12 = FUNC_4(VAR_4, VAR_9->data[VAR_9->offset + 0x98]);
 }

 if (!VAR_12) {
  FUNC_0(VAR_5, "voltage table pointer invalid\n");
  return;
 }

 switch (VAR_12[0]) {
 case 0x10:
 case 0x11:
 case 0x12:
  VAR_15 = 5;
  VAR_16 = VAR_12[1];
  VAR_17 = VAR_12[2];
  VAR_19 = 0;
  VAR_18 = VAR_12[4];
  break;
 case 0x20:
  VAR_15 = VAR_12[1];
  VAR_16 = VAR_12[3];
  VAR_17 = VAR_12[2];
  VAR_19 = 0;
  VAR_18 = VAR_12[5];
  break;
 case 0x30:
  VAR_15 = VAR_12[1];
  VAR_16 = VAR_12[2];
  VAR_17 = VAR_12[3];
  VAR_18 = VAR_12[4];
  VAR_19 = 2;
  break;
 case 0x40:
  VAR_15 = VAR_12[1];
  VAR_16 = VAR_12[2];
  VAR_17 = VAR_12[3];
  VAR_18 = VAR_12[11];
  VAR_19 = 0;
  break;
 default:
  FUNC_1(VAR_5, "voltage table 0x%02x unknown\n", VAR_12[0]);
  return;
 }


 VAR_8->vid_mask = VAR_18;
 if (!VAR_8->vid_mask)
  return;

 VAR_14 = 0;
 while (VAR_18) {
  if (VAR_14 > VAR_2) {
   FUNC_0(VAR_5, "vid bit %d unknown\n", VAR_14);
   return;
  }

  if (VAR_6 && VAR_6->find(VAR_6, 0, VAR_3[VAR_14], 0xff, &VAR_10)) {
   FUNC_0(VAR_5, "vid bit %d has no gpio tag\n", VAR_14);
   return;
  }

  VAR_18 >>= 1;
  VAR_14++;
 }


 VAR_8->version = VAR_12[0];
 if (VAR_8->version < 0x40) {
  VAR_8->nr_level = VAR_17;
  VAR_8->level =
   FUNC_6(VAR_17, sizeof(*VAR_8->level), VAR_0);
  if (!VAR_8->level)
   return;

  VAR_13 = VAR_12 + VAR_15;
  for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++, VAR_13 += VAR_16) {
   VAR_8->level[VAR_14].voltage = VAR_13[0] * 10000;
   VAR_8->level[VAR_14].vid = VAR_13[1] >> VAR_19;
  }
 } else {
  u32 VAR_20 = FUNC_3(VAR_12[4]);
  s16 VAR_21 = FUNC_2(VAR_12[8]);
  u8 VAR_22;

  VAR_8->nr_level = VAR_8->vid_mask + 1;
  VAR_8->level = FUNC_6(VAR_8->nr_level,
      sizeof(*VAR_8->level), VAR_0);
  if (!VAR_8->level)
   return;

  for (VAR_22 = 0; VAR_22 <= VAR_8->vid_mask; VAR_22++) {
   VAR_8->level[VAR_22].voltage = VAR_20;
   VAR_8->level[VAR_22].vid = VAR_22;
   VAR_20 += VAR_21;
  }
 }

 VAR_8->supported = 1;
}
