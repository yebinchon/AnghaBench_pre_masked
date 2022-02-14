
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct nouveau_gpio {int (* get ) (struct nouveau_gpio*,int ,int ,int) ;int (* set ) (struct nouveau_gpio*,int ,int ,int,int) ;} ;
struct TYPE_4__ {int tvdactestval; int dactestval; } ;
struct nouveau_drm {int device; TYPE_1__ vbios; } ;
struct nouveau_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct dcb_output {scalar_t__ type; } ;
struct TYPE_6__ {struct dcb_output* dcb; } ;
struct TYPE_5__ {scalar_t__ card_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct drm_device*,int,scalar_t__) ;
 int FUNC_1 (struct drm_device*,int,int ) ;
 int FUNC_2 (struct drm_device*,int,scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int) ;
 struct nouveau_device* FUNC_5 (struct drm_device*) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 TYPE_3__* FUNC_7 (struct drm_encoder*) ;
 struct nouveau_gpio* FUNC_8 (struct nouveau_device*) ;
 int FUNC_9 (struct drm_encoder*) ;
 TYPE_2__* FUNC_10 (int ) ;
 int FUNC_11 (struct nouveau_device*,int ) ;
 int FUNC_12 (struct nouveau_device*,int ,int) ;
 int FUNC_13 (struct nouveau_gpio*,int ,int ,int) ;
 int FUNC_14 (struct nouveau_gpio*,int ,int ,int) ;
 int FUNC_15 (struct nouveau_gpio*,int ,int ,int,int) ;
 int FUNC_16 (struct nouveau_gpio*,int ,int ,int,int) ;
 int FUNC_17 (struct nouveau_gpio*,int ,int ,int,int) ;
 int FUNC_18 (struct nouveau_gpio*,int ,int ,int,int) ;

uint32_t FUNC_19(struct drm_encoder *VAR_13)
{
 struct drm_device *VAR_14 = VAR_13->dev;
 struct nouveau_drm *VAR_15 = FUNC_6(VAR_14);
 struct nouveau_device *VAR_16 = FUNC_5(VAR_14);
 struct nouveau_gpio *VAR_17 = FUNC_8(VAR_16);
 struct dcb_output *VAR_18 = FUNC_7(VAR_13)->dcb;
 uint32_t VAR_19, VAR_20, VAR_21 = FUNC_9(VAR_13);
 uint32_t VAR_22 = 0, VAR_23 = 0, VAR_24,
  VAR_25, VAR_26 = 0, VAR_27 = 0, VAR_28, VAR_29;
 int VAR_30;


 if (VAR_18->type == VAR_2) {
  VAR_20 = (0xa0 << 0 | 0xa0 << 10 | 0xa0 << 20);

  if (VAR_15->vbios.tvdactestval)
   VAR_20 = VAR_15->vbios.tvdactestval;
 } else {
  VAR_20 = (0x140 << 0 | 0x140 << 10 | 0x140 << 20);

  if (VAR_15->vbios.dactestval)
   VAR_20 = VAR_15->vbios.dactestval;
 }

 VAR_25 = FUNC_0(VAR_14, 0, VAR_10 + VAR_21);
 FUNC_2(VAR_14, 0, VAR_10 + VAR_21,
        VAR_25 & ~VAR_11);

 VAR_22 = FUNC_11(VAR_16, VAR_5);

 FUNC_12(VAR_16, VAR_5, VAR_22 & 0xd7ffffff);
 if (VAR_21 == 0x68) {
  VAR_23 = FUNC_11(VAR_16, VAR_6);
  FUNC_12(VAR_16, VAR_6, VAR_23 & 0xffffffcf);
 }

 if (VAR_17) {
  VAR_27 = VAR_17->get(VAR_17, 0, VAR_1, 0xff);
  VAR_26 = VAR_17->get(VAR_17, 0, VAR_0, 0xff);
  VAR_17->set(VAR_17, 0, VAR_1, 0xff, VAR_18->type == VAR_2);
  VAR_17->set(VAR_17, 0, VAR_0, 0xff, VAR_18->type == VAR_2);
 }

 FUNC_4(4);

 VAR_24 = FUNC_0(VAR_14, 0, VAR_7 + VAR_21);
 VAR_30 = (VAR_24 & 0x100) >> 8;


 if (!(FUNC_1(VAR_14, VAR_30, VAR_4) & 0xC0))
  VAR_30 ^= 1;


 VAR_29 = (VAR_24 & 0xfffffece) | VAR_30 << 8;

 if (FUNC_10(VAR_15->device)->card_type >= VAR_3) {
  if (VAR_18->type == VAR_2)
   VAR_29 |= 0x1a << 16;
  else
   VAR_29 &= ~(0x1a << 16);
 }

 FUNC_2(VAR_14, 0, VAR_7 + VAR_21, VAR_29);
 FUNC_4(1);

 VAR_28 = FUNC_0(VAR_14, 0, VAR_7 + VAR_21);
 FUNC_2(VAR_14, 0, VAR_7 + VAR_21, VAR_28 | 1);

 FUNC_2(VAR_14, VAR_30, VAR_8,
        VAR_9 | VAR_20);
 VAR_28 = FUNC_0(VAR_14, VAR_30, VAR_10);
 FUNC_2(VAR_14, VAR_30, VAR_10,
        VAR_28 | VAR_12);
 FUNC_4(5);

 VAR_19 = FUNC_0(VAR_14, 0, VAR_10 + VAR_21);

 VAR_19 &= FUNC_0(VAR_14, 0, VAR_10 + VAR_21);

 VAR_28 = FUNC_0(VAR_14, VAR_30, VAR_10);
 FUNC_2(VAR_14, VAR_30, VAR_10,
        VAR_28 & ~VAR_12);
 FUNC_2(VAR_14, VAR_30, VAR_8, 0);


 FUNC_2(VAR_14, 0, VAR_7 + VAR_21, VAR_24);
 FUNC_2(VAR_14, 0, VAR_10 + VAR_21, VAR_25);
 if (VAR_21 == 0x68)
  FUNC_12(VAR_16, VAR_6, VAR_23);
 FUNC_12(VAR_16, VAR_5, VAR_22);

 if (VAR_17) {
  VAR_17->set(VAR_17, 0, VAR_1, 0xff, VAR_27);
  VAR_17->set(VAR_17, 0, VAR_0, 0xff, VAR_26);
 }

 return VAR_19;
}
