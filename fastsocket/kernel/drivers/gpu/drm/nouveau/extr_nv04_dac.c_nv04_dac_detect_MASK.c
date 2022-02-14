
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nouveau_drm {int dummy; } ;
struct nouveau_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,int ,int ) ;
 int FUNC_2 (struct drm_device*,int ,int ) ;
 int FUNC_3 (struct drm_device*,int ,int ) ;
 int FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_device*,int ,int ,int) ;
 int FUNC_6 (struct drm_device*,int ,int ,int) ;
 int FUNC_7 (struct drm_device*,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct nouveau_drm*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (int) ;
 struct nouveau_device* FUNC_10 (struct drm_device*) ;
 struct nouveau_drm* FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct nouveau_device*,int ) ;
 scalar_t__ FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct nouveau_device*,int ,int) ;
 scalar_t__ FUNC_15 (struct drm_device*,int*) ;

__attribute__((used)) static enum drm_connector_status FUNC_16(struct drm_encoder *VAR_18,
       struct drm_connector *VAR_19)
{
 struct drm_device *VAR_20 = VAR_18->dev;
 struct nouveau_device *VAR_21 = FUNC_10(VAR_20);
 struct nouveau_drm *VAR_22 = FUNC_11(VAR_20);
 uint8_t VAR_23, VAR_24, VAR_25, VAR_26;
 uint8_t VAR_27[3], VAR_28;
 uint32_t VAR_29, VAR_30;
 int VAR_31;
 uint8_t VAR_32;
 bool VAR_33 = 1;






 if (FUNC_13(VAR_20))

  FUNC_4(VAR_20, 0);

 VAR_26 = FUNC_2(VAR_20, 0, VAR_4);
 FUNC_6(VAR_20, 0, VAR_4, VAR_26 | 0x80);

 VAR_23 = FUNC_3(VAR_20, 0, VAR_15);
 FUNC_7(VAR_20, 0, VAR_15, VAR_23 & ~0x20);

 VAR_29 = FUNC_1(VAR_20, 0, VAR_9);
 FUNC_5(VAR_20, 0, VAR_9,
        VAR_29 & ~VAR_10);

 FUNC_9(10);

 VAR_24 = FUNC_2(VAR_20, 0, VAR_2);
 FUNC_6(VAR_20, 0, VAR_2,
         VAR_24 & ~(0x80 | FUNC_0(VAR_1)));
 VAR_25 = FUNC_2(VAR_20, 0, VAR_3);
 FUNC_6(VAR_20, 0, VAR_3, VAR_25 & ~0xc0);

 FUNC_14(VAR_21, VAR_13, 0x0);
 for (VAR_31 = 0; VAR_31 < 3; VAR_31++)
  VAR_27[VAR_31] = FUNC_12(VAR_21, VAR_11);
 VAR_28 = FUNC_12(VAR_21, VAR_12);
 FUNC_14(VAR_21, VAR_12, 0);

 VAR_30 = FUNC_1(VAR_20, 0, VAR_5);
 FUNC_5(VAR_20, 0, VAR_5,
        (VAR_30 & ~(VAR_6 |
        VAR_8)) |
        VAR_7);

 VAR_32 = 8;

 do {
  bool VAR_34[2];

  FUNC_14(VAR_21, VAR_14, 0);
  FUNC_14(VAR_21, VAR_11, 0);
  FUNC_14(VAR_21, VAR_11, 0);

  FUNC_14(VAR_21, VAR_11, VAR_32);

  VAR_31 = 0;

  do {
   if (FUNC_15(VAR_20, VAR_34))
    goto out;
  } while ((VAR_34[0] != VAR_34[1]) &&
       ++VAR_31 < VAR_0);

  if (VAR_31 == VAR_0)

   VAR_33 = 0;
  else
   VAR_33 = VAR_34[0];





 } while (++VAR_32 < 0x18 && VAR_33);

out:
 FUNC_14(VAR_21, VAR_12, VAR_28);
 FUNC_5(VAR_20, 0, VAR_5, VAR_30);
 FUNC_14(VAR_21, VAR_14, 0);
 for (VAR_31 = 0; VAR_31 < 3; VAR_31++)
  FUNC_14(VAR_21, VAR_11, VAR_27[VAR_31]);
 FUNC_5(VAR_20, 0, VAR_9, VAR_29);
 FUNC_6(VAR_20, 0, VAR_2, VAR_24);
 FUNC_6(VAR_20, 0, VAR_3, VAR_25);
 FUNC_7(VAR_20, 0, VAR_15, VAR_23);
 FUNC_6(VAR_20, 0, VAR_4, VAR_26);

 if (VAR_32 == 0x18) {
  FUNC_8(VAR_22, "Load detected on head A\n");
  return VAR_16;
 }

 return VAR_17;
}
