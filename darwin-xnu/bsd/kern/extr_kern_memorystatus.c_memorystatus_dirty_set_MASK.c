
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* proc_t ;
typedef int boolean_t ;
struct TYPE_13__ {int p_memstat_dirty; int p_listflag; int p_memstat_state; scalar_t__ p_memstat_idledeadline; int p_memstat_memlimit; int p_memstat_effectivepriority; int p_pid; int task; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int,scalar_t__,int ,int ) ;
 int FUNC_4 (int,char*,int,int,char*,int,...) ;
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
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_5 () ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 TYPE_1__* FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (int ,int,int *,int,int) ;

int
FUNC_17(proc_t VAR_26, boolean_t VAR_27, uint32_t VAR_28) {
 int VAR_29;
 boolean_t VAR_30 = 0;
 boolean_t VAR_31 = VAR_6;
 boolean_t VAR_32 = VAR_6;
 boolean_t VAR_33 = VAR_6;

 FUNC_4(1, "memorystatus_dirty_set(): %d %d 0x%x 0x%x\n", VAR_27, VAR_26->p_pid, VAR_28, VAR_26->p_memstat_dirty);
 FUNC_3(FUNC_0(VAR_1, VAR_0), VAR_26->p_pid, VAR_27, VAR_28, 0, 0);

 FUNC_11();

 if ((VAR_26->p_listflag & VAR_17) != 0) {



  VAR_29 = VAR_3;
  goto exit;
 }

 if (VAR_26->p_memstat_state & VAR_19) {
  VAR_29 = VAR_5;
  goto exit;
 }

 if (VAR_26->p_memstat_dirty & VAR_12)
  VAR_32 = VAR_21;

 if (!(VAR_26->p_memstat_dirty & VAR_16)) {

  VAR_29 = VAR_4;
 } else if (VAR_28 && (VAR_26->p_memstat_dirty & VAR_15)) {




  VAR_29 = VAR_3;
 } else {
  int VAR_34 = (VAR_27 == VAR_21) ? VAR_7 : VAR_14;
  if (VAR_28 && !(VAR_26->p_memstat_dirty & VAR_34)) {

   VAR_26->p_memstat_dirty |= (VAR_34 | VAR_13);
   VAR_24++;
   VAR_29 = 0;
  } else if ((VAR_28 == 0) && (VAR_26->p_memstat_dirty & VAR_34)) {
   if ((VAR_34 == VAR_14) && (!(VAR_26->p_memstat_dirty & VAR_7))) {

    VAR_26->p_memstat_dirty |= VAR_15;
    VAR_30 = 1;
   } else if ((VAR_34 == VAR_7) && (VAR_26->p_memstat_dirty & VAR_15)) {

    VAR_30 = 1;
   }
   VAR_26->p_memstat_dirty &= ~VAR_34;
   VAR_24--;
   VAR_29 = 0;
  } else {

   VAR_29 = VAR_2;
  }
 }

 if (VAR_29 != 0) {
  goto exit;
 }

 if (VAR_26->p_memstat_dirty & VAR_12)
  VAR_33 = VAR_21;

 if ((VAR_32 == VAR_21 && VAR_33 == VAR_6) ||
     (VAR_32 == VAR_6 && VAR_33 == VAR_21)) {


  if ((VAR_26->p_memstat_dirty & VAR_11) == VAR_11) {
   if (VAR_26->p_memstat_dirty & VAR_12) {






    boolean_t VAR_35 = (VAR_22 != VAR_23) ? VAR_21 : VAR_6;

    FUNC_6(VAR_26, VAR_35);
    VAR_31 = VAR_21;
   } else {





    if (VAR_22 == VAR_23) {
     if (((VAR_26->p_memstat_dirty & VAR_10) == VAR_6) &&
         (FUNC_5() >= VAR_26->p_memstat_idledeadline)) {
      FUNC_6(VAR_26, VAR_21);
      VAR_31 = VAR_21;
     } else {







      if (VAR_26->p_memstat_dirty & VAR_10) {
       FUNC_8(VAR_26, VAR_21);
       VAR_31 = VAR_21;
      } else if (VAR_26->p_memstat_dirty & VAR_8) {
       FUNC_8(VAR_26, VAR_6);
       VAR_31 = VAR_21;
      }
     }
    } else {

     FUNC_8(VAR_26, VAR_21);
     VAR_31 = VAR_21;
    }
   }
  }

  FUNC_9(VAR_26);

  if (VAR_25) {
   boolean_t VAR_36 = VAR_21;
   boolean_t VAR_37;
   boolean_t VAR_38;





   if (FUNC_10(VAR_26) == VAR_21) {





    FUNC_1(VAR_26, VAR_38);
    VAR_37 = VAR_21;
    VAR_36 = VAR_21;
   } else {







    if (VAR_26->p_memstat_dirty & VAR_9) {
     VAR_36 = VAR_6;
    } else {
     FUNC_2(VAR_26, VAR_38);
     VAR_37 = VAR_6;
     VAR_36 = VAR_21;
    }
   }
   if (VAR_36 && FUNC_13(VAR_26) == VAR_26) {
    int VAR_39;
    if (VAR_26->p_memstat_memlimit > 0) {
     VAR_39 = VAR_26->p_memstat_memlimit;
    } else {
     VAR_39 = -1;
    }
    FUNC_12();
    FUNC_16(VAR_26->task, VAR_39, ((void*)0), VAR_37, VAR_38);
    FUNC_11();
    FUNC_14(VAR_26);

    FUNC_4(3, "memorystatus_dirty_set: new limit on pid %d (%dMB %s) priority(%d) dirty?=0x%x %s\n",
        VAR_26->p_pid, (VAR_26->p_memstat_memlimit > 0 ? VAR_26->p_memstat_memlimit : -1),
        (VAR_26->p_memstat_state & VAR_18 ? "F " : "NF"), VAR_26->p_memstat_effectivepriority, VAR_26->p_memstat_dirty,
        (VAR_26->p_memstat_dirty ? ((VAR_26->p_memstat_dirty & VAR_7) ? "isdirty" : "isclean") : ""));
   }

  }


  if (VAR_31) {
   FUNC_7();
  }
 }

 if (VAR_30) {
  if (FUNC_13(VAR_26) == VAR_26) {
   FUNC_12();
   FUNC_15(VAR_26, VAR_20);
   FUNC_11();
   FUNC_14(VAR_26);
  }
 }

exit:
 FUNC_12();

 return VAR_29;
}
