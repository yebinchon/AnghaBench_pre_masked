
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_short ;
typedef int u_long ;
struct TYPE_11__ {int detec_count; void* isr_flag; void* leave_isr; scalar_t__ rx_break; } ;
struct TYPE_12__ {TYPE_5__ hwm; } ;
struct TYPE_10__ {scalar_t__ ev_get; scalar_t__ ev_put; } ;
struct TYPE_8__ {TYPE_1__* rx_q; } ;
struct TYPE_9__ {TYPE_2__ fp; } ;
struct s_smc {TYPE_6__ os; TYPE_4__ q; TYPE_3__ hw; } ;
struct TYPE_7__ {scalar_t__ rx_used; } ;
typedef int SMbuf ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int,int) ;
 void* VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 () ;
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
 int FUNC_4 (char*,int,int ,int ) ;
 size_t VAR_37 ;
 int FUNC_5 (struct s_smc*,int ,int ) ;
 void* VAR_38 ;
 int FUNC_6 (struct s_smc*) ;
 scalar_t__ VAR_39 ;
 int * FUNC_7 (struct s_smc*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct s_smc*) ;
 int FUNC_10 (struct s_smc*,int,int) ;
 int FUNC_11 (struct s_smc*,int,int) ;
 int FUNC_12 (struct s_smc*,int,int) ;
 int FUNC_13 (struct s_smc*) ;
 int FUNC_14 (struct s_smc*) ;
 scalar_t__ VAR_40 ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (struct s_smc*) ;
 int FUNC_17 (struct s_smc*) ;
 int FUNC_18 () ;
 int FUNC_19 (struct s_smc*) ;
 int FUNC_20 (struct s_smc*) ;
 int FUNC_21 (struct s_smc*) ;
 int FUNC_22 (struct s_smc*,int *) ;
 int FUNC_23 (struct s_smc*) ;

void FUNC_24(struct s_smc *VAR_41)
{
 u_long VAR_42 ;
 u_short VAR_43, VAR_44 ;
 SMbuf *VAR_45 ;
 VAR_41->os.hwm.isr_flag = VAR_38 ;
 while ((VAR_42 = FUNC_3() & VAR_22)) {
  FUNC_4("CH0B",VAR_42,0,0) ;
  FUNC_1("ISA = 0x%x",VAR_42,0,7) ;

  if (VAR_42 & VAR_21) {
   FUNC_4("CH1b",VAR_42,0,0) ;
   if (VAR_42 & VAR_26) {
    FUNC_16(VAR_41) ;
   }
   if (VAR_42 & VAR_27) {
    FUNC_17(VAR_41) ;
   }
   if (VAR_42 & VAR_23) {
    VAR_43 = FUNC_8(FUNC_2(VAR_8)) ;
    VAR_44 = FUNC_8(FUNC_2(VAR_7)) ;
    FUNC_1("Slow transmit complete",0,0,6) ;
    FUNC_10(VAR_41,VAR_43,VAR_44) ;
   }
   if (VAR_42 & VAR_24) {
    VAR_43= FUNC_8(FUNC_2(VAR_10)) ;
    VAR_44= FUNC_8(FUNC_2(VAR_9)) ;
    FUNC_1("Slow receive complete",0,0,6) ;
    FUNC_1("stl = %x : stu = %x",VAR_44,VAR_43,7) ;
    FUNC_11(VAR_41,VAR_43,VAR_44) ;
   }
   if (VAR_42 & VAR_25) {
    VAR_43= FUNC_8(FUNC_2(VAR_12)) ;
    VAR_44= FUNC_8(FUNC_2(VAR_11)) ;
    FUNC_1("FORMAC Mode Register 3",0,0,6) ;
    FUNC_12(VAR_41,VAR_43,VAR_44) ;
   }
   if (VAR_42 & VAR_31) {
    FUNC_23(VAR_41) ;






    if (++VAR_41->os.hwm.detec_count > 4) {



      FUNC_19(VAR_41) ;
    }
   }
   if (VAR_42 & VAR_32) {
    FUNC_20(VAR_41) ;
   }
   if (VAR_42 & VAR_30) {

    FUNC_15(FUNC_0(VAR_0),VAR_5) ;
    FUNC_5(VAR_41,VAR_13,VAR_14) ;
   }
   if (VAR_42 & VAR_28) {

    FUNC_15(FUNC_0(VAR_0),VAR_3) ;
    FUNC_5(VAR_41,VAR_15,VAR_16) ;
   }
   if (VAR_42 & VAR_33) {

    FUNC_15(FUNC_0(VAR_1),VAR_3) ;
    FUNC_5(VAR_41,VAR_17,VAR_18) ;
   }
   if (VAR_42 & VAR_35) {

    FUNC_15(FUNC_0(VAR_2),VAR_3) ;
    FUNC_5(VAR_41,VAR_19,VAR_20) ;
   }
  }




  if (VAR_42 & (VAR_36|VAR_34)) {
   FUNC_1("Fast tx complete queue",0,0,6) ;




   FUNC_15(FUNC_0(VAR_2),VAR_4) ;
   FUNC_15(FUNC_0(VAR_1),VAR_4) ;
   FUNC_13(VAR_41) ;
   FUNC_9(VAR_41) ;
  }




  if (VAR_42 & VAR_29) {
   FUNC_1("Fast receive complete",0,0,6) ;


   FUNC_15(FUNC_0(VAR_0),VAR_4) ;
   FUNC_19(VAR_41) ;
  }


  while ((VAR_45 = FUNC_7(VAR_41))) {
   FUNC_22(VAR_41,VAR_45) ;
  }
  if (VAR_41->q.ev_get != VAR_41->q.ev_put) {
   FUNC_4("CH2a",0,0,0) ;
   FUNC_6(VAR_41) ;
  }
 }






 VAR_41->os.hwm.isr_flag = VAR_6 ;
 FUNC_4("CH0E",0,0,0) ;
}
