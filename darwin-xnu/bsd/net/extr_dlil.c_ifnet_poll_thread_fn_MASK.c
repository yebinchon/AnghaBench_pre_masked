
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_result_t ;
typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct mbuf {int dummy; } ;
struct ifnet_stat_increment_param {int packets_in; int bytes_in; } ;
struct ifnet {scalar_t__ if_poll_thread; int if_poll_active; scalar_t__ if_poll_req; struct timespec if_poll_cycle; int if_poll_lock; int (* if_input_poll ) (struct ifnet*,int ,int,struct mbuf**,struct mbuf**,int*,int*) ;struct dlil_threading_info* if_inp; } ;
struct dlil_threading_info {scalar_t__ rxpoll_plim; int rxpoll_phiwat; int rxpoll_pavg; int rxpoll_pmax; int rxpoll_wavg; int rxpoll_bavg; int rcvq_pkts; } ;
typedef int s ;
typedef int ifname ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ifnet_stat_increment_param*,int) ;
 int FUNC_3 () ;
 int VAR_6 ;
 char* FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*,struct mbuf*,struct mbuf*,struct ifnet_stat_increment_param*,int ,int ) ;
 int FUNC_7 (struct ifnet*,int) ;
 int FUNC_8 (struct ifnet*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__*,int *,int,char*,struct timespec*) ;
 int FUNC_12 (char*,char*,...) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,int,char*,char*) ;
 int FUNC_15 (struct ifnet*,int ,int,struct mbuf**,struct mbuf**,int*,int*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void
FUNC_18(void *VAR_7, wait_result_t VAR_8)
{
#pragma unused(w)
 struct dlil_threading_info *VAR_9;
 struct ifnet *VAR_10 = VAR_7;
 char VAR_11[VAR_1 + 1];
 struct timespec *VAR_12 = ((void*)0);
 struct ifnet_stat_increment_param VAR_13;

 FUNC_14(VAR_11, sizeof (VAR_11), "%s_poller",
     FUNC_4(VAR_10));
 FUNC_2(&VAR_13, sizeof (VAR_13));

 FUNC_9(&VAR_10->if_poll_lock);

 VAR_9 = VAR_10->if_inp;
 FUNC_1(VAR_9 != ((void*)0));

 for (;;) {
  if (VAR_10->if_poll_thread != VAR_4) {
   (void) FUNC_11(&VAR_10->if_poll_thread, &VAR_10->if_poll_lock,
       (VAR_3 - 1) | VAR_2, VAR_11, VAR_12);
  }


  if (VAR_10->if_poll_thread == VAR_4) {
   FUNC_8(VAR_10, ((void*)0));
   FUNC_10(&VAR_10->if_poll_lock);

   if (VAR_6) {
    FUNC_12("%s: poller thread terminated\n",
        FUNC_4(VAR_10));
   }


   FUNC_16(FUNC_3());

   FUNC_17(FUNC_3());

   return;
  }

  VAR_10->if_poll_active = 1;
  for (;;) {
   struct mbuf *VAR_14, *VAR_15;
   u_int32_t VAR_16, VAR_17, VAR_18;
   u_int16_t VAR_19 = VAR_10->if_poll_req;

   FUNC_10(&VAR_10->if_poll_lock);






   if (!FUNC_7(VAR_10, 1)) {
    FUNC_9(&VAR_10->if_poll_lock);
    break;
   }

   VAR_16 = (VAR_9->rxpoll_plim != 0) ? VAR_9->rxpoll_plim :
       FUNC_0((FUNC_13(&VAR_9->rcvq_pkts)),
       (VAR_9->rxpoll_phiwat << 2));

   if (VAR_6 > 1) {
    FUNC_12("%s: polling up to %d pkts, "
        "pkts avg %d max %d, wreq avg %d, "
        "bytes avg %d\n",
        FUNC_4(VAR_10), VAR_16,
        VAR_9->rxpoll_pavg, VAR_9->rxpoll_pmax,
        VAR_9->rxpoll_wavg, VAR_9->rxpoll_bavg);
   }


   ((*VAR_10->if_input_poll)(VAR_10, 0, VAR_16, &VAR_14, &VAR_15,
       &VAR_17, &VAR_18));

   if (VAR_14 != ((void*)0)) {
    FUNC_1(VAR_15 != ((void*)0) && VAR_17 > 0);

    if (VAR_6 > 1) {
     FUNC_12("%s: polled %d pkts, "
         "pkts avg %d max %d, wreq avg %d, "
         "bytes avg %d\n",
         FUNC_4(VAR_10), VAR_17,
         VAR_9->rxpoll_pavg, VAR_9->rxpoll_pmax,
         VAR_9->rxpoll_wavg, VAR_9->rxpoll_bavg);
    }


    VAR_13.packets_in = VAR_17;
    VAR_13.bytes_in = VAR_18;

    (void) FUNC_6(VAR_10, VAR_14, VAR_15,
        &VAR_13, VAR_5, VAR_5);
   } else {
    if (VAR_6 > 1) {
     FUNC_12("%s: no packets, "
         "pkts avg %d max %d, wreq avg %d, "
         "bytes avg %d\n",
         FUNC_4(VAR_10), VAR_9->rxpoll_pavg,
         VAR_9->rxpoll_pmax, VAR_9->rxpoll_wavg,
         VAR_9->rxpoll_bavg);
    }

    (void) FUNC_6(VAR_10, ((void*)0), ((void*)0),
        ((void*)0), VAR_0, VAR_5);
   }


   FUNC_5(VAR_10);

   FUNC_9(&VAR_10->if_poll_lock);


   if (VAR_19 == VAR_10->if_poll_req) {
    break;
   }
  }
  VAR_10->if_poll_req = 0;
  VAR_10->if_poll_active = 0;





  VAR_12 = &VAR_10->if_poll_cycle;
  if (VAR_12->tv_sec == 0 && VAR_12->tv_nsec == 0)
   VAR_12 = ((void*)0);
 }


}
