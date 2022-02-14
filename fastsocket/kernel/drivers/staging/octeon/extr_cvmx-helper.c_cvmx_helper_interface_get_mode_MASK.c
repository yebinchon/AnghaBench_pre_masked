
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int en; } ;
struct TYPE_4__ {int mode; } ;
union cvmx_gmxx_inf_mode {TYPE_2__ s; TYPE_1__ cn56xx; int u64; } ;
typedef int cvmx_helper_interface_mode_t ;
struct TYPE_6__ {scalar_t__ board_type; int board_rev_major; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 () ;

cvmx_helper_interface_mode_t FUNC_4(int VAR_17)
{
 union cvmx_gmxx_inf_mode VAR_18;
 if (VAR_17 == 2)
  return VAR_4;

 if (VAR_17 == 3) {
  if (FUNC_1(VAR_15)
      || FUNC_1(VAR_14))
   return VAR_3;
  else
   return VAR_1;
 }

 if (VAR_17 == 0
     && FUNC_3()->board_type == VAR_0
     && FUNC_3()->board_rev_major == 1) {
  return VAR_2;
 }


 if ((VAR_17 == 1)
     && (FUNC_1(VAR_11) || FUNC_1(VAR_10)
  || FUNC_1(VAR_13)
  || FUNC_1(VAR_14)))
  return VAR_1;

 VAR_18.u64 = FUNC_2(FUNC_0(VAR_17));

 if (FUNC_1(VAR_15) || FUNC_1(VAR_14)) {
  switch (VAR_18.cn56xx.mode) {
  case 0:
   return VAR_1;
  case 1:
   return VAR_9;
  case 2:
   return VAR_7;
  case 3:
   return VAR_5;
  default:
   return VAR_1;
  }
 } else {
  if (!VAR_18.s.en)
   return VAR_1;

  if (VAR_18.s.type) {
   if (FUNC_1(VAR_12)
       || FUNC_1(VAR_16))
    return VAR_8;
   else
    return VAR_2;
  } else
   return VAR_6;
 }
}
