
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ls; } ;
union cvmx_gmxx_tx_xaui_ctl {TYPE_2__ s; void* u64; } ;
struct TYPE_8__ {scalar_t__ status; } ;
union cvmx_gmxx_rx_xaui_ctl {TYPE_3__ s; void* u64; } ;
struct TYPE_6__ {int link_up; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
typedef TYPE_4__ cvmx_helper_link_info_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ) ;

int FUNC_5(int VAR_0, cvmx_helper_link_info_t VAR_1)
{
 int VAR_2 = FUNC_3(VAR_0);
 union cvmx_gmxx_tx_xaui_ctl VAR_3;
 union cvmx_gmxx_rx_xaui_ctl VAR_4;

 VAR_3.u64 = FUNC_4(FUNC_1(VAR_2));
 VAR_4.u64 = FUNC_4(FUNC_0(VAR_2));


 if (!VAR_1.s.link_up)
  return 0;


 if ((VAR_3.s.ls == 0) && (VAR_4.s.status == 0))
  return 0;


 return FUNC_2(VAR_2);
}
