
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ qlm_cfg; int lane_swp; int lnk_enb; } ;
union cvmx_pescx_ctl_status {void* u64; TYPE_3__ s; } ;
struct TYPE_8__ {int m_cpl_len_err; } ;
union cvmx_pciercx_cfg455 {void* u32; TYPE_2__ s; } ;
struct TYPE_7__ {int lme; } ;
union cvmx_pciercx_cfg452 {void* u32; TYPE_1__ s; } ;
struct TYPE_11__ {int rtl; } ;
union cvmx_pciercx_cfg448 {void* u32; TYPE_5__ s; } ;
struct TYPE_10__ {scalar_t__ dlla; int nlw; } ;
union cvmx_pciercx_cfg032 {TYPE_4__ s; void* u32; } ;
typedef int uint64_t ;
struct TYPE_12__ {int cpu_clock_hz; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 () ;
 void* FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ,void*) ;
 void* FUNC_11 (int ) ;
 TYPE_6__* FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,void*) ;

__attribute__((used)) static int FUNC_15(int VAR_3)
{
 uint64_t VAR_4;
 union cvmx_pescx_ctl_status VAR_5;
 union cvmx_pciercx_cfg452 VAR_6;
 union cvmx_pciercx_cfg032 VAR_7;
 union cvmx_pciercx_cfg448 VAR_8;


 VAR_6 =
     FUNC_9(VAR_3, FUNC_2(VAR_3));
 VAR_5.u64 = FUNC_11(FUNC_4(VAR_3));
 if (VAR_5.s.qlm_cfg == 0) {

  VAR_6 = 0xf;
 } else {

  VAR_6 = 0x7;
 }
 FUNC_10(VAR_3, FUNC_2(VAR_3),
        VAR_6);






 if (FUNC_5(VAR_2)) {
  union cvmx_pciercx_cfg455 VAR_9;
  VAR_9 =
      FUNC_9(VAR_3,
     FUNC_3(VAR_3));
  VAR_9 = 1;
  FUNC_10(VAR_3, FUNC_3(VAR_3),
         VAR_9);
 }


 if (FUNC_5(VAR_0) && (VAR_3 == 1)) {
  VAR_5.s.lane_swp = 1;
  FUNC_14(FUNC_4(VAR_3),
          VAR_5.u64);
 }


 VAR_5.u64 = FUNC_11(FUNC_4(VAR_3));
 VAR_5.s.lnk_enb = 1;
 FUNC_14(FUNC_4(VAR_3), VAR_5.u64);





 if (FUNC_5(VAR_1))
  FUNC_6(0);


 FUNC_7("PCIe: Waiting for port %d link\n", VAR_3);
 VAR_4 = FUNC_8();
 do {
  if (FUNC_8() - VAR_4 >
      2 * FUNC_12()->cpu_clock_hz) {
   FUNC_7("PCIe: Port %d link timeout\n",
         VAR_3);
   return -1;
  }
  FUNC_13(10000);
  VAR_7 =
      FUNC_9(VAR_3,
     FUNC_0(VAR_3));
 } while (VAR_7 == 0);


 FUNC_7("PCIe: Port %d link active, %d lanes\n", VAR_3,
       VAR_7);
 VAR_8 =
     FUNC_9(VAR_3, FUNC_1(VAR_3));
 switch (VAR_7) {
 case 1:
  VAR_8 = 1677;
  break;
 case 2:
  VAR_8 = 867;
  break;
 case 4:
  VAR_8 = 462;
  break;
 case 8:
  VAR_8 = 258;
  break;
 }
 FUNC_10(VAR_3, FUNC_1(VAR_3),
        VAR_8);

 return 0;
}
