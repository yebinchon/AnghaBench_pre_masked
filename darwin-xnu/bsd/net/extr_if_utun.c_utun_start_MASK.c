
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct utun_pcb {scalar_t__ utun_max_pending_packets; int utun_ifp; int utun_unit; scalar_t__ utun_ctlref; int utun_pcb_lock; int * utun_kpipe_rxring; scalar_t__ utun_kpipe_enabled; } ;
typedef int mbuf_t ;
typedef int ifnet_t ;
typedef scalar_t__ errno_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct utun_pcb* FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,int ) ;

__attribute__((used)) static void
FUNC_13(ifnet_t VAR_0)
{
 mbuf_t VAR_1;
 struct utun_pcb *VAR_2 = FUNC_7(VAR_0);

 FUNC_0(VAR_2 != ((void*)0));
 for (;;) {
  bool VAR_3 = 1;
  FUNC_6(VAR_2->utun_ifp);

  u_int32_t VAR_4;
  errno_t VAR_5 = FUNC_1(VAR_2->utun_ctlref, VAR_2->utun_unit, &VAR_4);
  if (VAR_5 != 0) {
   FUNC_11("utun_start: ctl_getenqueuepacketcount returned error %d\n", VAR_5);
   VAR_4 = 0;
  }

  VAR_3 = (VAR_4 < VAR_2->utun_max_pending_packets);
  if (!VAR_3 && VAR_2->utun_ctlref) {
   u_int32_t VAR_6 = 0;
   if (FUNC_2(VAR_2->utun_ctlref, VAR_2->utun_unit, &VAR_6) == 0) {
    if (VAR_6 > 0) {


     VAR_3 = 1;
    }
   }
  }
  if (!VAR_3) {
   errno_t VAR_7 = FUNC_4(VAR_0);
   if (VAR_7 != 0) {
    FUNC_11("utun_start: ifnet_disable_output returned error %d\n", VAR_7);
   }
   FUNC_5(VAR_2->utun_ifp);
   break;
  }
  FUNC_5(VAR_2->utun_ifp);
  if (FUNC_3(VAR_0, &VAR_1) != 0) {
   break;
  }
  if (FUNC_12(VAR_0, VAR_1) != 0) {
   break;
  }
 }
}
