
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int crc_length; } ;
struct TYPE_6__ {int lmc_miireg16; int lmc_crcSize; TYPE_1__ ictl; } ;
typedef TYPE_2__ lmc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__* const,int ,int,int ) ;

__attribute__((used)) static void
FUNC_1 (lmc_softc_t * const VAR_5, int VAR_6)
{
  if (VAR_6 == VAR_3)
    {

      VAR_5->lmc_miireg16 |= VAR_4;
      VAR_5->ictl.crc_length = VAR_3;
      VAR_5->lmc_crcSize = VAR_1;

    }
  else
    {

      VAR_5->lmc_miireg16 &= ~VAR_4;
      VAR_5->ictl.crc_length = VAR_2;
      VAR_5->lmc_crcSize = VAR_0;
    }

  FUNC_0 (VAR_5, 0, 16, VAR_5->lmc_miireg16);
}
