
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef TYPE_2__* proc_t ;
typedef scalar_t__ pid_t ;
typedef int * caddr_t ;
struct TYPE_23__ {int p_xstat; int si_status; int p_flag; char* p_comm; int p_slock; int p_dtrace_sprlock; int p_fdmlock; int p_ucred_mlock; int p_mlock; int p_listflag; int p_stat; int p_children; int p_childrencnt; int p_ucred; int p_exit_reason; struct TYPE_23__* p_ru; int ri; TYPE_1__* p_stats; int ru; int si_uid; int si_code; int p_pid; int si_pid; scalar_t__ p_oppid; } ;
struct TYPE_22__ {int ri_child; int p_cru; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int) ;
 TYPE_2__* VAR_11 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_12 ;
 int FUNC_11 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (TYPE_2__*) ;
 int VAR_16 ;
 TYPE_2__* FUNC_15 (scalar_t__) ;
 int FUNC_16 (TYPE_2__*,int) ;
 int FUNC_17 (TYPE_2__*) ;
 int VAR_17 ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (TYPE_2__*) ;
 int VAR_18 ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*,TYPE_2__*,int,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*,int ) ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int *) ;

__attribute__((used)) static int
FUNC_28(proc_t VAR_21, proc_t VAR_22, int VAR_23, int VAR_24, int VAR_25, int VAR_26)
{
 proc_t VAR_27 = VAR_5;

 if (VAR_25 == 1)
  FUNC_19();
 if (VAR_22->p_oppid) {
  int VAR_28;
  pid_t VAR_29;

  FUNC_20(VAR_22);
  VAR_29 = VAR_22->p_oppid;
  VAR_22->p_oppid = 0;
  VAR_28 = VAR_3 | (VAR_22->p_xstat & 0xffff);
  FUNC_23(VAR_22);

  if ((VAR_27 = FUNC_15(VAR_29))
   && !((VAR_27 == VAR_11) && VAR_24)) {

   if (VAR_27 != VAR_11) {





    FUNC_20(VAR_27);
    VAR_27->si_pid = VAR_22->p_pid;
    VAR_27->si_status = VAR_22->p_xstat;
    VAR_27->si_code = VAR_0;
    VAR_27->si_uid = FUNC_6(VAR_22->p_ucred);
    FUNC_23(VAR_27);
   }
   FUNC_22(VAR_22, VAR_27, 1, 0);


   FUNC_16(VAR_22, VAR_28);

   FUNC_24(VAR_27, VAR_10);
   FUNC_18();
   FUNC_27((caddr_t)VAR_27);
   VAR_22->p_listflag &= ~VAR_8;
   FUNC_27(&VAR_22->p_stat);
   FUNC_19();
   FUNC_21(VAR_27);
   if ((VAR_25 == 1) && (VAR_26 == 0))
    FUNC_18();
   return (0);
  }







  FUNC_16(VAR_22, VAR_28);

  if (VAR_27 != VAR_5) {
   FUNC_21(VAR_27);
  }
 }

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
 FUNC_16(VAR_22, VAR_4);
#pragma clang diagnostic pop

 FUNC_17(VAR_22);

 VAR_22->p_xstat = 0;
 if (VAR_22->p_ru) {
  FUNC_20(VAR_21);
  if (!(VAR_21->p_flag & VAR_9))

   FUNC_25(&VAR_21->p_stats->p_cru, &VAR_22->p_ru->ru);
  FUNC_26(&VAR_21->p_stats->ri_child, &VAR_22->p_ru->ri);
  FUNC_23(VAR_21);
  FUNC_1(VAR_22->p_ru, sizeof *VAR_22->p_ru, VAR_2);
  VAR_22->p_ru = ((void*)0);
 } else {
  FUNC_13("Warning : lost p_ru for %s\n", VAR_22->p_comm);
 }

 FUNC_0(VAR_22);
 (void)FUNC_5(FUNC_6(VAR_22->p_ucred), -1);

 FUNC_11(VAR_22->p_exit_reason);




 if (FUNC_2(VAR_22->p_ucred)) {
  FUNC_7(&VAR_22->p_ucred);
 }







 FUNC_10(VAR_22);

 FUNC_18();
 FUNC_4(VAR_22, VAR_14);
 VAR_21->p_childrencnt--;
 FUNC_4(VAR_22, VAR_15);

 if ((VAR_23 != 0) && (FUNC_3(&VAR_21->p_children)))
  FUNC_27((caddr_t)VAR_21);
 VAR_22->p_listflag &= ~VAR_8;
 FUNC_27(&VAR_22->p_stat);


 FUNC_4(VAR_22, VAR_13);
 VAR_22->p_listflag &= ~VAR_7;
 FUNC_14(VAR_22);
 VAR_12--;

 if (VAR_23) {




  VAR_22->p_listflag |= VAR_6;
 }

 FUNC_19();
 FUNC_8(&VAR_22->p_mlock, VAR_17);
 FUNC_8(&VAR_22->p_ucred_mlock, VAR_17);
 FUNC_8(&VAR_22->p_fdmlock, VAR_17);



 FUNC_9(&VAR_22->p_slock, VAR_17);


 FUNC_1(VAR_22, sizeof *VAR_22, VAR_1);
 if ((VAR_25 == 1) && (VAR_26 == 0))
  FUNC_18();

 return (1);
}
