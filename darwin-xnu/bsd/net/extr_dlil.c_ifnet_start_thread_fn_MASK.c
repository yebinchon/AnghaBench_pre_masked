
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_result_t ;
typedef scalar_t__ u_int32_t ;
typedef int thread_name ;
struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct thread {int dummy; } ;
struct ifclassq {int dummy; } ;
struct ifnet {char* if_xname; int if_start_active; scalar_t__ if_start_req; int if_eflags; int if_start_delayed; scalar_t__ if_start_delay_qlen; int if_start_flags; scalar_t__ if_start_delay_timeout; struct timespec if_start_cycle; int if_start_lock; int (* if_start ) (struct ifnet*) ;struct thread* if_start_thread; struct ifclassq if_snd; } ;
struct dlil_threading_info {scalar_t__ tag; int input_lck; struct thread* wloop_thr; struct thread* poll_thr; scalar_t__ net_affinity; } ;
typedef int ifname ;


 int FUNC_0 (struct ifclassq*) ;
 scalar_t__ FUNC_1 (struct ifclassq*) ;
 scalar_t__ FUNC_2 (struct ifclassq*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct thread* VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 struct thread* FUNC_5 () ;
 int FUNC_6 (struct thread*,scalar_t__) ;
 struct dlil_threading_info* VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct ifnet*,int) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct ifnet*,int *) ;
 int VAR_10 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct ifnet* VAR_11 ;
 int FUNC_15 (struct thread**,int *,int,char*,struct timespec*) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,int,char*,char*) ;
 int FUNC_18 (struct ifnet*) ;
 int FUNC_19 (struct thread*) ;
 int FUNC_20 (struct thread*,char*) ;
 int FUNC_21 (struct thread*) ;

__attribute__((used)) static void
FUNC_22(void *VAR_12, wait_result_t VAR_13)
{
#pragma unused(w)
 struct ifnet *VAR_14 = VAR_12;
 char VAR_15[VAR_2 + 1];
 char VAR_16[VAR_4];
 struct timespec *VAR_17 = ((void*)0);
 struct ifclassq *VAR_18 = &VAR_14->if_snd;
 struct timespec VAR_19;


 FUNC_4(VAR_16, sizeof(VAR_16));
 (void) FUNC_17(VAR_16, sizeof (VAR_16),
     "ifnet_start_%s", VAR_14->if_xname);
 FUNC_20(VAR_14->if_start_thread, VAR_16);
 if (VAR_14 == VAR_11) {
  struct dlil_threading_info *VAR_20 = VAR_8;
  struct thread *VAR_21 = FUNC_5();

  FUNC_12(&VAR_20->input_lck);
  if (VAR_20->net_affinity) {
   u_int32_t VAR_22 = VAR_20->tag;

   FUNC_3(VAR_20->wloop_thr == VAR_7);
   FUNC_3(VAR_20->poll_thr == VAR_7);
   VAR_20->wloop_thr = VAR_21;
   FUNC_14(&VAR_20->input_lck);


   (void) FUNC_6(VAR_21, VAR_22);
  } else {
   FUNC_14(&VAR_20->input_lck);
  }
 }

 (void) FUNC_17(VAR_15, sizeof (VAR_15), "%s_starter", FUNC_7(VAR_14));

 FUNC_13(&VAR_14->if_start_lock);

 for (;;) {
  if (VAR_14->if_start_thread != ((void*)0)) {
   (void) FUNC_15(&VAR_14->if_start_thread,
       &VAR_14->if_start_lock,
       (VAR_6 - 1) | VAR_5, VAR_15, VAR_17);
  }

  if (VAR_14->if_start_thread == VAR_7) {
   FUNC_11(VAR_14, ((void*)0));
   FUNC_14(&VAR_14->if_start_lock);
   FUNC_10(VAR_14);

   if (VAR_9) {
    FUNC_16("%s: starter thread terminated\n",
        FUNC_7(VAR_14));
   }


   FUNC_19(FUNC_5());

   FUNC_21(FUNC_5());

   return;
  }

  VAR_14->if_start_active = 1;

  for (;;) {
   u_int32_t VAR_23 = VAR_14->if_start_req;
   if (!FUNC_0(VAR_18) &&
       (VAR_14->if_eflags & VAR_1) &&
       VAR_14->if_start_delayed == 0 &&
       FUNC_1(VAR_18) < VAR_14->if_start_delay_qlen &&
       (VAR_14->if_eflags & VAR_0)) {
    VAR_14->if_start_delayed = 1;
    VAR_10++;
    break;
   } else {
    VAR_14->if_start_delayed = 0;
   }
   FUNC_14(&VAR_14->if_start_lock);







   if (!FUNC_9(VAR_14, 1)) {
    FUNC_13(&VAR_14->if_start_lock);
    break;
   }


   ((*VAR_14->if_start)(VAR_14));




   FUNC_8(VAR_14);

   FUNC_13(&VAR_14->if_start_lock);





   if (VAR_23 == VAR_14->if_start_req ||
       (VAR_14->if_start_flags & VAR_3)) {
    break;
   }
  }

  VAR_14->if_start_req = 0;
  VAR_14->if_start_active = 0;







  VAR_17 = ((FUNC_2(VAR_18) && !FUNC_0(VAR_18)) ?
      &VAR_14->if_start_cycle : ((void*)0));

  if (VAR_17 == ((void*)0) && VAR_14->if_start_delayed == 1) {
   VAR_19.tv_sec = 0;
   VAR_19.tv_nsec = VAR_14->if_start_delay_timeout;
   VAR_17 = &VAR_19;
  }

  if (VAR_17 != ((void*)0) && VAR_17->tv_sec == 0 && VAR_17->tv_nsec == 0)
   VAR_17 = ((void*)0);
 }


}
