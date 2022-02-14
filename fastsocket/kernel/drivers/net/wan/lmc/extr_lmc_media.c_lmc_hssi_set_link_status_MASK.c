
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lmc_miireg16; } ;
typedef TYPE_1__ lmc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__* const,int ,int,int ) ;

__attribute__((used)) static void
FUNC_1 (lmc_softc_t * const VAR_2, int VAR_3)
{
  if (VAR_3 == VAR_0)
    VAR_2->lmc_miireg16 |= VAR_1;
  else
    VAR_2->lmc_miireg16 &= ~VAR_1;

  FUNC_0 (VAR_2, 0, 16, VAR_2->lmc_miireg16);
}
