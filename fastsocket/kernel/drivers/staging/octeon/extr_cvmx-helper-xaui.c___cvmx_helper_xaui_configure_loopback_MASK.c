
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int loopbck1; } ;
union cvmx_pcsxx_control1_reg {void* u64; TYPE_1__ s; } ;
struct TYPE_4__ {int en; } ;
union cvmx_gmxx_xaui_ext_loopback {void* u64; TYPE_2__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,void*) ;

extern int FUNC_6(int VAR_0,
       int VAR_1,
       int VAR_2)
{
 int VAR_3 = FUNC_3(VAR_0);
 union cvmx_pcsxx_control1_reg VAR_4;
 union cvmx_gmxx_xaui_ext_loopback VAR_5;


 VAR_4.u64 =
     FUNC_4(FUNC_1(VAR_3));
 VAR_4.s.loopbck1 = VAR_1;
 FUNC_5(FUNC_1(VAR_3),
         VAR_4.u64);


 VAR_5.u64 =
     FUNC_4(FUNC_0(VAR_3));
 VAR_5.s.en = VAR_2;
 FUNC_5(FUNC_0(VAR_3),
         VAR_5.u64);


 return FUNC_2(VAR_3);
}
