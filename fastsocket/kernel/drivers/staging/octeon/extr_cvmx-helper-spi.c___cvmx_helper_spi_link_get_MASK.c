
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int status; int duplex; int speed; } ;
union cvmx_gmxx_rxx_rx_inbnd {TYPE_1__ s; } ;
struct TYPE_7__ {int link_up; int full_duplex; int speed; } ;
struct TYPE_8__ {TYPE_2__ s; scalar_t__ u64; } ;
typedef TYPE_3__ cvmx_helper_link_info_t ;
struct TYPE_9__ {scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 union cvmx_gmxx_rxx_rx_inbnd FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_4__* FUNC_4 () ;

cvmx_helper_link_info_t FUNC_5(int VAR_1)
{
 cvmx_helper_link_info_t VAR_2;
 int VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = FUNC_0(VAR_1);
 VAR_2.u64 = 0;

 if (FUNC_4()->board_type == VAR_0) {

  VAR_2.s.link_up = 1;
  VAR_2.s.full_duplex = 1;
  VAR_2.s.speed = 10000;
 } else if (FUNC_3(VAR_3)) {
  union cvmx_gmxx_rxx_rx_inbnd VAR_5 =
      FUNC_2(VAR_3, VAR_4);
  VAR_2.s.link_up = VAR_5.s.status;
  VAR_2.s.full_duplex = VAR_5.s.duplex;
  switch (VAR_5.s.speed) {
  case 0:
   VAR_2.s.speed = 10;
   break;
  case 1:
   VAR_2.s.speed = 100;
   break;
  case 2:
   VAR_2.s.speed = 1000;
   break;
  case 3:
   VAR_2.s.speed = 0;
   VAR_2.s.link_up = 0;
   break;
  }
 } else {


  VAR_2.s.link_up = 1;
  VAR_2.s.full_duplex = 1;
  VAR_2.s.speed = 10000;
 }
 return VAR_2;
}
