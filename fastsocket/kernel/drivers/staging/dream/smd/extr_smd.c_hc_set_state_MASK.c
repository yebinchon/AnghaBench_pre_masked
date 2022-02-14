
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smd_half_channel {int fDSR; int fCTS; int fCD; unsigned int state; int fSTATE; } ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(volatile struct smd_half_channel *VAR_1, unsigned VAR_2)
{
 if (VAR_2 == VAR_0) {
  VAR_1->fDSR = 1;
  VAR_1->fCTS = 1;
  VAR_1->fCD = 1;
 } else {
  VAR_1->fDSR = 0;
  VAR_1->fCTS = 0;
  VAR_1->fCD = 0;
 }
 VAR_1->state = VAR_2;
 VAR_1->fSTATE = 1;
 FUNC_0();
}
