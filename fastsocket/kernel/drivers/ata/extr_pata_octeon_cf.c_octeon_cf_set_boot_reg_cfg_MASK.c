
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tim_mult; int en; scalar_t__ ale; scalar_t__ orbit; scalar_t__ oe_ext; scalar_t__ we_ext; scalar_t__ sam; scalar_t__ rd_dly; scalar_t__ dmack; } ;
union cvmx_mio_boot_reg_cfgx {int u64; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_0)
{
 union cvmx_mio_boot_reg_cfgx VAR_1;
 VAR_1.u64 = FUNC_1(FUNC_0(VAR_0));
 VAR_1.s.dmack = 0;
 VAR_1.s.tim_mult = 2;
 VAR_1.s.rd_dly = 0;
 VAR_1.s.sam = 0;
 VAR_1.s.we_ext = 0;
 VAR_1.s.oe_ext = 0;
 VAR_1.s.en = 1;
 VAR_1.s.orbit = 0;
 VAR_1.s.ale = 0;
 FUNC_2(FUNC_0(VAR_0), VAR_1.u64);
}
