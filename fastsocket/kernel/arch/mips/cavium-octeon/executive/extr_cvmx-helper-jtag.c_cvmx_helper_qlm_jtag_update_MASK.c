
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int update; int select; } ;
union cvmx_ciu_qlm_jtgd {scalar_t__ u64; TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(int VAR_2)
{
 union cvmx_ciu_qlm_jtgd VAR_3;


 VAR_3.u64 = 0;
 VAR_3.s.update = 1;
 if (!FUNC_0(VAR_1))
  VAR_3.s.select = 1 << VAR_2;
 FUNC_2(VAR_0, VAR_3.u64);
 do {
  VAR_3.u64 = FUNC_1(VAR_0);
 } while (VAR_3.s.update);
}
