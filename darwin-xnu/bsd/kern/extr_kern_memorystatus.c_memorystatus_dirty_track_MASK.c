
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* proc_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {unsigned int p_memstat_dirty; int p_listflag; int p_memstat_state; int p_pid; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,unsigned int,int,int ,int ) ;
 int FUNC_2 (int,char*,char*,char*,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

int
FUNC_10(proc_t VAR_24, uint32_t VAR_25) {
 unsigned int VAR_26;
 boolean_t VAR_27 = VAR_4;
 boolean_t VAR_28 = VAR_4;
 boolean_t VAR_29 = VAR_4;
 int VAR_30 = 0;

 FUNC_1(FUNC_0(VAR_1, VAR_0),
  VAR_24->p_pid, VAR_24->p_memstat_dirty, VAR_25, 0, 0);

 FUNC_8();

 if ((VAR_24->p_listflag & VAR_19) != 0) {



  VAR_30 = VAR_2;
  goto exit;
 }

 if (VAR_24->p_memstat_state & VAR_20) {
  VAR_30 = VAR_3;
  goto exit;
 }

 if ((VAR_30 = FUNC_7(VAR_24, VAR_25)) != 0) {

  goto exit;
 }

        VAR_26 = VAR_24->p_memstat_dirty;


 if (VAR_25 & VAR_9) {
  VAR_24->p_memstat_dirty |= VAR_18;
 }

 if (VAR_25 & VAR_5) {
  VAR_24->p_memstat_dirty |= VAR_12;
 }

 if (VAR_25 & VAR_8) {
  VAR_24->p_memstat_dirty |= VAR_17;
 }

 if (VAR_26 & VAR_11) {
  VAR_28 = VAR_21;
 }



 if (VAR_25 & (VAR_6 | VAR_7)) {

  if ((VAR_25 & (VAR_6)) &&
      !(VAR_26 & VAR_13)) {
   VAR_24->p_memstat_dirty |= VAR_13;
  }

  if ((VAR_25 & (VAR_7)) &&
      !(VAR_26 & VAR_14)) {
   VAR_24->p_memstat_dirty |= VAR_14;
  }

  VAR_29 = VAR_21;
 }

 FUNC_2(1, "memorystatus_on_track_dirty(): set idle-exit %s / defer %s / dirty %s for pid %d\n",
  ((VAR_24->p_memstat_dirty & VAR_15) == VAR_15) ? "Y" : "N",
  VAR_29 ? "Y" : "N",
  VAR_24->p_memstat_dirty & VAR_10 ? "Y" : "N",
  VAR_24->p_pid);


 if (!(VAR_24->p_memstat_dirty & VAR_16)) {
  if ((VAR_24->p_memstat_dirty & VAR_15) == VAR_15) {

   if (VAR_29 && !VAR_28) {






    FUNC_5(VAR_24, VAR_21);
    VAR_27 = VAR_21;

   } else if (!VAR_29) {






    if (VAR_28) {






     FUNC_3(VAR_24, VAR_21);
    } else {






     FUNC_5(VAR_24, VAR_21);
    }

    VAR_27 = VAR_21;
   }
  }
 } else {
  if (!VAR_29 && VAR_28) {
   FUNC_3(VAR_24, VAR_21);
   VAR_27 = VAR_21;
  } else {

   boolean_t VAR_31 = (VAR_22 != VAR_23) ? VAR_21 : VAR_4;

   FUNC_3(VAR_24, VAR_31);
   VAR_27 = VAR_21;
  }
 }

 FUNC_6(VAR_24);

 if (VAR_27) {
  FUNC_4();
 }

 VAR_30 = 0;

exit:
 FUNC_9();

 return VAR_30;
}
