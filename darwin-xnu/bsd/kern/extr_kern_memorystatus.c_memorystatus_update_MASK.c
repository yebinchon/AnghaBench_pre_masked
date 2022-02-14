
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* proc_t ;
typedef int int32_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {char* p_name; int p_pid; int p_memstat_state; int p_listflag; int p_memstat_requestedpriority; int p_memstat_dirty; scalar_t__ p_memstat_memlimit; int task; int p_memstat_userdata; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int,int,int,int ,scalar_t__,int ) ;
 int FUNC_4 (int,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int,scalar_t__) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_23 ;
 int FUNC_14 (int ,int,int *,scalar_t__,scalar_t__) ;

int
FUNC_15(proc_t VAR_24, int VAR_25, uint64_t VAR_26, boolean_t VAR_27, boolean_t VAR_28,
      int32_t VAR_29, boolean_t VAR_30,
                    int32_t VAR_31, boolean_t VAR_32)
{
 int VAR_33;
 boolean_t VAR_34 = 0;

 FUNC_4(1, "memorystatus_update: changing (%s) pid %d: priority %d, user_data 0x%llx\n", (*VAR_24->p_name ? VAR_24->p_name : "unknown"), VAR_24->p_pid, VAR_25, VAR_26);

 FUNC_3(FUNC_0(VAR_1, VAR_0) | VAR_3, VAR_24->p_pid, VAR_25, VAR_26, VAR_27, 0);

 if (VAR_25 == -1) {

  VAR_25 = VAR_8;
 } else if ((VAR_25 == VAR_23) || (VAR_25 == VAR_19)) {

  VAR_25 = VAR_9;
 } else if (VAR_25 == VAR_10) {

  VAR_25 = VAR_9;
  VAR_34 = VAR_18;
 } else if ((VAR_25 < 0) || (VAR_25 >= VAR_11)) {

  VAR_33 = VAR_6;
  goto out;
 }

 FUNC_12();

 FUNC_7(!(VAR_24->p_memstat_state & VAR_15));

 if (VAR_27 && (VAR_24->p_memstat_state & VAR_16)) {
  VAR_33 = VAR_4;
  FUNC_13();
  FUNC_4(1, "memorystatus_update: effective change specified for pid %d, but change already occurred.\n", VAR_24->p_pid);
  goto out;
 }

 if ((VAR_24->p_memstat_state & VAR_17) || ((VAR_24->p_listflag & VAR_13) != 0)) {



  VAR_33 = VAR_5;
  FUNC_13();
  goto out;
 }

 VAR_24->p_memstat_state |= VAR_16;
 VAR_24->p_memstat_userdata = VAR_26;
 VAR_24->p_memstat_requestedpriority = VAR_25;

 if (VAR_28) {
  boolean_t VAR_35;
  boolean_t VAR_36;







  FUNC_4(3, "memorystatus_update(enter): pid %d, priority %d, dirty=0x%x, Active(%dMB %s), Inactive(%dMB, %s)\n",
       VAR_24->p_pid, VAR_25, VAR_24->p_memstat_dirty,
       VAR_29, (VAR_30 ? "F " : "NF"),
       VAR_31, (VAR_32 ? "F " : "NF"));

  if (VAR_29 <= 0) {
   if (VAR_29 < 0) {
    VAR_29 = -1;
   }
   VAR_30 = VAR_18;
  }

  if (VAR_31 <= 0) {





   VAR_31 = -1;
   VAR_32 = VAR_18;
  }




  FUNC_5(VAR_24, VAR_29, VAR_30);




  FUNC_6(VAR_24, VAR_31, VAR_32);
  if (FUNC_11(VAR_24) == VAR_18) {
   FUNC_1(VAR_24, VAR_35);
   VAR_36 = VAR_18;
  } else {
   FUNC_2(VAR_24, VAR_35);
   VAR_36 = VAR_7;
  }




  if (VAR_22) {

   FUNC_14(VAR_24->task, ((VAR_24->p_memstat_memlimit > 0) ? VAR_24->p_memstat_memlimit : -1), ((void*)0), VAR_36, VAR_35);

   FUNC_4(3, "memorystatus_update: init: limit on pid %d (%dMB %s) targeting priority(%d) dirty?=0x%x %s\n",
        VAR_24->p_pid, (VAR_24->p_memstat_memlimit > 0 ? VAR_24->p_memstat_memlimit : -1),
        (VAR_24->p_memstat_state & VAR_14 ? "F " : "NF"), VAR_25, VAR_24->p_memstat_dirty,
        (VAR_24->p_memstat_dirty ? ((VAR_24->p_memstat_dirty & VAR_12) ? "isdirty" : "isclean") : ""));
  }
 }







 if (FUNC_8(VAR_24)) {

  FUNC_9(VAR_24, VAR_18);
  FUNC_10(VAR_24, VAR_9, VAR_7, VAR_18);
 } else {
  if (VAR_20 == VAR_21 && VAR_25 == VAR_9) {
   FUNC_10(VAR_24, VAR_25, VAR_34, VAR_18);
  }
 }

 FUNC_10(VAR_24, VAR_25, VAR_34, VAR_7);

 FUNC_13();
 VAR_33 = 0;

out:
 FUNC_3(FUNC_0(VAR_1, VAR_0) | VAR_2, VAR_33, 0, 0, 0, 0);

 return VAR_33;
}
