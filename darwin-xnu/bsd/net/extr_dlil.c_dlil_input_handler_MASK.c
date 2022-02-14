
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ u_int32_t ;
struct thread {int dummy; } ;
struct mbuf {int dummy; } ;
struct ifnet_stat_increment_param {scalar_t__ packets_in; scalar_t__ bytes_in; } ;
struct ifnet {scalar_t__ if_family; scalar_t__ if_type; struct dlil_threading_info* if_inp; } ;
struct dlil_threading_info {scalar_t__ wloop_thr; scalar_t__ poll_thr; scalar_t__ tag; scalar_t__ input_mbuf_cnt; int input_waiting; int input_lck; int wtot; scalar_t__ input_mit_tcall; int rcvq_pkts; scalar_t__ net_affinity; } ;
struct dlil_main_threading_info {int lo_rcvq_pkts; } ;
typedef int errno_t ;
typedef int caddr_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct mbuf*,struct mbuf*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (struct thread*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct ifnet_stat_increment_param const*,struct dlil_threading_info*,scalar_t__) ;
 int FUNC_5 (struct ifnet*,struct dlil_threading_info*) ;
 struct dlil_threading_info* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct ifnet* VAR_10 ;
 struct mbuf* FUNC_9 (struct mbuf*) ;
 int FUNC_10 (char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct thread*) ;
 int FUNC_15 (int ) ;

errno_t
FUNC_16(struct ifnet *VAR_11, struct mbuf *VAR_12,
    struct mbuf *VAR_13, const struct ifnet_stat_increment_param *VAR_14,
    boolean_t VAR_15, struct thread *VAR_16)
{
 struct dlil_threading_info *VAR_17;
 u_int32_t VAR_18 = VAR_14->packets_in;
 u_int32_t VAR_19 = VAR_14->bytes_in;

 if ((VAR_17 = VAR_11->if_inp) == ((void*)0))
  VAR_17 = VAR_6;






 FUNC_7(&VAR_17->input_lck);
 if (VAR_17 != VAR_6 && VAR_17->net_affinity && VAR_16 != ((void*)0) &&
     ((!VAR_15 && VAR_17->wloop_thr == VAR_4) ||
     (VAR_15 && VAR_17->poll_thr == VAR_4))) {
  u_int32_t VAR_20 = VAR_17->tag;

  if (VAR_15) {
   FUNC_0(VAR_17->poll_thr == VAR_4);
   VAR_17->poll_thr = VAR_16;
  } else {
   FUNC_0(VAR_17->wloop_thr == VAR_4);
   VAR_17->wloop_thr = VAR_16;
  }
  FUNC_8(&VAR_17->input_lck);


  (void) FUNC_3(VAR_16, VAR_20);






  FUNC_14(VAR_16);
  FUNC_7(&VAR_17->input_lck);
 }

 FUNC_0(VAR_12 != ((void*)0) || (VAR_13 == ((void*)0) && VAR_18 == 0));
 if (VAR_12 != ((void*)0)) {
  if (VAR_17 == VAR_6 && VAR_11 == VAR_10) {
   struct dlil_main_threading_info *VAR_21 =
       (struct dlil_main_threading_info *)VAR_17;
   FUNC_1(&VAR_21->lo_rcvq_pkts, VAR_12, VAR_13,
       VAR_18, VAR_19);
  } else {
   FUNC_1(&VAR_17->rcvq_pkts, VAR_12, VAR_13,
       VAR_18, VAR_19);
  }
 }
 FUNC_4(VAR_14, VAR_17, VAR_15);






 if (VAR_17 == VAR_6)
  FUNC_5(VAR_11, VAR_17);

 if (VAR_17->input_mit_tcall &&
     FUNC_11(&VAR_17->rcvq_pkts) >= VAR_9 &&
     FUNC_11(&VAR_17->rcvq_pkts) < VAR_8 &&
     (VAR_11->if_family == VAR_2 ||
     VAR_11->if_type == VAR_3)
     ) {
  if (!FUNC_13(VAR_17->input_mit_tcall)) {
   uint64_t VAR_22;
   FUNC_2(VAR_7,
       1, &VAR_22);
   (void) FUNC_12(
       VAR_17->input_mit_tcall, VAR_22);
  }
 } else {
  VAR_17->input_waiting |= VAR_1;
  if (!(VAR_17->input_waiting & VAR_0)) {
   VAR_17->wtot++;
   FUNC_15((caddr_t)&VAR_17->input_waiting);
  }
 }
 FUNC_8(&VAR_17->input_lck);

 return (0);
}
