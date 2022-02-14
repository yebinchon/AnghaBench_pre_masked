
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int loopbck1; } ;
union cvmx_pcsx_mrx_control_reg {void* u64; TYPE_2__ s; } ;
struct TYPE_3__ {int loopbck2; } ;
union cvmx_pcsx_miscx_ctl_reg {void* u64; TYPE_1__ s; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,void*) ;

int FUNC_7(int VAR_0, int VAR_1,
        int VAR_2)
{
 int VAR_3 = FUNC_4(VAR_0);
 int VAR_4 = FUNC_3(VAR_0);
 union cvmx_pcsx_mrx_control_reg VAR_5;
 union cvmx_pcsx_miscx_ctl_reg VAR_6;

 VAR_5.u64 =
     FUNC_5(FUNC_1(VAR_4, VAR_3));
 VAR_5.s.loopbck1 = VAR_1;
 FUNC_6(FUNC_1(VAR_4, VAR_3),
         VAR_5.u64);

 VAR_6.u64 =
     FUNC_5(FUNC_0(VAR_4, VAR_3));
 VAR_6.s.loopbck2 = VAR_2;
 FUNC_6(FUNC_0(VAR_4, VAR_3),
         VAR_6.u64);

 FUNC_2(VAR_3, VAR_4);
 return 0;
}
