
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nouveau_gpio {int (* get ) (struct nouveau_gpio*,int ,int ,int) ;int (* set ) (struct nouveau_gpio*,int ,int ,int,int) ;} ;
struct TYPE_2__ {int tvdactestval; } ;
struct nouveau_drm {TYPE_1__ vbios; int device; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int,int) ;
 int FUNC_1 (struct drm_device*,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 struct nouveau_gpio* FUNC_5 (int ) ;
 int FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct nouveau_gpio*,int ,int ,int) ;
 int FUNC_8 (struct nouveau_gpio*,int ,int ,int) ;
 int FUNC_9 (struct nouveau_gpio*,int ,int ,int,int) ;
 int FUNC_10 (struct nouveau_gpio*,int ,int ,int,int) ;
 int FUNC_11 (struct nouveau_gpio*,int ,int ,int,int) ;
 int FUNC_12 (struct nouveau_gpio*,int ,int ,int,int) ;

__attribute__((used)) static uint32_t FUNC_13(struct drm_encoder *VAR_13)
{
 struct drm_device *VAR_14 = VAR_13->dev;
 struct nouveau_drm *VAR_15 = FUNC_4(VAR_14);
 struct nouveau_gpio *VAR_16 = FUNC_5(VAR_15->device);
 uint32_t VAR_17, VAR_18 = FUNC_6(VAR_13);
 uint32_t VAR_19, VAR_20, VAR_21, VAR_22, VAR_23,
  VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 uint32_t VAR_30 = 0;
 int VAR_31;


 VAR_17 = (0x82 << 0 | 0xeb << 10 | 0x82 << 20);
 if (VAR_15->vbios.tvdactestval)
  VAR_17 = VAR_15->vbios.tvdactestval;

 VAR_26 = FUNC_0(VAR_14, 0, VAR_2 + VAR_18);
 VAR_31 = (VAR_26 & 0x100) >> 8;


 VAR_20 = VAR_16->get(VAR_16, 0, VAR_1, 0xff);
 VAR_19 = VAR_16->get(VAR_16, 0, VAR_0, 0xff);
 VAR_21 = FUNC_0(VAR_14, VAR_31, VAR_5);
 VAR_22 = FUNC_0(VAR_14, VAR_31, VAR_4);
 VAR_23 = FUNC_0(VAR_14, VAR_31, VAR_3);
 VAR_24 = FUNC_0(VAR_14, VAR_31, VAR_6);
 VAR_25 = FUNC_0(VAR_14, 0, VAR_12 + VAR_18);
 VAR_28 = FUNC_0(VAR_14, VAR_31, 0x680c1c);
 VAR_27 = FUNC_0(VAR_14, VAR_31, 0x680c14);
 VAR_29 = FUNC_0(VAR_14, VAR_31, 0x680c6c);


 VAR_16->set(VAR_16, 0, VAR_1, 0xff, 1);
 VAR_16->set(VAR_16, 0, VAR_0, 0xff, 1);

 FUNC_1(VAR_14, VAR_31, VAR_5, 1343);
 FUNC_1(VAR_14, VAR_31, VAR_4, 1047);
 FUNC_1(VAR_14, VAR_31, VAR_3, 1183);
 FUNC_1(VAR_14, VAR_31, VAR_6,
        VAR_7 |
        VAR_11 |
        VAR_9 |
        VAR_8 |
        VAR_10);

 FUNC_1(VAR_14, 0, VAR_12 + VAR_18, 0);

 FUNC_1(VAR_14, 0, VAR_2 + VAR_18,
        (VAR_26 & ~0xff) | 0x22);
 FUNC_3(1);
 FUNC_1(VAR_14, 0, VAR_2 + VAR_18,
        (VAR_26 & ~0xff) | 0x21);

 FUNC_1(VAR_14, VAR_31, 0x680c1c, 1 << 20);
 FUNC_1(VAR_14, VAR_31, 0x680c14, 4 << 16);


 FUNC_1(VAR_14, VAR_31, 0x680c6c, VAR_17 >> 10 & 0x3ff);
 FUNC_3(20);
 VAR_30 |= FUNC_0(VAR_14, 0, VAR_12 + VAR_18)
  & 0x4 << 28;


 FUNC_1(VAR_14, VAR_31, 0x680c6c, VAR_17 & 0x3ff);
 FUNC_3(20);
 VAR_30 |= FUNC_0(VAR_14, 0, VAR_12 + VAR_18)
  & 0xa << 28;


 FUNC_1(VAR_14, VAR_31, 0x680c1c, VAR_28);
 FUNC_1(VAR_14, VAR_31, 0x680c14, VAR_27);
 FUNC_1(VAR_14, VAR_31, 0x680c6c, VAR_29);
 FUNC_1(VAR_14, 0, VAR_2 + VAR_18, VAR_26);
 FUNC_1(VAR_14, 0, VAR_12 + VAR_18, VAR_25);
 FUNC_1(VAR_14, VAR_31, VAR_6, VAR_24);
 FUNC_1(VAR_14, VAR_31, VAR_3, VAR_23);
 FUNC_1(VAR_14, VAR_31, VAR_4, VAR_22);
 FUNC_1(VAR_14, VAR_31, VAR_5, VAR_21);
 VAR_16->set(VAR_16, 0, VAR_1, 0xff, VAR_20);
 VAR_16->set(VAR_16, 0, VAR_0, 0xff, VAR_19);

 return VAR_30;
}
