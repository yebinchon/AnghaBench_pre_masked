
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_result_t ;
typedef int u_int32_t ;
struct mbuf {int dummy; } ;
struct dlil_threading_info {scalar_t__ mode; int input_waiting; int input_lck; scalar_t__ wtot; int rcvq_pkts; int input_name; int * ifp; } ;
struct dlil_main_threading_info {int lo_rcvq_pkts; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 struct mbuf* FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int *,struct mbuf*,int ,scalar_t__) ;
 struct dlil_threading_info* VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_9 ;
 int FUNC_5 (int*,int *,int,int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;

__attribute__((used)) __attribute__((noreturn))
static void
FUNC_8(void *VAR_10, wait_result_t VAR_11)
{
#pragma unused(w)
 struct dlil_main_threading_info *VAR_12 = VAR_10;
 struct dlil_threading_info *VAR_13 = VAR_10;

 FUNC_0(VAR_13 == VAR_8);
 FUNC_0(VAR_13->ifp == ((void*)0));
 FUNC_0(VAR_13->mode == VAR_5);

 while (1) {
  struct mbuf *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
  u_int32_t VAR_16, VAR_17;
  boolean_t VAR_18;

  FUNC_3(&VAR_13->input_lck);


  while (!(VAR_13->input_waiting & ~VAR_0)) {
   VAR_13->input_waiting &= ~VAR_0;
   (void) FUNC_5(&VAR_13->input_waiting, &VAR_13->input_lck,
       (VAR_7 - 1) | VAR_6, VAR_13->input_name, ((void*)0));
  }

  VAR_13->input_waiting |= VAR_0;
  VAR_13->input_waiting &= ~VAR_2;


  FUNC_0(!(VAR_13->input_waiting & VAR_1));

  VAR_18 = (VAR_13->input_waiting &
      (VAR_4 | VAR_3));


  VAR_16 = FUNC_7(&VAR_13->rcvq_pkts);
  VAR_14 = FUNC_1(&VAR_13->rcvq_pkts, ((void*)0), ((void*)0), ((void*)0));


  VAR_17 = FUNC_7(&VAR_12->lo_rcvq_pkts);
  VAR_15 = FUNC_1(&VAR_12->lo_rcvq_pkts, ((void*)0), ((void*)0), ((void*)0));

  VAR_13->wtot = 0;

  FUNC_4(&VAR_13->input_lck);






  if (VAR_15 != ((void*)0))
   FUNC_2(VAR_9, VAR_15,
       VAR_17, VAR_13->mode);

  if (VAR_14 != ((void*)0))
   FUNC_2(((void*)0), VAR_14,
       VAR_16, VAR_13->mode);

  if (VAR_18)
   FUNC_6();
 }


 FUNC_0(0);
}
