
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_result_t ;
typedef int u_int32_t ;
typedef int thread_name ;
struct mbuf {int dummy; } ;
struct ifnet {char* if_xname; int if_eflags; } ;
struct dlil_threading_info {scalar_t__ mode; int input_waiting; int input_lck; scalar_t__ wtot; int rcvq_pkts; int input_name; int input_thr; struct ifnet* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 struct mbuf* FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,struct mbuf*,int ,scalar_t__) ;
 int FUNC_4 (struct ifnet*,struct dlil_threading_info*) ;
 struct dlil_threading_info* VAR_10 ;
 int FUNC_5 (struct dlil_threading_info*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (int*,int *,int,int ,int *) ;
 int VAR_11 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char*,char*) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static void
FUNC_13(void *VAR_12, wait_result_t VAR_13)
{
#pragma unused(w)
 char VAR_14[VAR_7];
 struct dlil_threading_info *VAR_15 = VAR_12;
 struct ifnet *VAR_16 = VAR_15->ifp;


 FUNC_2(VAR_14, sizeof(VAR_14));
 FUNC_11(VAR_14, sizeof(VAR_14), "dlil_input_%s", VAR_16->if_xname);
 FUNC_12(VAR_15->input_thr, VAR_14);

 FUNC_0(VAR_15 != VAR_10);
 FUNC_0(VAR_16 != ((void*)0));
 FUNC_0(!(VAR_16->if_eflags & VAR_5) || !VAR_11);
 FUNC_0(VAR_15->mode == VAR_6);

 while (1) {
  struct mbuf *VAR_17 = ((void*)0);
  u_int32_t VAR_18;

  FUNC_6(&VAR_15->input_lck);


  while (!(VAR_15->input_waiting & ~VAR_0)) {
   VAR_15->input_waiting &= ~VAR_0;
   (void) FUNC_9(&VAR_15->input_waiting, &VAR_15->input_lck,
       (VAR_9 - 1) | VAR_8, VAR_15->input_name, ((void*)0));
  }

  VAR_15->input_waiting |= VAR_0;
  VAR_15->input_waiting &= ~VAR_2;
  FUNC_0(!(VAR_15->input_waiting &
      (VAR_4|VAR_3)));


  VAR_18 = FUNC_10(&VAR_15->rcvq_pkts);
  VAR_17 = FUNC_1(&VAR_15->rcvq_pkts, ((void*)0), ((void*)0), ((void*)0));

  if (VAR_15->input_waiting & VAR_1) {
   FUNC_7(&VAR_15->input_lck);


   if (VAR_17 != ((void*)0))
    FUNC_8(VAR_17);

   FUNC_5(VAR_15);

   return;
  }

  VAR_15->wtot = 0;

   FUNC_4(VAR_16, VAR_15);

  FUNC_7(&VAR_15->input_lck);






  if (VAR_17 != ((void*)0))
   FUNC_3(((void*)0), VAR_17,
       VAR_18, VAR_15->mode);
 }


 FUNC_0(0);
}
