
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_56__ TYPE_9__ ;
typedef struct TYPE_55__ TYPE_8__ ;
typedef struct TYPE_54__ TYPE_7__ ;
typedef struct TYPE_53__ TYPE_6__ ;
typedef struct TYPE_52__ TYPE_5__ ;
typedef struct TYPE_51__ TYPE_4__ ;
typedef struct TYPE_50__ TYPE_3__ ;
typedef struct TYPE_49__ TYPE_2__ ;
typedef struct TYPE_48__ TYPE_28__ ;
typedef struct TYPE_47__ TYPE_27__ ;
typedef struct TYPE_46__ TYPE_26__ ;
typedef struct TYPE_45__ TYPE_25__ ;
typedef struct TYPE_44__ TYPE_24__ ;
typedef struct TYPE_43__ TYPE_23__ ;
typedef struct TYPE_42__ TYPE_22__ ;
typedef struct TYPE_41__ TYPE_21__ ;
typedef struct TYPE_40__ TYPE_20__ ;
typedef struct TYPE_39__ TYPE_1__ ;
typedef struct TYPE_38__ TYPE_19__ ;
typedef struct TYPE_37__ TYPE_18__ ;
typedef struct TYPE_36__ TYPE_17__ ;
typedef struct TYPE_35__ TYPE_16__ ;
typedef struct TYPE_34__ TYPE_15__ ;
typedef struct TYPE_33__ TYPE_14__ ;
typedef struct TYPE_32__ TYPE_13__ ;
typedef struct TYPE_31__ TYPE_12__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


struct io_register {int dummy; } ;
struct display_timing {int ver_sync_end; int ver_sync_start; int ver_blank_end; int ver_blank_start; int ver_addr; int ver_total; int hor_sync_end; int hor_sync_start; int hor_blank_end; int hor_blank_start; int hor_addr; int hor_total; } ;
struct TYPE_56__ {int reg_num; struct io_register* reg; } ;
struct TYPE_55__ {int reg_num; struct io_register* reg; } ;
struct TYPE_54__ {int reg_num; struct io_register* reg; } ;
struct TYPE_53__ {int reg_num; struct io_register* reg; } ;
struct TYPE_52__ {int reg_num; struct io_register* reg; } ;
struct TYPE_51__ {int reg_num; struct io_register* reg; } ;
struct TYPE_50__ {int reg_num; struct io_register* reg; } ;
struct TYPE_49__ {int reg_num; struct io_register* reg; } ;
struct TYPE_35__ {int reg_num; struct io_register* reg; } ;
struct TYPE_34__ {int reg_num; struct io_register* reg; } ;
struct TYPE_33__ {int reg_num; struct io_register* reg; } ;
struct TYPE_32__ {int reg_num; struct io_register* reg; } ;
struct TYPE_31__ {int reg_num; struct io_register* reg; } ;
struct TYPE_30__ {int reg_num; struct io_register* reg; } ;
struct TYPE_29__ {int reg_num; struct io_register* reg; } ;
struct TYPE_48__ {TYPE_16__ ver_sync_end; TYPE_15__ ver_sync_start; TYPE_14__ ver_blank_end; TYPE_13__ ver_blank_start; TYPE_12__ ver_addr; TYPE_11__ ver_total; TYPE_10__ hor_sync_end; TYPE_9__ hor_sync_start; TYPE_8__ hor_blank_end; TYPE_7__ hor_blank_start; TYPE_6__ hor_addr; TYPE_5__ hor_total; } ;
struct TYPE_39__ {int reg_num; struct io_register* reg; } ;
struct TYPE_45__ {int reg_num; struct io_register* reg; } ;
struct TYPE_44__ {int reg_num; struct io_register* reg; } ;
struct TYPE_43__ {int reg_num; struct io_register* reg; } ;
struct TYPE_42__ {int reg_num; struct io_register* reg; } ;
struct TYPE_40__ {int reg_num; struct io_register* reg; } ;
struct TYPE_38__ {int reg_num; struct io_register* reg; } ;
struct TYPE_37__ {int reg_num; struct io_register* reg; } ;
struct TYPE_36__ {int reg_num; struct io_register* reg; } ;
struct TYPE_47__ {TYPE_4__ ver_sync_end; TYPE_3__ ver_sync_start; TYPE_2__ ver_blank_end; TYPE_1__ ver_blank_start; TYPE_25__ ver_addr; TYPE_24__ ver_total; TYPE_23__ hor_sync_end; TYPE_22__ hor_sync_start; TYPE_20__ hor_blank_end; TYPE_19__ hor_blank_start; TYPE_18__ hor_addr; TYPE_17__ hor_total; } ;
struct TYPE_46__ {TYPE_21__* chip_info; } ;
struct TYPE_41__ {int gfx_chip_name; } ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_1 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int VAR_2 ;
 int VAR_3 ;






 TYPE_28__ VAR_4 ;
 TYPE_27__ VAR_5 ;
 int FUNC_24 (int,int,struct io_register*,int ) ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 TYPE_26__* VAR_6 ;

