
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int prt_enb; int avg_dly; int prb_dly; } ;
union cvmx_ipd_red_port_enable {scalar_t__ u64; TYPE_3__ s; } ;
struct TYPE_4__ {int page_cnt; scalar_t__ bp_enb; } ;
union cvmx_ipd_portx_bp_page_cnt {scalar_t__ u64; TYPE_1__ s; } ;
struct TYPE_5__ {scalar_t__ prt_enb; } ;
union cvmx_ipd_bp_prt_red_end {scalar_t__ u64; TYPE_2__ s; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int ,scalar_t__) ;

int FUNC_5(int VAR_2, int VAR_3)
{
 union cvmx_ipd_portx_bp_page_cnt VAR_4;
 union cvmx_ipd_bp_prt_red_end VAR_5;
 union cvmx_ipd_red_port_enable VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;


 VAR_4.u64 = 0;
 VAR_4.s.bp_enb = 0;
 VAR_4.s.page_cnt = 100;
 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  for (VAR_9 = FUNC_1(VAR_8);
       VAR_9 < FUNC_2(VAR_8); VAR_9++)
   FUNC_4(FUNC_0(VAR_9),
           VAR_4.u64);
 }

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
  FUNC_3(VAR_7, VAR_2, VAR_3);



 VAR_5.u64 = 0;
 VAR_5.s.prt_enb = 0;
 FUNC_4(VAR_0, VAR_5.u64);

 VAR_6.u64 = 0;
 VAR_6.s.prt_enb = 0xfffffffffull;
 VAR_6.s.avg_dly = 10000;
 VAR_6.s.prb_dly = 10000;
 FUNC_4(VAR_1, VAR_6.u64);

 return 0;
}
