
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct utun_pcb {scalar_t__ utun_max_pending_packets; int utun_ifp; } ;
typedef int kern_ctl_ref ;
typedef scalar_t__ errno_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(kern_ctl_ref VAR_0, u_int32_t VAR_1, void *VAR_2, int VAR_3)
{
#pragma unused(flags)
 bool VAR_4 = 0;
 struct utun_pcb *VAR_5 = VAR_2;
 if (VAR_5 == ((void*)0)) {
  return;
 }
 FUNC_3(VAR_5->utun_ifp);

 u_int32_t VAR_6;
 errno_t VAR_7 = FUNC_0(VAR_0, VAR_1, &VAR_6);
 if (VAR_7 != 0) {
  FUNC_4("utun_ctl_rcvd: ctl_getenqueuepacketcount returned error %d\n", VAR_7);
  VAR_6 = 0;
 }

 if (VAR_6 < VAR_5->utun_max_pending_packets) {
  VAR_4 = 1;
 }

 if (VAR_4) {
  errno_t VAR_8 = FUNC_1(VAR_5->utun_ifp);
  if (VAR_8 != 0) {
   FUNC_4("utun_ctl_rcvd: ifnet_enable_output returned error %d\n", VAR_8);
  }
 }
 FUNC_2(VAR_5->utun_ifp);
}
