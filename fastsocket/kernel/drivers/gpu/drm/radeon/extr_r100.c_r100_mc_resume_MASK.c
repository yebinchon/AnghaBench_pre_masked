
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vram_start; } ;
struct radeon_device {int flags; TYPE_1__ mc; } ;
struct r100_mc_save {int CRTC2_GEN_CNTL; int CRTC_GEN_CNTL; int CRTC_EXT_CNTL; int GENMO_WT; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct radeon_device *VAR_7, struct r100_mc_save *VAR_8)
{

 FUNC_0(VAR_3, VAR_7->mc.vram_start);
 if (!(VAR_7->flags & VAR_0)) {
  FUNC_0(VAR_4, VAR_7->mc.vram_start);
 }

 FUNC_1(VAR_5, VAR_8->GENMO_WT);
 FUNC_0(VAR_2, VAR_8->CRTC_EXT_CNTL);
 FUNC_0(VAR_1, VAR_8->CRTC_GEN_CNTL);
 if (!(VAR_7->flags & VAR_0)) {
  FUNC_0(VAR_6, VAR_8->CRTC2_GEN_CNTL);
 }
}
