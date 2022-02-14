
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct io_register {int dummy; } ;
struct display_timing {int ver_addr; int ver_blank_start; int ver_sync_start; int ver_sync_end; int ver_blank_end; int ver_total; int hor_blank_end; int hor_blank_start; int hor_total; } ;
struct TYPE_22__ {int reg_num; struct io_register* reg; } ;
struct TYPE_21__ {int reg_num; struct io_register* reg; } ;
struct TYPE_20__ {int reg_num; struct io_register* reg; } ;
struct TYPE_19__ {int reg_num; struct io_register* reg; } ;
struct TYPE_18__ {int reg_num; struct io_register* reg; } ;
struct TYPE_17__ {int reg_num; struct io_register* reg; } ;
struct TYPE_16__ {int reg_num; struct io_register* reg; } ;
struct TYPE_15__ {int reg_num; struct io_register* reg; } ;
struct TYPE_14__ {scalar_t__ display_method; } ;
struct TYPE_13__ {TYPE_9__ ver_sync_end_shadow; TYPE_8__ ver_sync_start_shadow; TYPE_7__ ver_blank_end_shadow; TYPE_6__ ver_blank_start_shadow; TYPE_5__ ver_addr_shadow; TYPE_4__ ver_total_shadow; TYPE_3__ hor_blank_end_shadow; TYPE_2__ hor_total_shadow; } ;
struct TYPE_12__ {TYPE_1__* lvds_setting_info; } ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;






 TYPE_11__ VAR_2 ;
 int FUNC_8 (int,int,struct io_register*,int ) ;
 TYPE_10__* VAR_3 ;

__attribute__((used)) static void FUNC_9(struct display_timing VAR_4,
        struct display_timing VAR_5)
{
 struct io_register *VAR_6 = ((void*)0);
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;

 if (VAR_3->lvds_setting_info->display_method == VAR_0) {

  for (VAR_7 = 12; VAR_7 < 20; VAR_7++) {
   switch (VAR_7) {
   case 134:
    VAR_9 =
        FUNC_1
        (VAR_5.hor_total);
    VAR_8 =
        VAR_2.hor_total_shadow.
        reg_num;
    VAR_6 = VAR_2.hor_total_shadow.reg;
    break;
   case 135:
    VAR_9 =
        FUNC_0
        (VAR_5.hor_blank_start,
         VAR_5.hor_blank_end);
    VAR_8 =
        VAR_2.
        hor_blank_end_shadow.reg_num;
    VAR_6 =
        VAR_2.
        hor_blank_end_shadow.reg;
    break;
   case 128:
    VAR_9 =
        FUNC_7
        (VAR_5.ver_total);
    VAR_8 =
        VAR_2.ver_total_shadow.
        reg_num;
    VAR_6 = VAR_2.ver_total_shadow.reg;
    break;
   case 133:
    VAR_9 =
        FUNC_2
        (VAR_5.ver_addr);
    VAR_8 =
        VAR_2.ver_addr_shadow.
        reg_num;
    VAR_6 = VAR_2.ver_addr_shadow.reg;
    break;
   case 131:
    VAR_9 =
        FUNC_4
        (VAR_5.ver_blank_start);
    VAR_8 =
        VAR_2.
        ver_blank_start_shadow.reg_num;
    VAR_6 =
        VAR_2.
        ver_blank_start_shadow.reg;
    break;
   case 132:
    VAR_9 =
        FUNC_3
        (VAR_5.ver_blank_start,
         VAR_5.ver_blank_end);
    VAR_8 =
        VAR_2.
        ver_blank_end_shadow.reg_num;
    VAR_6 =
        VAR_2.
        ver_blank_end_shadow.reg;
    break;
   case 129:
    VAR_9 =
        FUNC_6
        (VAR_5.ver_sync_start);
    VAR_8 =
        VAR_2.
        ver_sync_start_shadow.reg_num;
    VAR_6 =
        VAR_2.
        ver_sync_start_shadow.reg;
    break;
   case 130:
    VAR_9 =
        FUNC_5
        (VAR_5.ver_sync_start,
         VAR_5.ver_sync_end);
    VAR_8 =
        VAR_2.
        ver_sync_end_shadow.reg_num;
    VAR_6 =
        VAR_2.
        ver_sync_end_shadow.reg;
    break;
   }
   FUNC_8(VAR_9,
    VAR_8, VAR_6, VAR_1);
  }
 } else {
  for (VAR_7 = 12; VAR_7 < 20; VAR_7++) {
   switch (VAR_7) {
   case 134:
    VAR_9 =
        FUNC_1
        (VAR_5.hor_total);
    VAR_8 =
        VAR_2.hor_total_shadow.
        reg_num;
    VAR_6 = VAR_2.hor_total_shadow.reg;
    break;
   case 135:
    VAR_9 =
        FUNC_0
        (VAR_5.hor_blank_start,
         VAR_5.hor_blank_end);
    VAR_8 =
        VAR_2.
        hor_blank_end_shadow.reg_num;
    VAR_6 =
        VAR_2.
        hor_blank_end_shadow.reg;
    break;
   case 128:
    VAR_9 =
        FUNC_7
        (VAR_5.ver_total);
    VAR_8 =
        VAR_2.ver_total_shadow.
        reg_num;
    VAR_6 = VAR_2.ver_total_shadow.reg;
    break;
   case 133:
    VAR_9 =
        FUNC_2
        (VAR_4.ver_addr);
    VAR_8 =
        VAR_2.ver_addr_shadow.
        reg_num;
    VAR_6 = VAR_2.ver_addr_shadow.reg;
    break;
   case 131:
    VAR_9 =
        FUNC_4
        (VAR_4.ver_blank_start);
    VAR_8 =
        VAR_2.
        ver_blank_start_shadow.reg_num;
    VAR_6 =
        VAR_2.
        ver_blank_start_shadow.reg;
    break;
   case 132:
    VAR_9 =
        FUNC_3
        (VAR_5.ver_blank_start,
         VAR_5.ver_blank_end);
    VAR_8 =
        VAR_2.
        ver_blank_end_shadow.reg_num;
    VAR_6 =
        VAR_2.
        ver_blank_end_shadow.reg;
    break;
   case 129:
    VAR_9 =
        FUNC_6(
        (VAR_5.ver_sync_start -
        VAR_5.ver_blank_start) +
        (VAR_5.ver_addr -
        VAR_4.ver_addr) / 2 +
        VAR_4.ver_addr);
    VAR_8 =
        VAR_2.ver_sync_start_shadow.
        reg_num;
    VAR_6 =
        VAR_2.ver_sync_start_shadow.
        reg;
    break;
   case 130:
    VAR_9 =
        FUNC_5(
        (VAR_5.ver_sync_start -
        VAR_5.ver_blank_start) +
        (VAR_5.ver_addr -
        VAR_4.ver_addr) / 2 +
        VAR_4.ver_addr,
        VAR_5.ver_sync_end);
    VAR_8 =
        VAR_2.ver_sync_end_shadow.
        reg_num;
    VAR_6 =
        VAR_2.ver_sync_end_shadow.
        reg;
    break;
   }
   FUNC_8(VAR_9,
    VAR_8, VAR_6, VAR_1);
  }
 }
}
