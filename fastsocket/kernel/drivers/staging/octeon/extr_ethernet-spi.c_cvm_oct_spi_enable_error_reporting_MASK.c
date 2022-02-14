
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int frmerr; int unxfrm; int nosync; int diperr; int datovr; int ovrbst; int calpar1; int calpar0; } ;
union cvmx_stxx_int_msk {void* u64; TYPE_2__ s; } ;
struct TYPE_3__ {int calerr; int syncerr; int diperr; int tpaovr; int rsverr; int drwnng; int clserr; int spiovr; int abnorm; int prtnxa; } ;
union cvmx_spxx_int_msk {void* u64; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void*) ;

__attribute__((used)) static void FUNC_4(int VAR_0)
{
 union cvmx_spxx_int_msk VAR_1;
 union cvmx_stxx_int_msk VAR_2;

 VAR_1.u64 = FUNC_2(FUNC_0(VAR_0));
 VAR_1.s.calerr = 1;
 VAR_1.s.syncerr = 1;
 VAR_1.s.diperr = 1;
 VAR_1.s.tpaovr = 1;
 VAR_1.s.rsverr = 1;
 VAR_1.s.drwnng = 1;
 VAR_1.s.clserr = 1;
 VAR_1.s.spiovr = 1;
 VAR_1.s.abnorm = 1;
 VAR_1.s.prtnxa = 1;
 FUNC_3(FUNC_0(VAR_0), VAR_1.u64);

 VAR_2.u64 = FUNC_2(FUNC_1(VAR_0));
 VAR_2.s.frmerr = 1;
 VAR_2.s.unxfrm = 1;
 VAR_2.s.nosync = 1;
 VAR_2.s.diperr = 1;
 VAR_2.s.datovr = 1;
 VAR_2.s.ovrbst = 1;
 VAR_2.s.calpar1 = 1;
 VAR_2.s.calpar0 = 1;
 FUNC_3(FUNC_1(VAR_0), VAR_2.u64);
}
