
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


struct TYPE_28__ {int seq_id; void* rx_id; void* f_ctl; void* type; int cat_info; int routing; } ;
struct TYPE_21__ {int class_valid; int sequential; int conseq; int ospx; } ;
struct TYPE_20__ {int ciro; int cisc; int altbbcred; int e_d_tov; void* ro_bitmap; void* conseq; int verlo; int verhi; } ;
struct TYPE_27__ {TYPE_2__ class3; TYPE_1__ csp; } ;
struct TYPE_22__ {int rxrdisab; } ;
struct TYPE_23__ {int imagepair; TYPE_3__ servparams; void* type; } ;
struct TYPE_26__ {int pglen; TYPE_4__ parampage; void* pagebytes; int command; } ;
struct TYPE_24__ {int els_code; } ;
struct TYPE_25__ {TYPE_5__ els_cmd; } ;
struct TYPE_19__ {int high_seq_cnt; scalar_t__ low_seq_cnt; scalar_t__ seq_id_valid; } ;
struct TYPE_18__ {void* rx_id; void* f_ctl; void* type; void* routing; } ;
struct TYPE_17__ {void* rx_id; void* f_ctl; void* type; int cat_info; void* routing; } ;
struct TYPE_16__ {void* rx_id; void* f_ctl; void* type; int cat_info; void* routing; } ;
struct TYPE_15__ {void* rx_id; void* f_ctl; void* type; int cat_info; void* routing; } ;


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
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 TYPE_14__ VAR_21 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_13__ VAR_22 ;
 TYPE_12__ VAR_23 ;
 TYPE_11__ VAR_24 ;
 TYPE_10__ VAR_25 ;
 TYPE_9__ VAR_26 ;
 TYPE_8__ VAR_27 ;
 TYPE_7__ VAR_28 ;
 TYPE_6__ VAR_29 ;

void
FUNC_3(void)
{



 VAR_24.routing = VAR_15;
 VAR_24.cat_info = VAR_8;
 VAR_24.type = VAR_19;
 VAR_24.f_ctl =
  FUNC_0(VAR_4 | VAR_2 | VAR_1 |
         VAR_5);
 VAR_24.rx_id = VAR_17;




 VAR_25.routing = VAR_15;
 VAR_25.cat_info = VAR_7;
 VAR_25.type = VAR_19;
 VAR_25.f_ctl =
  FUNC_0(VAR_0 | VAR_4 | VAR_3 |
         VAR_1 | VAR_5);
 VAR_25.rx_id = VAR_17;




 VAR_22.routing = VAR_14;
 VAR_22.type = VAR_18;
 VAR_22.f_ctl = FUNC_0(VAR_1 | VAR_5);
 VAR_22.rx_id = VAR_17;




 VAR_23.routing = VAR_14;
 VAR_23.cat_info = VAR_6;
 VAR_23.type = VAR_18;
 VAR_23.f_ctl =
  FUNC_0(VAR_0 | VAR_4 | VAR_3 |
         VAR_1 | VAR_5);
 VAR_23.rx_id = VAR_17;




 VAR_21.seq_id_valid = 0;
 VAR_21.low_seq_cnt = 0;
 VAR_21.high_seq_cnt = 0xFFFF;




 VAR_27.csp.verhi = VAR_13;
 VAR_27.csp.verlo = VAR_12;
 VAR_27.csp.ciro = 0x1;
 VAR_27.csp.cisc = 0x0;
 VAR_27.csp.altbbcred = 0x0;
 VAR_27.csp.conseq = FUNC_1(0x00FF);
 VAR_27.csp.ro_bitmap = FUNC_1(0x0002);
 VAR_27.csp.e_d_tov = FUNC_2(2000);

 VAR_27.class3.class_valid = 1;
 VAR_27.class3.sequential = 1;
 VAR_27.class3.conseq = 0xFF;
 VAR_27.class3.ospx = 1;




 VAR_28.command = VAR_10;
 VAR_28.pglen = 0x10;
 VAR_28.pagebytes = FUNC_1(0x0014);
 VAR_28.parampage.type = VAR_20;
 VAR_28.parampage.imagepair = 1;
 VAR_28.parampage.servparams.rxrdisab = 1;




 VAR_29.els_cmd.els_code = VAR_11;




 VAR_26.routing = VAR_16;
 VAR_26.cat_info = VAR_9;
 VAR_26.type = VAR_20;
 VAR_26.f_ctl =
  FUNC_0(VAR_2 | VAR_1 | VAR_5);
 VAR_26.seq_id = 1;
 VAR_26.rx_id = VAR_17;
}
