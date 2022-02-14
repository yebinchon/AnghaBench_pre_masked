
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int int_loop; } ;
union cvmx_asxx_prt_loop {TYPE_1__ s; int u64; } ;
struct TYPE_7__ {int full_duplex; int link_up; int speed; } ;
struct TYPE_8__ {TYPE_2__ s; scalar_t__ u64; } ;
typedef TYPE_3__ cvmx_helper_link_info_t ;


 int FUNC_0 (int) ;
 TYPE_3__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

cvmx_helper_link_info_t FUNC_5(int VAR_0)
{
 int VAR_1 = FUNC_3(VAR_0);
 int VAR_2 = FUNC_2(VAR_0);
 union cvmx_asxx_prt_loop VAR_3;

 VAR_3.u64 = FUNC_4(FUNC_0(VAR_1));
 if (VAR_3.s.int_loop & (1 << VAR_2)) {

  cvmx_helper_link_info_t VAR_4;
  VAR_4.u64 = 0;
  VAR_4.s.full_duplex = 1;
  VAR_4.s.link_up = 1;
  VAR_4.s.speed = 1000;
  return VAR_4;
 } else
  return FUNC_1(VAR_0);
}
