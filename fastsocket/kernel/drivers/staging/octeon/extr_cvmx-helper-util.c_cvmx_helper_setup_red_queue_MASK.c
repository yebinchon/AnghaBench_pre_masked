
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long prb_con; int avg_con; int new_con; int use_pcnt; } ;
union cvmx_ipd_red_quex_param {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_3__ {int drop; int pass; } ;
union cvmx_ipd_qosx_red_marks {TYPE_1__ s; scalar_t__ u64; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;

int FUNC_3(int VAR_0, int VAR_1, int VAR_2)
{
 union cvmx_ipd_qosx_red_marks VAR_3;
 union cvmx_ipd_red_quex_param VAR_4;




 VAR_3.u64 = 0;
 VAR_3.s.drop = VAR_2;
 VAR_3.s.pass = VAR_1;
 FUNC_2(FUNC_0(VAR_0), VAR_3.u64);


 VAR_4.u64 = 0;
 VAR_4.s.prb_con =
     (255ul << 24) / (VAR_3.s.pass - VAR_3.s.drop);
 VAR_4.s.avg_con = 1;
 VAR_4.s.new_con = 255;
 VAR_4.s.use_pcnt = 1;
 FUNC_2(FUNC_1(VAR_0), VAR_4.u64);
 return 0;
}
