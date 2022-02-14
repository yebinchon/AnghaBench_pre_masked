
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


struct TYPE_11__ {int link; int dup; int speed; } ;
union cvmx_pcsx_sgmx_an_adv_reg {void* u64; TYPE_5__ s; } ;
struct TYPE_10__ {scalar_t__ mac_phy; scalar_t__ mode; } ;
union cvmx_pcsx_miscx_ctl_reg {TYPE_4__ s; void* u64; } ;
struct TYPE_8__ {unsigned long long count; } ;
union cvmx_pcsx_linkx_timer_count_reg {void* u64; TYPE_2__ s; } ;
struct TYPE_9__ {int pause; int hfd; int fd; scalar_t__ rem_flt; } ;
union cvmx_pcsx_anx_adv_reg {void* u64; TYPE_3__ s; } ;
struct TYPE_7__ {scalar_t__ en; } ;
union cvmx_gmxx_prtx_cfg {void* u64; TYPE_1__ s; } ;
typedef unsigned long long uint64_t ;
struct TYPE_12__ {int cpu_clock_hz; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 void* FUNC_5 (int ) ;
 TYPE_6__* FUNC_6 () ;
 int FUNC_7 (int ,void*) ;

__attribute__((used)) static int FUNC_8(int VAR_0, int VAR_1)
{
 const uint64_t VAR_2 = FUNC_6()->cpu_clock_hz / 1000000;
 union cvmx_pcsx_miscx_ctl_reg VAR_3;
 union cvmx_pcsx_linkx_timer_count_reg VAR_4;
 union cvmx_gmxx_prtx_cfg VAR_5;


 VAR_5.u64 = FUNC_5(FUNC_0(VAR_1, VAR_0));
 VAR_5.s.en = 0;
 FUNC_7(FUNC_0(VAR_1, VAR_0), VAR_5.u64);






 VAR_3.u64 =
     FUNC_5(FUNC_3(VAR_1, VAR_0));
 VAR_4.u64 =
     FUNC_5(FUNC_2(VAR_1, VAR_0));
 if (VAR_3.s.mode) {

  VAR_4.s.count =
      (10000ull * VAR_2) >> 10;
 } else {

  VAR_4.s.count =
      (1600ull * VAR_2) >> 10;
 }
 FUNC_7(FUNC_2(VAR_1, VAR_0),
         VAR_4.u64);
 if (VAR_3.s.mode) {

  union cvmx_pcsx_anx_adv_reg VAR_6;
  VAR_6.u64 =
      FUNC_5(FUNC_1(VAR_1, VAR_0));
  VAR_6.s.rem_flt = 0;
  VAR_6.s.pause = 3;
  VAR_6.s.hfd = 1;
  VAR_6.s.fd = 1;
  FUNC_7(FUNC_1(VAR_1, VAR_0),
          VAR_6.u64);
 } else {
  union cvmx_pcsx_miscx_ctl_reg VAR_7;
  VAR_7.u64 =
      FUNC_5(FUNC_3(VAR_1, VAR_0));
  if (VAR_7.s.mac_phy) {

   union cvmx_pcsx_sgmx_an_adv_reg VAR_8;
   VAR_8.u64 =
       FUNC_5(FUNC_4
       (VAR_1, VAR_0));
   VAR_8.s.link = 1;
   VAR_8.s.dup = 1;
   VAR_8.s.speed = 2;
   FUNC_7(FUNC_4
           (VAR_1, VAR_0),
           VAR_8.u64);
  } else {

  }
 }
 return 0;
}
