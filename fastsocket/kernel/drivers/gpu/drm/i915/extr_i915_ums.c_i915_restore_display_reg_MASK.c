
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int savePIPEA_GMCH_DATA_M; int savePIPEB_GMCH_DATA_M; int savePIPEA_GMCH_DATA_N; int savePIPEB_GMCH_DATA_N; int savePIPEA_DP_LINK_M; int savePIPEB_DP_LINK_M; int savePIPEA_DP_LINK_N; int savePIPEB_DP_LINK_N; int* saveFENCE; int savePCH_DREF_CONTROL; int saveDISP_ARB_CTL; int saveDPLL_A; int saveFPA0; int saveFPA1; int saveDPLL_A_MD; int saveHTOTAL_A; int saveHBLANK_A; int saveHSYNC_A; int saveVTOTAL_A; int saveVBLANK_A; int saveVSYNC_A; int saveBCLRPAT_A; int savePIPEA_DATA_M1; int savePIPEA_DATA_N1; int savePIPEA_LINK_M1; int savePIPEA_LINK_N1; int saveFDI_RXA_CTL; int saveFDI_TXA_CTL; int savePFA_CTL_1; int savePFA_WIN_SZ; int savePFA_WIN_POS; int saveTRANSACONF; int saveTRANS_HTOTAL_A; int saveTRANS_HBLANK_A; int saveTRANS_HSYNC_A; int saveTRANS_VTOTAL_A; int saveTRANS_VBLANK_A; int saveTRANS_VSYNC_A; int saveDSPASIZE; int saveDSPAPOS; int savePIPEASRC; int saveDSPAADDR; int saveDSPASTRIDE; int saveDSPASURF; int saveDSPATILEOFF; int savePIPEACONF; int saveDSPACNTR; int saveDPLL_B; int saveFPB0; int saveFPB1; int saveDPLL_B_MD; int saveHTOTAL_B; int saveHBLANK_B; int saveHSYNC_B; int saveVTOTAL_B; int saveVBLANK_B; int saveVSYNC_B; int saveBCLRPAT_B; int savePIPEB_DATA_M1; int savePIPEB_DATA_N1; int savePIPEB_LINK_M1; int savePIPEB_LINK_N1; int saveFDI_RXB_CTL; int saveFDI_TXB_CTL; int savePFB_CTL_1; int savePFB_WIN_SZ; int savePFB_WIN_POS; int saveTRANSBCONF; int saveTRANS_HTOTAL_B; int saveTRANS_HBLANK_B; int saveTRANS_HSYNC_B; int saveTRANS_VTOTAL_B; int saveTRANS_VBLANK_B; int saveTRANS_VSYNC_B; int saveDSPBSIZE; int saveDSPBPOS; int savePIPEBSRC; int saveDSPBADDR; int saveDSPBSTRIDE; int saveDSPBSURF; int saveDSPBTILEOFF; int savePIPEBCONF; int saveDSPBCNTR; int saveCURAPOS; int saveCURACNTR; int saveCURABASE; int saveCURBPOS; int saveCURBCNTR; int saveCURBBASE; int saveCURSIZE; int saveADPA; int saveDP_B; int saveDP_C; int saveDP_D; } ;
struct drm_i915_private {TYPE_1__ regfile; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;
 TYPE_2__* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct drm_device*) ;
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
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int VAR_105 ;
 int VAR_106 ;
 int FUNC_11 (struct drm_device*,int ) ;
 int FUNC_12 (int) ;

