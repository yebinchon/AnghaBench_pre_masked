
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fpf_wr; } ;
union cvmx_fpa_fpfx_marks {void* u64; TYPE_1__ s; } ;
struct TYPE_4__ {int enb; } ;
union cvmx_fpa_ctl_status {void* u64; TYPE_2__ s; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,void*) ;

__attribute__((used)) static inline void FUNC_5(void)
{
 union cvmx_fpa_ctl_status VAR_2;

 VAR_2.u64 = FUNC_2(VAR_0);
 if (VAR_2.s.enb) {
  FUNC_0
      ("Warning: Enabling FPA when FPA already enabled.\n");
 }





 if (FUNC_1()) {
  union cvmx_fpa_fpfx_marks VAR_3;
  int VAR_4;
  for (VAR_4 = 1; VAR_4 < 8; VAR_4++) {
   VAR_3.u64 =
       FUNC_2(VAR_1 + (VAR_4 - 1) * 8ull);
   VAR_3.s.fpf_wr = 0xe0;
   FUNC_4(VAR_1 + (VAR_4 - 1) * 8ull,
           VAR_3.u64);
  }


  FUNC_3(10);
 }


 VAR_2.u64 = 0;
 VAR_2.s.enb = 1;
 FUNC_4(VAR_0, VAR_2.u64);
}
