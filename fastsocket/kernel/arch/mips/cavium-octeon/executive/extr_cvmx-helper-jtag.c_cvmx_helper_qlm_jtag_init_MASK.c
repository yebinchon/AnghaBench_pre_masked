
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clk_div; int bypass; scalar_t__ mux_sel; } ;
union cvmx_ciu_qlm_jtgc {scalar_t__ u64; TYPE_1__ s; } ;
typedef int uint32_t ;
struct TYPE_4__ {int cpu_clock_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;

void FUNC_4(void)
{
 union cvmx_ciu_qlm_jtgc VAR_2;
 uint32_t VAR_3 = 0;
 uint32_t VAR_4 = FUNC_2()->cpu_clock_hz / (25 * 1000000);
 VAR_4 = (VAR_4 - 1) >> 2;

 while (VAR_4) {
  VAR_3++;
  VAR_4 = VAR_4 >> 1;
 }





 VAR_2.u64 = 0;
 VAR_2.s.clk_div = VAR_3;
 VAR_2.s.mux_sel = 0;
 if (FUNC_0(VAR_1))
  VAR_2.s.bypass = 0x3;
 else
  VAR_2.s.bypass = 0xf;
 FUNC_3(VAR_0, VAR_2.u64);
 FUNC_1(VAR_0);
}
