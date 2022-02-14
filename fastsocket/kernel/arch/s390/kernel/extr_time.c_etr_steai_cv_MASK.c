
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int psc0; int p; int psc1; } ;
struct etr_aib {TYPE_1__ esw; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct etr_aib*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct etr_aib *VAR_0, unsigned int VAR_1)
{
 FUNC_0(FUNC_1(VAR_0, VAR_1) != 0);

 if (VAR_0->esw.psc0 == 1)
  VAR_0->esw.psc0 = 2;
 else if (VAR_0->esw.psc0 == 0 && VAR_0->esw.p == 0)
  VAR_0->esw.psc0 = 1;
 if (VAR_0->esw.psc1 == 1)
  VAR_0->esw.psc1 = 2;
 else if (VAR_0->esw.psc1 == 0 && VAR_0->esw.p == 1)
  VAR_0->esw.psc1 = 1;
}
