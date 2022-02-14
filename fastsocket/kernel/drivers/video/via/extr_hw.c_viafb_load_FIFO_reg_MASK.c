
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct io_register {int dummy; } ;
struct TYPE_28__ {int reg_num; struct io_register* reg; } ;
struct TYPE_27__ {int reg_num; struct io_register* reg; } ;
struct TYPE_26__ {int reg_num; struct io_register* reg; } ;
struct TYPE_25__ {scalar_t__ gfx_chip_name; } ;
struct TYPE_24__ {int reg_num; struct io_register* reg; } ;
struct TYPE_23__ {int reg_num; struct io_register* reg; } ;
struct TYPE_22__ {int reg_num; struct io_register* reg; } ;
struct TYPE_21__ {int reg_num; struct io_register* reg; } ;
struct TYPE_20__ {int reg_num; struct io_register* reg; } ;
struct TYPE_19__ {TYPE_2__ iga2_fifo_depth_select_reg; TYPE_7__ iga1_fifo_depth_select_reg; } ;
struct TYPE_18__ {TYPE_5__ iga2_display_queue_expire_num_reg; TYPE_1__ iga1_display_queue_expire_num_reg; } ;
struct TYPE_17__ {TYPE_4__ iga2_fifo_high_threshold_select_reg; TYPE_9__ iga1_fifo_high_threshold_select_reg; } ;
struct TYPE_16__ {TYPE_3__ iga2_fifo_threshold_select_reg; TYPE_8__ iga1_fifo_threshold_select_reg; } ;
struct TYPE_15__ {TYPE_6__* chip_info; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
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
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
 scalar_t__ VAR_64 ;
 scalar_t__ VAR_65 ;
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
 TYPE_14__ VAR_84 ;
 TYPE_13__ VAR_85 ;
 TYPE_12__ VAR_86 ;
 TYPE_11__ VAR_87 ;
 int FUNC_8 (int,int,struct io_register*,int ) ;
 TYPE_10__* VAR_88 ;

void FUNC_9(int VAR_89, int VAR_90, int VAR_91)
{
 int VAR_92;
 int VAR_93;
 struct io_register *VAR_94 = ((void*)0);
 int VAR_95 = 0, VAR_96 =
     0, VAR_97 = 0, VAR_98 = 0;
 int VAR_99 = 0, VAR_100 =
     0, VAR_101 = 0, VAR_102 = 0;

 if (VAR_89 == VAR_16) {
  if (VAR_88->chip_info->gfx_chip_name == VAR_59) {
   VAR_95 = VAR_19;
   VAR_96 = VAR_20;
   VAR_97 =
       VAR_18;


   if ((VAR_90 > 1280) && (VAR_91 > 1024))
    VAR_98 = 16;
   else
    VAR_98 =
        VAR_17;

  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_63) {
   VAR_95 = VAR_51;
   VAR_96 = VAR_52;
   VAR_97 =
       VAR_50;
   VAR_98 =
       VAR_49;



   if ((VAR_90 > 1280) && (VAR_91 > 1024))
    VAR_98 = 16;
   else
    VAR_98 =
        VAR_49;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_57) {
   VAR_95 = VAR_2;
   VAR_96 = VAR_3;
   VAR_97 =
       VAR_1;



   if ((VAR_90 > 1280) && (VAR_91 > 1024))
    VAR_98 = 16;
   else
    VAR_98 =
        VAR_0;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_58) {
   VAR_95 = VAR_10;
   VAR_96 = VAR_11;
   VAR_97 =
       VAR_9;
   VAR_98 =
       VAR_8;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_60) {
   VAR_95 = VAR_27;
   VAR_96 = VAR_28;
   VAR_97 =
       VAR_26;
   VAR_98 =
       VAR_25;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_61) {
   VAR_95 = VAR_35;
   VAR_96 = VAR_36;
   VAR_97 =
       VAR_34;
   VAR_98 =
       VAR_33;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_62) {
   VAR_95 = VAR_43;
   VAR_96 = VAR_44;
   VAR_97 =
       VAR_42;
   VAR_98 =
       VAR_41;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_64) {
   VAR_95 = VAR_70;
   VAR_96 = VAR_71;
   VAR_97 =
       VAR_69;
   VAR_98 =
       VAR_68;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_65) {
   VAR_95 = VAR_78;
   VAR_96 = VAR_79;
   VAR_97 =
       VAR_77;
   VAR_98 =
       VAR_76;
  }


  VAR_92 = FUNC_1(VAR_95);
  VAR_93 =
      VAR_84.iga1_fifo_depth_select_reg.reg_num;
  VAR_94 = VAR_84.iga1_fifo_depth_select_reg.reg;
  FUNC_8(VAR_92, VAR_93, VAR_94, VAR_67);


  VAR_92 = FUNC_3(VAR_96);
  VAR_93 =
      VAR_87.
      iga1_fifo_threshold_select_reg.reg_num;
  VAR_94 =
      VAR_87.
      iga1_fifo_threshold_select_reg.reg;
  FUNC_8(VAR_92, VAR_93, VAR_94, VAR_67);


  VAR_92 =
      FUNC_2(VAR_97);
  VAR_93 =
      VAR_86.
      iga1_fifo_high_threshold_select_reg.reg_num;
  VAR_94 =
      VAR_86.
      iga1_fifo_high_threshold_select_reg.reg;
  FUNC_8(VAR_92, VAR_93, VAR_94, VAR_67);


  VAR_92 =
      FUNC_0
      (VAR_98);
  VAR_93 =
      VAR_85.
      iga1_display_queue_expire_num_reg.reg_num;
  VAR_94 =
      VAR_85.
      iga1_display_queue_expire_num_reg.reg;
  FUNC_8(VAR_92, VAR_93, VAR_94, VAR_67);

 } else {
  if (VAR_88->chip_info->gfx_chip_name == VAR_59) {
   VAR_99 = VAR_23;
   VAR_100 = VAR_24;
   VAR_101 =
       VAR_22;



   if ((VAR_90 > 1280) && (VAR_91 > 1024))
    VAR_102 = 16;
   else
    VAR_102 =
        VAR_21;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_63) {
   VAR_99 = VAR_55;
   VAR_100 = VAR_56;
   VAR_101 =
       VAR_54;



   if ((VAR_90 > 1280) && (VAR_91 > 1024))
    VAR_102 = 16;
   else
    VAR_102 =
        VAR_53;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_57) {
   VAR_99 = VAR_6;
   VAR_100 = VAR_7;
   VAR_101 =
       VAR_5;



   if ((VAR_90 > 1280) && (VAR_91 > 1024))
    VAR_102 = 16;
   else
    VAR_102 =
        VAR_4;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_58) {
   VAR_99 = VAR_14;
   VAR_100 = VAR_15;
   VAR_101 =
       VAR_13;
   VAR_102 =
       VAR_12;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_60) {
   VAR_99 = VAR_31;
   VAR_100 = VAR_32;
   VAR_101 =
       VAR_30;
   VAR_102 =
       VAR_29;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_61) {
   VAR_99 = VAR_39;
   VAR_100 = VAR_40;
   VAR_101 =
       VAR_38;
   VAR_102 =
       VAR_37;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_62) {
   VAR_99 = VAR_47;
   VAR_100 = VAR_48;
   VAR_101 =
       VAR_46;
   VAR_102 =
       VAR_45;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_64) {
   VAR_99 = VAR_74;
   VAR_100 = VAR_75;
   VAR_101 =
       VAR_73;
   VAR_102 =
       VAR_72;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_65) {
   VAR_99 = VAR_82;
   VAR_100 = VAR_83;
   VAR_101 =
       VAR_81;
   VAR_102 =
       VAR_80;
  }

  if (VAR_88->chip_info->gfx_chip_name == VAR_59) {

   VAR_92 =
       FUNC_5(VAR_99)
       - 1;

   VAR_93 =
       VAR_84.
       iga2_fifo_depth_select_reg.reg_num;
   VAR_94 =
       VAR_84.
       iga2_fifo_depth_select_reg.reg;
   FUNC_8(VAR_92,
    VAR_93, VAR_94, VAR_66);
  } else {


   VAR_92 =
       FUNC_5(VAR_99);
   VAR_93 =
       VAR_84.
       iga2_fifo_depth_select_reg.reg_num;
   VAR_94 =
       VAR_84.
       iga2_fifo_depth_select_reg.reg;
   FUNC_8(VAR_92,
    VAR_93, VAR_94, VAR_66);
  }


  VAR_92 = FUNC_7(VAR_100);
  VAR_93 =
      VAR_87.
      iga2_fifo_threshold_select_reg.reg_num;
  VAR_94 =
      VAR_87.
      iga2_fifo_threshold_select_reg.reg;
  FUNC_8(VAR_92, VAR_93, VAR_94, VAR_66);


  VAR_92 =
      FUNC_6(VAR_101);
  VAR_93 =
      VAR_86.
      iga2_fifo_high_threshold_select_reg.reg_num;
  VAR_94 =
      VAR_86.
      iga2_fifo_high_threshold_select_reg.reg;
  FUNC_8(VAR_92, VAR_93, VAR_94, VAR_66);


  VAR_92 =
      FUNC_4
      (VAR_102);
  VAR_93 =
      VAR_85.
      iga2_display_queue_expire_num_reg.reg_num;
  VAR_94 =
      VAR_85.
      iga2_display_queue_expire_num_reg.reg;
  FUNC_8(VAR_92, VAR_93, VAR_94, VAR_66);

 }

}
