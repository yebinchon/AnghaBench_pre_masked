
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct bnx2x_ilt {TYPE_3__* lines; TYPE_2__* clients; } ;
struct TYPE_5__ {scalar_t__ int_block; } ;
struct bnx2x {int flags; int dmae_ready; int mf_ov; int igu_sb_cnt; int igu_base_sb; int igu_dsb_id; int link_params; TYPE_1__ common; TYPE_4__* context; } ;
struct TYPE_8__ {int size; int cxt_mapping; int vcxt; } ;
struct TYPE_7__ {int size; int page_mapping; int page; } ;
struct TYPE_6__ {int start; } ;


 int VAR_0 ;
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
 int FUNC_0 (struct bnx2x*) ;
 struct bnx2x_ilt* FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_40 ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 scalar_t__ FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*) ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,char*,...) ;
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
 size_t VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 scalar_t__ VAR_74 ;
 scalar_t__ FUNC_11 (struct bnx2x*) ;
 scalar_t__ FUNC_12 (struct bnx2x*) ;
 int FUNC_13 (struct bnx2x*) ;
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
 int FUNC_14 (struct bnx2x*,int) ;
 int FUNC_15 (struct bnx2x*,int,int) ;
 int FUNC_16 (struct bnx2x*,scalar_t__,int) ;
 int VAR_86 ;
 int VAR_87 ;
 scalar_t__ FUNC_17 (int) ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 scalar_t__ FUNC_18 (int) ;
 int VAR_91 ;
 int VAR_92 ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (struct bnx2x*,int,int ,int ,int ,int) ;
 int FUNC_21 (struct bnx2x*) ;
 int FUNC_22 (struct bnx2x*,int) ;
 int FUNC_23 (struct bnx2x*,int ) ;
 int FUNC_24 (struct bnx2x*,int ,int) ;
 int FUNC_25 (struct bnx2x*) ;
 int FUNC_26 (struct bnx2x*) ;
 int FUNC_27 (struct bnx2x*,int) ;
 int FUNC_28 (struct bnx2x*) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (struct bnx2x*,int,int) ;
 int FUNC_31 (struct bnx2x*,int ) ;
 int FUNC_32 (struct bnx2x*,int ,int,int) ;
 int FUNC_33 (int) ;
 int VAR_93 ;

