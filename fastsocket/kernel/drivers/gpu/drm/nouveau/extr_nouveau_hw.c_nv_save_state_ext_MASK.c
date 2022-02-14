
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv04_mode_state {struct nv04_crtc_reg* crtc_reg; } ;
struct nv04_crtc_reg {void* fb_start; int * CR58; void* crtc_cfg; void* cursor_cfg; void* crtc_eng_ctrl; void* crtc_850; void* gpio_ext; void* crtc_834; void* crtc_830; } ;
struct nouveau_drm {int device; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ card_type; } ;


 void* FUNC_0 (struct drm_device*,int,int ) ;
 int FUNC_1 (struct drm_device*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
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
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int,struct nv04_crtc_reg*,int) ;

__attribute__((used)) static void
FUNC_7(struct drm_device *VAR_41, int VAR_42,
    struct nv04_mode_state *VAR_43)
{
 struct nouveau_drm *VAR_44 = FUNC_2(VAR_41);
 struct nv04_crtc_reg *VAR_45 = &VAR_43->crtc_reg[VAR_42];
 int VAR_46;

 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_25);
 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_28);
 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_29);
 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_26);
 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_27);
 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_23);
 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_17);

 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_19);
 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_18);
 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_4);

 if (FUNC_3(VAR_44->device)->card_type >= VAR_1)
  FUNC_6(VAR_41, VAR_42, VAR_45, VAR_6);

 if (FUNC_3(VAR_44->device)->card_type >= VAR_2)
  FUNC_6(VAR_41, VAR_42, VAR_45, 0x9f);

 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_7);
 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_20);
 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_21);
 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_22);
 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_24);

 if (FUNC_3(VAR_44->device)->card_type >= VAR_0) {
  VAR_45->crtc_830 = FUNC_0(VAR_41, VAR_42, VAR_33);
  VAR_45->crtc_834 = FUNC_0(VAR_41, VAR_42, VAR_34);

  if (FUNC_3(VAR_44->device)->card_type >= VAR_2)
   VAR_45->gpio_ext = FUNC_0(VAR_41, VAR_42, VAR_39);

  if (FUNC_3(VAR_44->device)->card_type == VAR_3)
   VAR_45->crtc_850 = FUNC_0(VAR_41, VAR_42, VAR_35);

  if (FUNC_5(VAR_41))
   VAR_45->crtc_eng_ctrl = FUNC_0(VAR_41, VAR_42, VAR_38);
  VAR_45->cursor_cfg = FUNC_0(VAR_41, VAR_42, VAR_37);
 }

 VAR_45->crtc_cfg = FUNC_0(VAR_41, VAR_42, VAR_36);

 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_30);
 FUNC_6(VAR_41, VAR_42, VAR_45, VAR_31);
 if (FUNC_3(VAR_44->device)->card_type >= VAR_0) {
  FUNC_6(VAR_41, VAR_42, VAR_45, VAR_16);
  FUNC_6(VAR_41, VAR_42, VAR_45, VAR_15);
  FUNC_6(VAR_41, VAR_42, VAR_45, VAR_8);
  FUNC_6(VAR_41, VAR_42, VAR_45, VAR_32);
 }

 if (FUNC_4(VAR_41)) {
  FUNC_6(VAR_41, VAR_42, VAR_45, VAR_5);
  FUNC_6(VAR_41, VAR_42, VAR_45, VAR_9);
  FUNC_6(VAR_41, VAR_42, VAR_45, VAR_10);

  for (VAR_46 = 0; VAR_46 < 0x10; VAR_46++)
   VAR_45->CR58[VAR_46] = FUNC_1(VAR_41, VAR_42, VAR_46);
  FUNC_6(VAR_41, VAR_42, VAR_45, VAR_11);
  FUNC_6(VAR_41, VAR_42, VAR_45, VAR_12);

  FUNC_6(VAR_41, VAR_42, VAR_45, VAR_13);
  FUNC_6(VAR_41, VAR_42, VAR_45, VAR_14);
 }

 VAR_45->fb_start = FUNC_0(VAR_41, VAR_42, VAR_40);
}
