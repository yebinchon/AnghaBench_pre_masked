
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ minerr_en; scalar_t__ maxerr_en; } ;
union cvmx_pip_prt_cfgx {void* u64; TYPE_1__ s; } ;
struct TYPE_4__ {scalar_t__ port_bit2; } ;
union cvmx_ipd_sub_port_fcs {void* u64; TYPE_2__ s; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void*) ;

int FUNC_4(int VAR_1)
{
 union cvmx_ipd_sub_port_fcs VAR_2;
 int VAR_3 = 4;
 int VAR_4;



 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  union cvmx_pip_prt_cfgx VAR_5;
  int VAR_6 = FUNC_1(VAR_1, VAR_4);
  VAR_5.u64 = FUNC_2(FUNC_0(VAR_6));
  VAR_5.s.maxerr_en = 0;
  VAR_5.s.minerr_en = 0;
  FUNC_3(FUNC_0(VAR_6), VAR_5.u64);
 }


 VAR_2.u64 = FUNC_2(VAR_0);
 VAR_2.s.port_bit2 = 0;
 FUNC_3(VAR_0, VAR_2.u64);
 return VAR_3;
}