__attribute__((used)) static int FUNC_34(struct bnx2x *VAR_94)
{
 int VAR_95 = FUNC_2(VAR_94);
 int VAR_96 = FUNC_0(VAR_94);
 int VAR_97 = VAR_83 + VAR_96;
 struct bnx2x_ilt *VAR_98 = FUNC_1(VAR_94);
 u16 VAR_99;
 u32 VAR_100, VAR_101;
 u32 VAR_102, VAR_103, VAR_104;
 int VAR_105, VAR_106, VAR_107;

 FUNC_10(VAR_76, "starting func init  func %d\n", VAR_96);


 if (!FUNC_6(VAR_94)) {
  VAR_107 = FUNC_28(VAR_94);
  if (VAR_107) {
   FUNC_21(VAR_94);
   return VAR_107;
  }
 }


 if (VAR_94->common.int_block == VAR_74) {
  VAR_100 = (VAR_95 ? VAR_46 : VAR_45);
  VAR_101 = FUNC_14(VAR_94, VAR_100);
  VAR_101 |= VAR_44;
  FUNC_15(VAR_94, VAR_100, VAR_101);
 }

 FUNC_24(VAR_94, VAR_22, VAR_97);
 FUNC_24(VAR_94, VAR_23, VAR_97);

 VAR_98 = FUNC_1(VAR_94);
 VAR_99 = VAR_98->clients[VAR_71].start;

 if (FUNC_12(VAR_94))
  VAR_99 += VAR_38/VAR_72;
 VAR_99 = FUNC_27(VAR_94, VAR_99);




 VAR_99 = VAR_98->clients[VAR_71].start;
 for (VAR_105 = 0; VAR_105 < FUNC_13(VAR_94); VAR_105++) {
  VAR_98->lines[VAR_99 + VAR_105].page = VAR_94->context[VAR_105].vcxt;
  VAR_98->lines[VAR_99 + VAR_105].page_mapping =
   VAR_94->context[VAR_105].cxt_mapping;
  VAR_98->lines[VAR_99 + VAR_105].size = VAR_94->context[VAR_105].size;
 }

 FUNC_23(VAR_94, VAR_73);

 if (!FUNC_8(VAR_94)) {
  FUNC_25(VAR_94);
  FUNC_15(VAR_94, VAR_84, 0);
  FUNC_10(VAR_77, "NIC MODE disabled\n");
 } else {

  FUNC_15(VAR_94, VAR_84, 1);
  FUNC_10(VAR_77, "NIC MODE configured\n");
 }

 if (!FUNC_6(VAR_94)) {
  u32 VAR_108 = VAR_59;




  if (!(VAR_94->flags & VAR_89))
   VAR_108 |= VAR_60;






  FUNC_33(20);





  FUNC_15(VAR_94, VAR_81, 1);

  FUNC_15(VAR_94, VAR_64, VAR_108);
 }

 VAR_94->dmae_ready = 1;

 FUNC_24(VAR_94, VAR_20, VAR_97);

 if (!FUNC_6(VAR_94))
  FUNC_15(VAR_94, VAR_82, VAR_96);

 FUNC_24(VAR_94, VAR_5, VAR_97);
 FUNC_24(VAR_94, VAR_12, VAR_97);
 FUNC_24(VAR_94, VAR_18, VAR_97);
 FUNC_24(VAR_94, VAR_25, VAR_97);
 FUNC_24(VAR_94, VAR_16, VAR_97);
 FUNC_24(VAR_94, VAR_26, VAR_97);
 FUNC_24(VAR_94, VAR_30, VAR_97);
 FUNC_24(VAR_94, VAR_7, VAR_97);
 FUNC_24(VAR_94, VAR_34, VAR_97);
 FUNC_24(VAR_94, VAR_29, VAR_97);
 FUNC_24(VAR_94, VAR_33, VAR_97);
 FUNC_24(VAR_94, VAR_11, VAR_97);
 FUNC_24(VAR_94, VAR_37, VAR_97);

 if (!FUNC_6(VAR_94))
  FUNC_15(VAR_94, VAR_85, 1);

 if (!FUNC_6(VAR_94)) {
  FUNC_15(VAR_94, VAR_86, VAR_39 + VAR_96);
  FUNC_15(VAR_94, VAR_88, VAR_39 + VAR_96);
  FUNC_15(VAR_94, VAR_41, VAR_39 + VAR_96);
  FUNC_15(VAR_94, VAR_91, VAR_39 + VAR_96);
 }
 FUNC_24(VAR_94, VAR_24, VAR_97);

 FUNC_24(VAR_94, VAR_27, VAR_97);
 FUNC_24(VAR_94, VAR_13, VAR_97);

 FUNC_26(VAR_94);

 FUNC_24(VAR_94, VAR_6, VAR_97);
 FUNC_24(VAR_94, VAR_21, VAR_97);
 FUNC_24(VAR_94, VAR_28, VAR_97);
 FUNC_24(VAR_94, VAR_10, VAR_97);
 FUNC_24(VAR_94, VAR_32, VAR_97);
 FUNC_24(VAR_94, VAR_36, VAR_97);
 FUNC_24(VAR_94, VAR_31, VAR_97);
 FUNC_24(VAR_94, VAR_35, VAR_97);
 FUNC_24(VAR_94, VAR_19, VAR_97);
 if (!FUNC_6(VAR_94))
  FUNC_15(VAR_94, VAR_80, 0);

 FUNC_24(VAR_94, VAR_8, VAR_97);

 FUNC_24(VAR_94, VAR_9, VAR_97);

 if (!FUNC_6(VAR_94))
  FUNC_15(VAR_94, VAR_40, 1);

 if (FUNC_11(VAR_94)) {
  FUNC_15(VAR_94, VAR_78 + VAR_95*8, 1);
  FUNC_15(VAR_94, VAR_79 + VAR_95*8, VAR_94->mf_ov);
 }

 FUNC_24(VAR_94, VAR_17, VAR_97);


 if (VAR_94->common.int_block == VAR_74) {
  if (FUNC_5(VAR_94)) {
   FUNC_15(VAR_94, VAR_75 + VAR_96*4, 0);

   FUNC_15(VAR_94, VAR_48 + VAR_95*8, 0);
   FUNC_15(VAR_94, VAR_51 + VAR_95*8, 0);
  }
  FUNC_24(VAR_94, VAR_14, VAR_97);

 } else {
  int VAR_109, VAR_110, VAR_111;

  FUNC_15(VAR_94, VAR_75 + VAR_96*4, 0);

  if (!FUNC_6(VAR_94)) {
   FUNC_15(VAR_94, VAR_61, 0);
   FUNC_15(VAR_94, VAR_70, 0);
  }

  FUNC_24(VAR_94, VAR_15, VAR_97);

  if (!FUNC_6(VAR_94)) {
   int VAR_112 = 0;
   VAR_109 = FUNC_4(VAR_94) ?
    VAR_54 : VAR_58;
   for (VAR_110 = 0; VAR_110 < VAR_94->igu_sb_cnt; VAR_110++) {
    VAR_111 = (VAR_94->igu_base_sb + VAR_110) *
     VAR_109;

    for (VAR_105 = 0; VAR_105 < VAR_109; VAR_105++) {
     VAR_100 = VAR_65 +
       (VAR_111 + VAR_105) * 4;
     FUNC_15(VAR_94, VAR_100, 0);
    }

    FUNC_20(VAR_94, VAR_94->igu_base_sb + VAR_110,
          VAR_90, 0, VAR_55, 1);
    FUNC_22(VAR_94,
         VAR_94->igu_base_sb + VAR_110);
   }


   VAR_109 = FUNC_4(VAR_94) ?
    VAR_53 : VAR_57;

   if (FUNC_7(VAR_94))
    VAR_112 = FUNC_0(VAR_94);
   else
    VAR_112 = FUNC_3(VAR_94);

   VAR_111 = (FUNC_4(VAR_94) ?
           VAR_52 + VAR_112 :
           VAR_56 + VAR_112);





   for (VAR_105 = 0; VAR_105 < (VAR_109 * VAR_43);
        VAR_105 += VAR_43) {
    VAR_100 = VAR_65 +
       (VAR_111 + VAR_105)*4;
    FUNC_15(VAR_94, VAR_100, 0);
   }

   if (FUNC_4(VAR_94)) {
    FUNC_20(VAR_94, VAR_94->igu_dsb_id,
          VAR_90, 0, VAR_55, 1);
    FUNC_20(VAR_94, VAR_94->igu_dsb_id,
          VAR_42, 0, VAR_55, 1);
    FUNC_20(VAR_94, VAR_94->igu_dsb_id,
          VAR_92, 0, VAR_55, 1);
    FUNC_20(VAR_94, VAR_94->igu_dsb_id,
          VAR_87, 0, VAR_55, 1);
    FUNC_20(VAR_94, VAR_94->igu_dsb_id,
          VAR_0, 0, VAR_55, 1);
   } else {
    FUNC_20(VAR_94, VAR_94->igu_dsb_id,
          VAR_90, 0, VAR_55, 1);
    FUNC_20(VAR_94, VAR_94->igu_dsb_id,
          VAR_0, 0, VAR_55, 1);
   }
   FUNC_22(VAR_94, VAR_94->igu_dsb_id);



   FUNC_15(VAR_94, VAR_66, 0);
   FUNC_15(VAR_94, VAR_67, 0);
   FUNC_15(VAR_94, VAR_68, 0);
   FUNC_15(VAR_94, VAR_69, 0);
   FUNC_15(VAR_94, VAR_62, 0);
   FUNC_15(VAR_94, VAR_63, 0);
  }
 }


 FUNC_15(VAR_94, 0x2114, 0xffffffff);
 FUNC_15(VAR_94, 0x2120, 0xffffffff);

 if (FUNC_6(VAR_94)) {
  VAR_103 = VAR_50 / 2;
  VAR_102 = VAR_49 +
    FUNC_2(VAR_94) * (VAR_103 * 4);
  VAR_104 = VAR_47;
  VAR_106 = 8;

  VAR_101 = FUNC_14(VAR_94, VAR_104);
  if (VAR_101)
   FUNC_10(VAR_76,
      "Hmmm... Parity errors in HC block during function init (0x%x)!\n",
      VAR_101);


  for (VAR_105 = VAR_102;
       VAR_105 < VAR_102 + VAR_103 * 4;
       VAR_105 += VAR_106) {
   FUNC_30(VAR_94, VAR_105, VAR_106 / 4);
   FUNC_32(VAR_94, FUNC_31(VAR_94, VAR_93),
      VAR_105, VAR_106 / 4);
  }

  FUNC_14(VAR_94, VAR_104);
 }
 FUNC_29(&VAR_94->link_params);

 return 0;
}
