
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* savePIPEB_DP_LINK_N; void* savePIPEA_DP_LINK_N; void* savePIPEB_DP_LINK_M; void* savePIPEA_DP_LINK_M; void* savePIPEB_GMCH_DATA_N; void* savePIPEA_GMCH_DATA_N; void* savePIPEB_GMCH_DATA_M; void* savePIPEA_GMCH_DATA_M; void* saveDP_D; void* saveDP_C; void* saveDP_B; void* saveADPA; void** saveFENCE; void* savePIPEBSTAT; void* saveDSPBTILEOFF; void* saveDSPBSURF; void* saveDSPBADDR; void* saveDSPBPOS; void* saveDSPBSIZE; void* saveDSPBSTRIDE; void* saveDSPBCNTR; void* saveTRANS_VSYNC_B; void* saveTRANS_VBLANK_B; void* saveTRANS_VTOTAL_B; void* saveTRANS_HSYNC_B; void* saveTRANS_HBLANK_B; void* saveTRANS_HTOTAL_B; void* saveTRANSBCONF; void* savePFB_WIN_POS; void* savePFB_WIN_SZ; void* savePFB_CTL_1; void* saveFDI_RXB_CTL; void* saveFDI_TXB_CTL; void* savePIPEB_LINK_N1; void* savePIPEB_LINK_M1; void* savePIPEB_DATA_N1; void* savePIPEB_DATA_M1; void* saveBCLRPAT_B; void* saveVSYNC_B; void* saveVBLANK_B; void* saveVTOTAL_B; void* saveHSYNC_B; void* saveHBLANK_B; void* saveHTOTAL_B; void* saveDPLL_B_MD; void* saveDPLL_B; void* saveFPB1; void* saveFPB0; void* savePIPEBSRC; void* savePIPEBCONF; void* savePIPEASTAT; void* saveDSPATILEOFF; void* saveDSPASURF; void* saveDSPAADDR; void* saveDSPAPOS; void* saveDSPASIZE; void* saveDSPASTRIDE; void* saveDSPACNTR; void* saveTRANS_VSYNC_A; void* saveTRANS_VBLANK_A; void* saveTRANS_VTOTAL_A; void* saveTRANS_HSYNC_A; void* saveTRANS_HBLANK_A; void* saveTRANS_HTOTAL_A; void* saveTRANSACONF; void* savePFA_WIN_POS; void* savePFA_WIN_SZ; void* savePFA_CTL_1; void* saveFDI_RXA_CTL; void* saveFDI_TXA_CTL; void* savePIPEA_LINK_N1; void* savePIPEA_LINK_M1; void* savePIPEA_DATA_N1; void* savePIPEA_DATA_M1; void* saveBCLRPAT_A; void* saveVSYNC_A; void* saveVBLANK_A; void* saveVTOTAL_A; void* saveHSYNC_A; void* saveHBLANK_A; void* saveHTOTAL_A; void* saveDPLL_A_MD; void* saveDPLL_A; void* saveFPA1; void* saveFPA0; void* savePIPEASRC; void* savePIPEACONF; void* saveDISP_ARB_CTL; void* savePCH_DREF_CONTROL; void* saveCURSIZE; void* saveCURBBASE; void* saveCURBPOS; void* saveCURBCNTR; void* saveCURABASE; void* saveCURAPOS; void* saveCURACNTR; } ;
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
 scalar_t__ FUNC_0 (struct drm_device*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (struct drm_device*) ;
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
 int VAR_107 ;
 int FUNC_9 (struct drm_device*,int ) ;

void FUNC_10(struct drm_device *VAR_108)
{
 struct drm_i915_private *VAR_109 = VAR_108->dev_private;
 int VAR_110;


 VAR_109->regfile.saveCURACNTR = FUNC_1(VAR_17);
 VAR_109->regfile.saveCURAPOS = FUNC_1(VAR_18);
 VAR_109->regfile.saveCURABASE = FUNC_1(VAR_16);
 VAR_109->regfile.saveCURBCNTR = FUNC_1(VAR_20);
 VAR_109->regfile.saveCURBPOS = FUNC_1(VAR_21);
 VAR_109->regfile.saveCURBBASE = FUNC_1(VAR_19);
 if (FUNC_5(VAR_108))
  VAR_109->regfile.saveCURSIZE = FUNC_1(VAR_1);

 if (FUNC_0(VAR_108)) {
  VAR_109->regfile.savePCH_DREF_CONTROL = FUNC_1(VAR_11);
  VAR_109->regfile.saveDISP_ARB_CTL = FUNC_1(VAR_2);
 }


 VAR_109->regfile.savePIPEACONF = FUNC_1(VAR_66);
 VAR_109->regfile.savePIPEASRC = FUNC_1(VAR_67);
 if (FUNC_0(VAR_108)) {
  VAR_109->regfile.saveFPA0 = FUNC_1(VAR_56);
  VAR_109->regfile.saveFPA1 = FUNC_1(VAR_57);
  VAR_109->regfile.saveDPLL_A = FUNC_1(VAR_54);
 } else {
  VAR_109->regfile.saveFPA0 = FUNC_1(VAR_44);
  VAR_109->regfile.saveFPA1 = FUNC_1(VAR_45);
  VAR_109->regfile.saveDPLL_A = FUNC_1(VAR_22);
 }
 if (FUNC_3(VAR_108)->gen >= 4 && !FUNC_0(VAR_108))
  VAR_109->regfile.saveDPLL_A_MD = FUNC_1(VAR_23);
 VAR_109->regfile.saveHTOTAL_A = FUNC_1(VAR_52);
 VAR_109->regfile.saveHBLANK_A = FUNC_1(VAR_48);
 VAR_109->regfile.saveHSYNC_A = FUNC_1(VAR_50);
 VAR_109->regfile.saveVTOTAL_A = FUNC_1(VAR_106);
 VAR_109->regfile.saveVBLANK_A = FUNC_1(VAR_102);
 VAR_109->regfile.saveVSYNC_A = FUNC_1(VAR_104);
 if (!FUNC_0(VAR_108))
  VAR_109->regfile.saveBCLRPAT_A = FUNC_1(VAR_14);

 if (FUNC_0(VAR_108)) {
  VAR_109->regfile.savePIPEA_DATA_M1 = FUNC_1(VAR_69);
  VAR_109->regfile.savePIPEA_DATA_N1 = FUNC_1(VAR_70);
  VAR_109->regfile.savePIPEA_LINK_M1 = FUNC_1(VAR_75);
  VAR_109->regfile.savePIPEA_LINK_N1 = FUNC_1(VAR_76);

  VAR_109->regfile.saveFDI_TXA_CTL = FUNC_1(VAR_42);
  VAR_109->regfile.saveFDI_RXA_CTL = FUNC_1(VAR_40);

  VAR_109->regfile.savePFA_CTL_1 = FUNC_1(VAR_60);
  VAR_109->regfile.savePFA_WIN_SZ = FUNC_1(VAR_62);
  VAR_109->regfile.savePFA_WIN_POS = FUNC_1(VAR_61);

  VAR_109->regfile.saveTRANSACONF = FUNC_1(VAR_88);
  VAR_109->regfile.saveTRANS_HTOTAL_A = FUNC_1(VAR_94);
  VAR_109->regfile.saveTRANS_HBLANK_A = FUNC_1(VAR_90);
  VAR_109->regfile.saveTRANS_HSYNC_A = FUNC_1(VAR_92);
  VAR_109->regfile.saveTRANS_VTOTAL_A = FUNC_1(VAR_100);
  VAR_109->regfile.saveTRANS_VBLANK_A = FUNC_1(VAR_96);
  VAR_109->regfile.saveTRANS_VSYNC_A = FUNC_1(VAR_98);
 }

 VAR_109->regfile.saveDSPACNTR = FUNC_1(VAR_27);
 VAR_109->regfile.saveDSPASTRIDE = FUNC_1(VAR_30);
 VAR_109->regfile.saveDSPASIZE = FUNC_1(VAR_29);
 VAR_109->regfile.saveDSPAPOS = FUNC_1(VAR_28);
 VAR_109->regfile.saveDSPAADDR = FUNC_1(VAR_26);
 if (FUNC_3(VAR_108)->gen >= 4) {
  VAR_109->regfile.saveDSPASURF = FUNC_1(VAR_31);
  VAR_109->regfile.saveDSPATILEOFF = FUNC_1(VAR_32);
 }
 FUNC_9(VAR_108, VAR_12);
 VAR_109->regfile.savePIPEASTAT = FUNC_1(VAR_68);


 VAR_109->regfile.savePIPEBCONF = FUNC_1(VAR_77);
 VAR_109->regfile.savePIPEBSRC = FUNC_1(VAR_78);
 if (FUNC_0(VAR_108)) {
  VAR_109->regfile.saveFPB0 = FUNC_1(VAR_58);
  VAR_109->regfile.saveFPB1 = FUNC_1(VAR_59);
  VAR_109->regfile.saveDPLL_B = FUNC_1(VAR_55);
 } else {
  VAR_109->regfile.saveFPB0 = FUNC_1(VAR_46);
  VAR_109->regfile.saveFPB1 = FUNC_1(VAR_47);
  VAR_109->regfile.saveDPLL_B = FUNC_1(VAR_24);
 }
 if (FUNC_3(VAR_108)->gen >= 4 && !FUNC_0(VAR_108))
  VAR_109->regfile.saveDPLL_B_MD = FUNC_1(VAR_25);
 VAR_109->regfile.saveHTOTAL_B = FUNC_1(VAR_53);
 VAR_109->regfile.saveHBLANK_B = FUNC_1(VAR_49);
 VAR_109->regfile.saveHSYNC_B = FUNC_1(VAR_51);
 VAR_109->regfile.saveVTOTAL_B = FUNC_1(VAR_107);
 VAR_109->regfile.saveVBLANK_B = FUNC_1(VAR_103);
 VAR_109->regfile.saveVSYNC_B = FUNC_1(VAR_105);
 if (!FUNC_0(VAR_108))
  VAR_109->regfile.saveBCLRPAT_B = FUNC_1(VAR_15);

 if (FUNC_0(VAR_108)) {
  VAR_109->regfile.savePIPEB_DATA_M1 = FUNC_1(VAR_80);
  VAR_109->regfile.savePIPEB_DATA_N1 = FUNC_1(VAR_81);
  VAR_109->regfile.savePIPEB_LINK_M1 = FUNC_1(VAR_86);
  VAR_109->regfile.savePIPEB_LINK_N1 = FUNC_1(VAR_87);

  VAR_109->regfile.saveFDI_TXB_CTL = FUNC_1(VAR_43);
  VAR_109->regfile.saveFDI_RXB_CTL = FUNC_1(VAR_41);

  VAR_109->regfile.savePFB_CTL_1 = FUNC_1(VAR_63);
  VAR_109->regfile.savePFB_WIN_SZ = FUNC_1(VAR_65);
  VAR_109->regfile.savePFB_WIN_POS = FUNC_1(VAR_64);

  VAR_109->regfile.saveTRANSBCONF = FUNC_1(VAR_89);
  VAR_109->regfile.saveTRANS_HTOTAL_B = FUNC_1(VAR_95);
  VAR_109->regfile.saveTRANS_HBLANK_B = FUNC_1(VAR_91);
  VAR_109->regfile.saveTRANS_HSYNC_B = FUNC_1(VAR_93);
  VAR_109->regfile.saveTRANS_VTOTAL_B = FUNC_1(VAR_101);
  VAR_109->regfile.saveTRANS_VBLANK_B = FUNC_1(VAR_97);
  VAR_109->regfile.saveTRANS_VSYNC_B = FUNC_1(VAR_99);
 }

 VAR_109->regfile.saveDSPBCNTR = FUNC_1(VAR_34);
 VAR_109->regfile.saveDSPBSTRIDE = FUNC_1(VAR_37);
 VAR_109->regfile.saveDSPBSIZE = FUNC_1(VAR_36);
 VAR_109->regfile.saveDSPBPOS = FUNC_1(VAR_35);
 VAR_109->regfile.saveDSPBADDR = FUNC_1(VAR_33);
 if (FUNC_3(VAR_108)->gen >= 4) {
  VAR_109->regfile.saveDSPBSURF = FUNC_1(VAR_38);
  VAR_109->regfile.saveDSPBTILEOFF = FUNC_1(VAR_39);
 }
 FUNC_9(VAR_108, VAR_13);
 VAR_109->regfile.savePIPEBSTAT = FUNC_1(VAR_79);


 switch (FUNC_3(VAR_108)->gen) {
 case 7:
 case 6:
  for (VAR_110 = 0; VAR_110 < 16; VAR_110++)
   VAR_109->regfile.saveFENCE[VAR_110] = FUNC_2(VAR_9 + (VAR_110 * 8));
  break;
 case 5:
 case 4:
  for (VAR_110 = 0; VAR_110 < 16; VAR_110++)
   VAR_109->regfile.saveFENCE[VAR_110] = FUNC_2(VAR_8 + (VAR_110 * 8));
  break;
 case 3:
  if (FUNC_6(VAR_108) || FUNC_7(VAR_108) || FUNC_4(VAR_108))
   for (VAR_110 = 0; VAR_110 < 8; VAR_110++)
    VAR_109->regfile.saveFENCE[VAR_110+8] = FUNC_1(VAR_7 + (VAR_110 * 4));
 case 2:
  for (VAR_110 = 0; VAR_110 < 8; VAR_110++)
   VAR_109->regfile.saveFENCE[VAR_110] = FUNC_1(VAR_6 + (VAR_110 * 4));
  break;
 }


 if (FUNC_0(VAR_108))
  VAR_109->regfile.saveADPA = FUNC_1(VAR_10);
 else
  VAR_109->regfile.saveADPA = FUNC_1(VAR_0);


 if (FUNC_8(VAR_108)) {
  VAR_109->regfile.saveDP_B = FUNC_1(VAR_3);
  VAR_109->regfile.saveDP_C = FUNC_1(VAR_4);
  VAR_109->regfile.saveDP_D = FUNC_1(VAR_5);
  VAR_109->regfile.savePIPEA_GMCH_DATA_M = FUNC_1(VAR_73);
  VAR_109->regfile.savePIPEB_GMCH_DATA_M = FUNC_1(VAR_84);
  VAR_109->regfile.savePIPEA_GMCH_DATA_N = FUNC_1(VAR_74);
  VAR_109->regfile.savePIPEB_GMCH_DATA_N = FUNC_1(VAR_85);
  VAR_109->regfile.savePIPEA_DP_LINK_M = FUNC_1(VAR_71);
  VAR_109->regfile.savePIPEB_DP_LINK_M = FUNC_1(VAR_82);
  VAR_109->regfile.savePIPEA_DP_LINK_N = FUNC_1(VAR_72);
  VAR_109->regfile.savePIPEB_DP_LINK_N = FUNC_1(VAR_83);
 }


 return;
}