void FUNC_27(struct display_timing VAR_7,
 int VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 struct io_register *VAR_12 = ((void*)0);

 FUNC_26();

 for (VAR_9 = 0; VAR_9 < 12; VAR_9++) {
  if (VAR_8 == VAR_0) {
   switch (VAR_9) {
   case 134:
    VAR_11 =
        FUNC_5(VAR_7.
          hor_total);
    VAR_10 =
     VAR_4.hor_total.reg_num;
    VAR_12 = VAR_4.hor_total.reg;
    break;
   case 139:
    VAR_11 =
        FUNC_0(VAR_7.
         hor_addr);
    VAR_10 =
     VAR_4.hor_addr.reg_num;
    VAR_12 = VAR_4.hor_addr.reg;
    break;
   case 137:
    VAR_11 =
        FUNC_2
        (VAR_7.hor_blank_start);
    VAR_10 =
        VAR_4.hor_blank_start.reg_num;
    VAR_12 = VAR_4.hor_blank_start.reg;
    break;
   case 138:
    VAR_11 =
        FUNC_1
        (VAR_7.hor_blank_start,
         VAR_7.hor_blank_end);
    VAR_10 =
        VAR_4.hor_blank_end.reg_num;
    VAR_12 = VAR_4.hor_blank_end.reg;
    break;
   case 135:
    VAR_11 =
        FUNC_4
        (VAR_7.hor_sync_start);
    VAR_10 =
        VAR_4.hor_sync_start.reg_num;
    VAR_12 = VAR_4.hor_sync_start.reg;
    break;
   case 136:
    VAR_11 =
        FUNC_3
        (VAR_7.hor_sync_start,
         VAR_7.hor_sync_end);
    VAR_10 =
        VAR_4.hor_sync_end.reg_num;
    VAR_12 = VAR_4.hor_sync_end.reg;
    break;
   case 128:
    VAR_11 =
        FUNC_11(VAR_7.
          ver_total);
    VAR_10 =
     VAR_4.ver_total.reg_num;
    VAR_12 = VAR_4.ver_total.reg;
    break;
   case 133:
    VAR_11 =
        FUNC_6(VAR_7.
         ver_addr);
    VAR_10 =
     VAR_4.ver_addr.reg_num;
    VAR_12 = VAR_4.ver_addr.reg;
    break;
   case 131:
    VAR_11 =
        FUNC_8
        (VAR_7.ver_blank_start);
    VAR_10 =
        VAR_4.ver_blank_start.reg_num;
    VAR_12 = VAR_4.ver_blank_start.reg;
    break;
   case 132:
    VAR_11 =
        FUNC_7
        (VAR_7.ver_blank_start,
         VAR_7.ver_blank_end);
    VAR_10 =
        VAR_4.ver_blank_end.reg_num;
    VAR_12 = VAR_4.ver_blank_end.reg;
    break;
   case 129:
    VAR_11 =
        FUNC_10
        (VAR_7.ver_sync_start);
    VAR_10 =
        VAR_4.ver_sync_start.reg_num;
    VAR_12 = VAR_4.ver_sync_start.reg;
    break;
   case 130:
    VAR_11 =
        FUNC_9
        (VAR_7.ver_sync_start,
         VAR_7.ver_sync_end);
    VAR_10 =
        VAR_4.ver_sync_end.reg_num;
    VAR_12 = VAR_4.ver_sync_end.reg;
    break;

   }
  }

  if (VAR_8 == VAR_1) {
   switch (VAR_9) {
   case 134:
    VAR_11 =
        FUNC_17(VAR_7.
          hor_total);
    VAR_10 =
     VAR_5.hor_total.reg_num;
    VAR_12 = VAR_5.hor_total.reg;
    break;
   case 139:
    VAR_11 =
        FUNC_12(VAR_7.
         hor_addr);
    VAR_10 =
     VAR_5.hor_addr.reg_num;
    VAR_12 = VAR_5.hor_addr.reg;
    break;
   case 137:
    VAR_11 =
        FUNC_14
        (VAR_7.hor_blank_start);
    VAR_10 =
        VAR_5.hor_blank_start.reg_num;
    VAR_12 = VAR_5.hor_blank_start.reg;
    break;
   case 138:
    VAR_11 =
        FUNC_13
        (VAR_7.hor_blank_start,
         VAR_7.hor_blank_end);
    VAR_10 =
        VAR_5.hor_blank_end.reg_num;
    VAR_12 = VAR_5.hor_blank_end.reg;
    break;
   case 135:
    VAR_11 =
        FUNC_16
        (VAR_7.hor_sync_start);
    if (VAR_2 <=
     VAR_6->chip_info->gfx_chip_name)
     VAR_10 =
         VAR_5.hor_sync_start.
         reg_num;
    else
     VAR_10 = 3;
    VAR_12 = VAR_5.hor_sync_start.reg;
    break;
   case 136:
    VAR_11 =
        FUNC_15
        (VAR_7.hor_sync_start,
         VAR_7.hor_sync_end);
    VAR_10 =
        VAR_5.hor_sync_end.reg_num;
    VAR_12 = VAR_5.hor_sync_end.reg;
    break;
   case 128:
    VAR_11 =
        FUNC_23(VAR_7.
          ver_total);
    VAR_10 =
     VAR_5.ver_total.reg_num;
    VAR_12 = VAR_5.ver_total.reg;
    break;
   case 133:
    VAR_11 =
        FUNC_18(VAR_7.
         ver_addr);
    VAR_10 =
     VAR_5.ver_addr.reg_num;
    VAR_12 = VAR_5.ver_addr.reg;
    break;
   case 131:
    VAR_11 =
        FUNC_20
        (VAR_7.ver_blank_start);
    VAR_10 =
        VAR_5.ver_blank_start.reg_num;
    VAR_12 = VAR_5.ver_blank_start.reg;
    break;
   case 132:
    VAR_11 =
        FUNC_19
        (VAR_7.ver_blank_start,
         VAR_7.ver_blank_end);
    VAR_10 =
        VAR_5.ver_blank_end.reg_num;
    VAR_12 = VAR_5.ver_blank_end.reg;
    break;
   case 129:
    VAR_11 =
        FUNC_22
        (VAR_7.ver_sync_start);
    VAR_10 =
        VAR_5.ver_sync_start.reg_num;
    VAR_12 = VAR_5.ver_sync_start.reg;
    break;
   case 130:
    VAR_11 =
        FUNC_21
        (VAR_7.ver_sync_start,
         VAR_7.ver_sync_end);
    VAR_10 =
        VAR_5.ver_sync_end.reg_num;
    VAR_12 = VAR_5.ver_sync_end.reg;
    break;

   }
  }
  FUNC_24(VAR_11, VAR_10, VAR_12, VAR_3);
 }

 FUNC_25();
}
