
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int rcv_lnk; } ;
union cvmx_pcsxx_status1_reg {TYPE_3__ s; void* u64; } ;
struct TYPE_7__ {scalar_t__ ls; } ;
union cvmx_gmxx_tx_xaui_ctl {TYPE_1__ s; void* u64; } ;
struct TYPE_8__ {scalar_t__ status; } ;
union cvmx_gmxx_rx_xaui_ctl {TYPE_2__ s; void* u64; } ;
struct TYPE_10__ {int link_up; int full_duplex; int speed; } ;
struct TYPE_11__ {TYPE_4__ s; scalar_t__ u64; } ;
typedef TYPE_5__ cvmx_helper_link_info_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

cvmx_helper_link_info_t FUNC_9(int VAR_0)
{
 int VAR_1 = FUNC_6(VAR_0);
 union cvmx_gmxx_tx_xaui_ctl VAR_2;
 union cvmx_gmxx_rx_xaui_ctl VAR_3;
 union cvmx_pcsxx_status1_reg VAR_4;
 cvmx_helper_link_info_t VAR_5;

 VAR_2.u64 = FUNC_7(FUNC_3(VAR_1));
 VAR_3.u64 = FUNC_7(FUNC_1(VAR_1));
 VAR_4.u64 =
     FUNC_7(FUNC_5(VAR_1));
 VAR_5.u64 = 0;


 if ((VAR_2.s.ls == 0) && (VAR_3.s.status == 0) &&
     (VAR_4.s.rcv_lnk == 1)) {
  VAR_5.s.link_up = 1;
  VAR_5.s.full_duplex = 1;
  VAR_5.s.speed = 10000;
 } else {

  FUNC_8(FUNC_0(0, VAR_1), 0x0);
  FUNC_8(FUNC_2(VAR_1), 0x0);
  FUNC_8(FUNC_4(VAR_1), 0x0);
 }
 return VAR_5;
}
