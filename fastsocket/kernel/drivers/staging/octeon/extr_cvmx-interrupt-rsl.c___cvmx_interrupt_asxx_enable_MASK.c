
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int txpsh; int txpop; int ovrflw; } ;
union cvmx_asxx_int_en {int u64; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(int VAR_2)
{
 int VAR_3;
 union cvmx_asxx_int_en VAR_4;





 if (FUNC_1(VAR_0) || FUNC_1(VAR_1))
  VAR_3 = 0xf;
 else
  VAR_3 = 0x7;


 VAR_4.u64 = FUNC_2(FUNC_0(VAR_2));
 VAR_4.s.txpsh = VAR_3;
 VAR_4.s.txpop = VAR_3;
 VAR_4.s.ovrflw = VAR_3;
 FUNC_3(FUNC_0(VAR_2), VAR_4.u64);
}
