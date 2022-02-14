
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int pre_free; } ;
union cvmx_gmxx_rxx_frm_ctl {int u64; TYPE_4__ s; } ;
struct TYPE_10__ {int en; } ;
union cvmx_gmxx_prtx_cfg {int u64; TYPE_5__ s; } ;
struct TYPE_6__ {scalar_t__ en; int type; } ;
union cvmx_gmxx_inf_mode {TYPE_1__ s; void* u64; } ;
struct TYPE_7__ {void* prt_en; } ;
union cvmx_asxx_tx_prt_en {int u64; TYPE_2__ s; } ;
struct TYPE_8__ {void* prt_en; } ;
union cvmx_asxx_rx_prt_en {int u64; TYPE_3__ s; } ;
struct cvmx_sysinfo {int cpu_clock_hz; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int,int,int ) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 void* FUNC_14 (int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 () ;
 void* FUNC_19 (int ) ;
 struct cvmx_sysinfo* FUNC_20 () ;
 int FUNC_21 (int ,int) ;

int FUNC_22(int VAR_3)
{
 int VAR_4 = FUNC_17(VAR_3);
 int VAR_5;
 struct cvmx_sysinfo *VAR_6 = FUNC_20();
 union cvmx_gmxx_inf_mode VAR_7;
 union cvmx_asxx_tx_prt_en VAR_8;
 union cvmx_asxx_rx_prt_en VAR_9;

 VAR_7.u64 = FUNC_19(FUNC_4(VAR_3));

 if (VAR_7.s.en == 0)
  return -1;
 if ((FUNC_9(VAR_0) ||
      FUNC_9(VAR_2)) && VAR_7.s.type == 1)

  return -1;


 VAR_8.u64 = 0;
 VAR_8.s.prt_en = FUNC_14(VAR_4);
 FUNC_21(FUNC_3(VAR_3), VAR_8.u64);

 VAR_9.u64 = 0;
 VAR_9.s.prt_en = FUNC_14(VAR_4);
 FUNC_21(FUNC_1(VAR_3), VAR_9.u64);


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {



  if (FUNC_18())
   FUNC_10(VAR_3, VAR_5,
             VAR_6->
             cpu_clock_hz);
  else {





   union cvmx_gmxx_rxx_frm_ctl VAR_10;
   VAR_10.u64 =
       FUNC_19(FUNC_6
       (VAR_5, VAR_3));

   VAR_10.s.pre_free = 1;
   FUNC_21(FUNC_6(VAR_5, VAR_3),
           VAR_10.u64);
  }
  FUNC_21(FUNC_8(VAR_5, VAR_3),
          20000);
  FUNC_21(FUNC_7
          (VAR_5, VAR_3), 19000);

  if (FUNC_9(VAR_1)) {
   FUNC_21(FUNC_2(VAR_5, VAR_3),
           16);
   FUNC_21(FUNC_0(VAR_5, VAR_3),
           16);
  } else {
   FUNC_21(FUNC_2(VAR_5, VAR_3),
           24);
   FUNC_21(FUNC_0(VAR_5, VAR_3),
           24);
  }
 }

 FUNC_11(VAR_3, VAR_4);


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  union cvmx_gmxx_prtx_cfg VAR_11;
  FUNC_16(FUNC_15
       (VAR_3, VAR_5));
  VAR_11.u64 =
      FUNC_19(FUNC_5(VAR_5, VAR_3));
  VAR_11.s.en = 1;
  FUNC_21(FUNC_5(VAR_5, VAR_3),
          VAR_11.u64);
 }
 FUNC_12(VAR_3);
 FUNC_13(VAR_3);

 return 0;
}