void FUNC_13(struct drm_device *VAR_107)
{
 struct drm_i915_private *VAR_108 = VAR_107->dev_private;
 int VAR_109, VAR_110, VAR_111;
 int VAR_112, VAR_113, VAR_114;
 int VAR_115;


 if (FUNC_10(VAR_107)) {
  FUNC_2(VAR_73, VAR_108->regfile.savePIPEA_GMCH_DATA_M);
  FUNC_2(VAR_83, VAR_108->regfile.savePIPEB_GMCH_DATA_M);
  FUNC_2(VAR_74, VAR_108->regfile.savePIPEA_GMCH_DATA_N);
  FUNC_2(VAR_84, VAR_108->regfile.savePIPEB_GMCH_DATA_N);
  FUNC_2(VAR_71, VAR_108->regfile.savePIPEA_DP_LINK_M);
  FUNC_2(VAR_81, VAR_108->regfile.savePIPEB_DP_LINK_M);
  FUNC_2(VAR_72, VAR_108->regfile.savePIPEA_DP_LINK_N);
  FUNC_2(VAR_82, VAR_108->regfile.savePIPEB_DP_LINK_N);
 }


 switch (FUNC_4(VAR_107)->gen) {
 case 7:
 case 6:
  for (VAR_115 = 0; VAR_115 < 16; VAR_115++)
   FUNC_3(VAR_10 + (VAR_115 * 8), VAR_108->regfile.saveFENCE[VAR_115]);
  break;
 case 5:
 case 4:
  for (VAR_115 = 0; VAR_115 < 16; VAR_115++)
   FUNC_3(VAR_9 + (VAR_115 * 8), VAR_108->regfile.saveFENCE[VAR_115]);
  break;
 case 3:
 case 2:
  if (FUNC_7(VAR_107) || FUNC_8(VAR_107) || FUNC_5(VAR_107))
   for (VAR_115 = 0; VAR_115 < 8; VAR_115++)
    FUNC_2(VAR_8 + (VAR_115 * 4), VAR_108->regfile.saveFENCE[VAR_115+8]);
  for (VAR_115 = 0; VAR_115 < 8; VAR_115++)
   FUNC_2(VAR_7 + (VAR_115 * 4), VAR_108->regfile.saveFENCE[VAR_115]);
  break;
 }


 if (FUNC_0(VAR_107)) {
  VAR_109 = VAR_55;
  VAR_112 = VAR_56;
  VAR_110 = VAR_57;
  VAR_113 = VAR_59;
  VAR_111 = VAR_58;
  VAR_114 = VAR_60;
 } else {
  VAR_109 = VAR_23;
  VAR_112 = VAR_25;
  VAR_110 = VAR_45;
  VAR_113 = VAR_47;
  VAR_111 = VAR_46;
  VAR_114 = VAR_48;
 }

 if (FUNC_0(VAR_107)) {
  FUNC_2(VAR_12, VAR_108->regfile.savePCH_DREF_CONTROL);
  FUNC_2(VAR_2, VAR_108->regfile.saveDISP_ARB_CTL);
 }



 if (VAR_108->regfile.saveDPLL_A & VAR_3) {
  FUNC_2(VAR_109, VAR_108->regfile.saveDPLL_A &
      ~VAR_3);
  FUNC_9(VAR_109);
  FUNC_12(150);
 }
 FUNC_2(VAR_110, VAR_108->regfile.saveFPA0);
 FUNC_2(VAR_111, VAR_108->regfile.saveFPA1);

 FUNC_2(VAR_109, VAR_108->regfile.saveDPLL_A);
 FUNC_9(VAR_109);
 FUNC_12(150);
 if (FUNC_4(VAR_107)->gen >= 4 && !FUNC_0(VAR_107)) {
  FUNC_2(VAR_24, VAR_108->regfile.saveDPLL_A_MD);
  FUNC_9(VAR_24);
 }
 FUNC_12(150);


 FUNC_2(VAR_53, VAR_108->regfile.saveHTOTAL_A);
 FUNC_2(VAR_49, VAR_108->regfile.saveHBLANK_A);
 FUNC_2(VAR_51, VAR_108->regfile.saveHSYNC_A);
 FUNC_2(VAR_105, VAR_108->regfile.saveVTOTAL_A);
 FUNC_2(VAR_101, VAR_108->regfile.saveVBLANK_A);
 FUNC_2(VAR_103, VAR_108->regfile.saveVSYNC_A);
 if (!FUNC_0(VAR_107))
  FUNC_2(VAR_15, VAR_108->regfile.saveBCLRPAT_A);

 if (FUNC_0(VAR_107)) {
  FUNC_2(VAR_69, VAR_108->regfile.savePIPEA_DATA_M1);
  FUNC_2(VAR_70, VAR_108->regfile.savePIPEA_DATA_N1);
  FUNC_2(VAR_75, VAR_108->regfile.savePIPEA_LINK_M1);
  FUNC_2(VAR_76, VAR_108->regfile.savePIPEA_LINK_N1);

  FUNC_2(VAR_41, VAR_108->regfile.saveFDI_RXA_CTL);
  FUNC_2(VAR_43, VAR_108->regfile.saveFDI_TXA_CTL);

  FUNC_2(VAR_61, VAR_108->regfile.savePFA_CTL_1);
  FUNC_2(VAR_63, VAR_108->regfile.savePFA_WIN_SZ);
  FUNC_2(VAR_62, VAR_108->regfile.savePFA_WIN_POS);

  FUNC_2(VAR_87, VAR_108->regfile.saveTRANSACONF);
  FUNC_2(VAR_93, VAR_108->regfile.saveTRANS_HTOTAL_A);
  FUNC_2(VAR_89, VAR_108->regfile.saveTRANS_HBLANK_A);
  FUNC_2(VAR_91, VAR_108->regfile.saveTRANS_HSYNC_A);
  FUNC_2(VAR_99, VAR_108->regfile.saveTRANS_VTOTAL_A);
  FUNC_2(VAR_95, VAR_108->regfile.saveTRANS_VBLANK_A);
  FUNC_2(VAR_97, VAR_108->regfile.saveTRANS_VSYNC_A);
 }


 FUNC_2(VAR_30, VAR_108->regfile.saveDSPASIZE);
 FUNC_2(VAR_29, VAR_108->regfile.saveDSPAPOS);
 FUNC_2(VAR_68, VAR_108->regfile.savePIPEASRC);
 FUNC_2(VAR_27, VAR_108->regfile.saveDSPAADDR);
 FUNC_2(VAR_31, VAR_108->regfile.saveDSPASTRIDE);
 if (FUNC_4(VAR_107)->gen >= 4) {
  FUNC_2(VAR_32, VAR_108->regfile.saveDSPASURF);
  FUNC_2(VAR_33, VAR_108->regfile.saveDSPATILEOFF);
 }

 FUNC_2(VAR_67, VAR_108->regfile.savePIPEACONF);

 FUNC_11(VAR_107, VAR_13);

 FUNC_2(VAR_28, VAR_108->regfile.saveDSPACNTR);
 FUNC_2(VAR_27, FUNC_1(VAR_27));


 if (VAR_108->regfile.saveDPLL_B & VAR_3) {
  FUNC_2(VAR_112, VAR_108->regfile.saveDPLL_B &
      ~VAR_3);
  FUNC_9(VAR_112);
  FUNC_12(150);
 }
 FUNC_2(VAR_113, VAR_108->regfile.saveFPB0);
 FUNC_2(VAR_114, VAR_108->regfile.saveFPB1);

 FUNC_2(VAR_112, VAR_108->regfile.saveDPLL_B);
 FUNC_9(VAR_112);
 FUNC_12(150);
 if (FUNC_4(VAR_107)->gen >= 4 && !FUNC_0(VAR_107)) {
  FUNC_2(VAR_26, VAR_108->regfile.saveDPLL_B_MD);
  FUNC_9(VAR_26);
 }
 FUNC_12(150);


 FUNC_2(VAR_54, VAR_108->regfile.saveHTOTAL_B);
 FUNC_2(VAR_50, VAR_108->regfile.saveHBLANK_B);
 FUNC_2(VAR_52, VAR_108->regfile.saveHSYNC_B);
 FUNC_2(VAR_106, VAR_108->regfile.saveVTOTAL_B);
 FUNC_2(VAR_102, VAR_108->regfile.saveVBLANK_B);
 FUNC_2(VAR_104, VAR_108->regfile.saveVSYNC_B);
 if (!FUNC_0(VAR_107))
  FUNC_2(VAR_16, VAR_108->regfile.saveBCLRPAT_B);

 if (FUNC_0(VAR_107)) {
  FUNC_2(VAR_79, VAR_108->regfile.savePIPEB_DATA_M1);
  FUNC_2(VAR_80, VAR_108->regfile.savePIPEB_DATA_N1);
  FUNC_2(VAR_85, VAR_108->regfile.savePIPEB_LINK_M1);
  FUNC_2(VAR_86, VAR_108->regfile.savePIPEB_LINK_N1);

  FUNC_2(VAR_42, VAR_108->regfile.saveFDI_RXB_CTL);
  FUNC_2(VAR_44, VAR_108->regfile.saveFDI_TXB_CTL);

  FUNC_2(VAR_64, VAR_108->regfile.savePFB_CTL_1);
  FUNC_2(VAR_66, VAR_108->regfile.savePFB_WIN_SZ);
  FUNC_2(VAR_65, VAR_108->regfile.savePFB_WIN_POS);

  FUNC_2(VAR_88, VAR_108->regfile.saveTRANSBCONF);
  FUNC_2(VAR_94, VAR_108->regfile.saveTRANS_HTOTAL_B);
  FUNC_2(VAR_90, VAR_108->regfile.saveTRANS_HBLANK_B);
  FUNC_2(VAR_92, VAR_108->regfile.saveTRANS_HSYNC_B);
  FUNC_2(VAR_100, VAR_108->regfile.saveTRANS_VTOTAL_B);
  FUNC_2(VAR_96, VAR_108->regfile.saveTRANS_VBLANK_B);
  FUNC_2(VAR_98, VAR_108->regfile.saveTRANS_VSYNC_B);
 }


 FUNC_2(VAR_37, VAR_108->regfile.saveDSPBSIZE);
 FUNC_2(VAR_36, VAR_108->regfile.saveDSPBPOS);
 FUNC_2(VAR_78, VAR_108->regfile.savePIPEBSRC);
 FUNC_2(VAR_34, VAR_108->regfile.saveDSPBADDR);
 FUNC_2(VAR_38, VAR_108->regfile.saveDSPBSTRIDE);
 if (FUNC_4(VAR_107)->gen >= 4) {
  FUNC_2(VAR_39, VAR_108->regfile.saveDSPBSURF);
  FUNC_2(VAR_40, VAR_108->regfile.saveDSPBTILEOFF);
 }

 FUNC_2(VAR_77, VAR_108->regfile.savePIPEBCONF);

 FUNC_11(VAR_107, VAR_14);

 FUNC_2(VAR_35, VAR_108->regfile.saveDSPBCNTR);
 FUNC_2(VAR_34, FUNC_1(VAR_34));


 FUNC_2(VAR_19, VAR_108->regfile.saveCURAPOS);
 FUNC_2(VAR_18, VAR_108->regfile.saveCURACNTR);
 FUNC_2(VAR_17, VAR_108->regfile.saveCURABASE);
 FUNC_2(VAR_22, VAR_108->regfile.saveCURBPOS);
 FUNC_2(VAR_21, VAR_108->regfile.saveCURBCNTR);
 FUNC_2(VAR_20, VAR_108->regfile.saveCURBBASE);
 if (FUNC_6(VAR_107))
  FUNC_2(VAR_1, VAR_108->regfile.saveCURSIZE);


 if (FUNC_0(VAR_107))
  FUNC_2(VAR_11, VAR_108->regfile.saveADPA);
 else
  FUNC_2(VAR_0, VAR_108->regfile.saveADPA);


 if (FUNC_10(VAR_107)) {
  FUNC_2(VAR_4, VAR_108->regfile.saveDP_B);
  FUNC_2(VAR_5, VAR_108->regfile.saveDP_C);
  FUNC_2(VAR_6, VAR_108->regfile.saveDP_D);
 }


 return;
}
