
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct utun_pcb {scalar_t__ utun_ifp; int utun_flags; int utun_ext_ifdata_stats; int utun_use_netif; int utun_unit; scalar_t__ utun_ctlref; } ;
typedef int mbuf_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ ifnet_t ;
typedef scalar_t__ errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct utun_pcb*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 struct utun_pcb* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int,int,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,scalar_t__) ;

__attribute__((used)) static errno_t
FUNC_12(ifnet_t VAR_3,
   mbuf_t VAR_4)
{
 struct utun_pcb *VAR_5 = FUNC_5(VAR_3);
 errno_t VAR_6;

 FUNC_1(VAR_3 == VAR_5->utun_ifp);




 {
  if (FUNC_7(VAR_4) >= (int32_t)FUNC_0(VAR_5)) {
   FUNC_2(VAR_5->utun_ifp, VAR_1, VAR_4, 0, 0);
  }
 }

 if (VAR_5->utun_flags & VAR_2) {

  FUNC_9(VAR_4);
  return 0;
 }


 if (VAR_5->utun_ctlref) {
  int VAR_7;




  if (FUNC_7(VAR_4) >= (int32_t)FUNC_0(VAR_5)) {
   *(u_int32_t *)FUNC_8(VAR_4) = FUNC_4(*(u_int32_t *)FUNC_8(VAR_4));
  }

  VAR_7 = FUNC_10(VAR_4);
  VAR_6 = FUNC_3(VAR_5->utun_ctlref, VAR_5->utun_unit, VAR_4, VAR_0);
  if (VAR_6 != 0) {
   FUNC_9(VAR_4);
   FUNC_11("utun_output - ctl_enqueuembuf failed: %d\n", VAR_6);



   {
    FUNC_6(VAR_3, 0, 0, 1);
   }
  } else {



   {
    if (!VAR_5->utun_ext_ifdata_stats) {
     FUNC_6(VAR_3, 1, VAR_7, 0);
    }
   }
  }
 } else {
  FUNC_9(VAR_4);
 }

 return 0;
}
