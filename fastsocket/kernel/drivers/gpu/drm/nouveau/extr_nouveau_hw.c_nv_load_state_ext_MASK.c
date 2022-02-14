
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nv04_mode_state {struct nv04_crtc_reg* crtc_reg; } ;
struct nv04_crtc_reg {scalar_t__ crtc_eng_ctrl; scalar_t__ cursor_cfg; scalar_t__ crtc_830; scalar_t__ crtc_834; scalar_t__ gpio_ext; scalar_t__ crtc_850; scalar_t__ crtc_cfg; scalar_t__ fb_start; int * CR58; } ;
struct nouveau_timer {int dummy; } ;
struct nouveau_drm {int device; } ;
struct nouveau_device {scalar_t__ card_type; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_device*,int,int ) ;
 int FUNC_1 (struct drm_device*,int,int ,scalar_t__) ;
 int FUNC_2 (struct drm_device*,int,int ,int) ;
 int FUNC_3 (struct drm_device*,int,int,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_45 ;
 int FUNC_6 (int) ;
 struct nouveau_drm* FUNC_7 (struct drm_device*) ;
 struct nouveau_timer* FUNC_8 (struct nouveau_device*) ;
 int FUNC_9 (struct nouveau_timer*,int,int ,int,int) ;
 struct nouveau_device* FUNC_10 (int ) ;
 int FUNC_11 (struct drm_device*,int) ;
 scalar_t__ FUNC_12 (struct drm_device*) ;
 scalar_t__ FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct nouveau_device*,int ,int) ;
 int FUNC_15 (struct drm_device*,int,struct nv04_crtc_reg*,int) ;

__attribute__((used)) static void
FUNC_16(struct drm_device *VAR_46, int VAR_47,
    struct nv04_mode_state *VAR_48)
{
 struct nouveau_drm *VAR_49 = FUNC_7(VAR_46);
 struct nouveau_device *VAR_50 = FUNC_10(VAR_49->device);
 struct nouveau_timer *VAR_51 = FUNC_8(VAR_50);
 struct nv04_crtc_reg *VAR_52 = &VAR_48->crtc_reg[VAR_47];
 uint32_t VAR_53;
 int VAR_54;

 if (FUNC_10(VAR_49->device)->card_type >= VAR_1) {
  if (FUNC_13(VAR_46))




   FUNC_1(VAR_46, VAR_47, VAR_39, VAR_52->crtc_eng_ctrl);

  FUNC_14(VAR_50, VAR_45, 1);
  FUNC_14(VAR_50, VAR_44, 0);
  FUNC_14(VAR_50, FUNC_5(0), 0);
  FUNC_14(VAR_50, FUNC_5(1), 0);
  FUNC_14(VAR_50, FUNC_4(0), 0);
  FUNC_14(VAR_50, FUNC_4(1), 0);
  FUNC_14(VAR_50, FUNC_6(0), 0);
  FUNC_14(VAR_50, FUNC_6(1), 0);
  FUNC_14(VAR_50, VAR_33, 0);

  FUNC_1(VAR_46, VAR_47, VAR_38, VAR_52->cursor_cfg);
  FUNC_1(VAR_46, VAR_47, VAR_34, VAR_52->crtc_830);
  FUNC_1(VAR_46, VAR_47, VAR_35, VAR_52->crtc_834);

  if (FUNC_10(VAR_49->device)->card_type >= VAR_3)
   FUNC_1(VAR_46, VAR_47, VAR_40, VAR_52->gpio_ext);

  if (FUNC_10(VAR_49->device)->card_type == VAR_4) {
   FUNC_1(VAR_46, VAR_47, VAR_36, VAR_52->crtc_850);

   VAR_53 = FUNC_0(VAR_46, VAR_47, VAR_42);
   if (VAR_52->crtc_cfg == VAR_0)
    FUNC_2(VAR_46, VAR_47, VAR_42, VAR_53 | 0x10000);
   else
    FUNC_2(VAR_46, VAR_47, VAR_42, VAR_53 & ~0x10000);
  }
 }

 FUNC_1(VAR_46, VAR_47, VAR_37, VAR_52->crtc_cfg);

 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_28);
 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_29);
 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_26);
 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_27);
 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_25);
 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_23);
 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_17);
 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_19);
 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_18);

 if (FUNC_10(VAR_49->device)->card_type >= VAR_2)
  FUNC_15(VAR_46, VAR_47, VAR_52, VAR_6);

 if (FUNC_10(VAR_49->device)->card_type >= VAR_3)
  FUNC_15(VAR_46, VAR_47, VAR_52, 0x9f);

 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_7);
 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_20);
 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_21);
 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_22);
 if (FUNC_10(VAR_49->device)->card_type == VAR_4)
  FUNC_11(VAR_46, VAR_47);
 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_24);

 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_30);
 FUNC_15(VAR_46, VAR_47, VAR_52, VAR_31);
 if (FUNC_10(VAR_49->device)->card_type >= VAR_1) {
  FUNC_15(VAR_46, VAR_47, VAR_52, VAR_16);
  FUNC_15(VAR_46, VAR_47, VAR_52, VAR_15);
  FUNC_15(VAR_46, VAR_47, VAR_52, VAR_8);
  FUNC_15(VAR_46, VAR_47, VAR_52, VAR_32);
 }

 if (FUNC_12(VAR_46)) {
  if (FUNC_10(VAR_49->device)->card_type == VAR_1) {


   FUNC_9(VAR_51, 650000000, VAR_43, 0x8, 0x8);
   FUNC_9(VAR_51, 650000000, VAR_43, 0x8, 0x0);
  }

  FUNC_15(VAR_46, VAR_47, VAR_52, VAR_5);
  FUNC_15(VAR_46, VAR_47, VAR_52, VAR_9);
  FUNC_15(VAR_46, VAR_47, VAR_52, VAR_10);

  for (VAR_54 = 0; VAR_54 < 0x10; VAR_54++)
   FUNC_3(VAR_46, VAR_47, VAR_54, VAR_52->CR58[VAR_54]);
  FUNC_15(VAR_46, VAR_47, VAR_52, VAR_11);
  FUNC_15(VAR_46, VAR_47, VAR_52, VAR_12);

  FUNC_15(VAR_46, VAR_47, VAR_52, VAR_13);
  FUNC_15(VAR_46, VAR_47, VAR_52, VAR_14);
 }

 FUNC_1(VAR_46, VAR_47, VAR_41, VAR_52->fb_start);
}
