
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* lmc_media; int lmc_miireg16; } ;
typedef TYPE_2__ lmc_softc_t ;
struct TYPE_7__ {int (* set_crc_length ) (TYPE_2__* const,int ) ;int (* set_clock_source ) (TYPE_2__* const,int ) ;int (* set_link_status ) (TYPE_2__* const,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__* const,int ) ;
 int FUNC_1 (TYPE_2__* const,int ) ;
 int FUNC_2 (TYPE_2__* const,int ) ;

__attribute__((used)) static void
FUNC_3 (lmc_softc_t * const VAR_4)
{
  VAR_4->lmc_miireg16 = VAR_3;

  VAR_4->lmc_media->set_link_status (VAR_4, VAR_2);
  VAR_4->lmc_media->set_clock_source (VAR_4, VAR_0);
  VAR_4->lmc_media->set_crc_length (VAR_4, VAR_1);
}
