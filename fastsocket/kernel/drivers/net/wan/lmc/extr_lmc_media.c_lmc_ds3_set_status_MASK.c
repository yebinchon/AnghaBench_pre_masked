
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ scrambler_onoff; scalar_t__ cable_length; } ;
struct TYPE_15__ {TYPE_2__ ictl; TYPE_1__* lmc_media; } ;
typedef TYPE_3__ lmc_softc_t ;
struct TYPE_16__ {scalar_t__ scrambler_onoff; scalar_t__ cable_length; } ;
typedef TYPE_4__ lmc_ctl_t ;
struct TYPE_13__ {int (* set_scrambler ) (TYPE_3__* const,scalar_t__) ;int (* set_cable_length ) (TYPE_3__* const,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__* const,int ) ;
 int FUNC_1 (TYPE_3__* const,int ) ;
 int FUNC_2 (TYPE_3__* const,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__* const,scalar_t__) ;
 int FUNC_4 (TYPE_3__* const,scalar_t__) ;

__attribute__((used)) static void
FUNC_5 (lmc_softc_t * const VAR_4, lmc_ctl_t * VAR_5)
{
  if (VAR_5 == ((void*)0))
    {
      VAR_4->lmc_media->set_cable_length (VAR_4, VAR_4->ictl.cable_length);
      VAR_4->lmc_media->set_scrambler (VAR_4, VAR_4->ictl.scrambler_onoff);
      FUNC_2 (VAR_4, ((void*)0));

      return;
    }




  if (VAR_5->cable_length && !VAR_4->ictl.cable_length)
    FUNC_0 (VAR_4, VAR_0);
  else if (!VAR_5->cable_length && VAR_4->ictl.cable_length)
    FUNC_0 (VAR_4, VAR_1);




  if (VAR_5->scrambler_onoff && !VAR_4->ictl.scrambler_onoff)
    FUNC_1 (VAR_4, VAR_3);
  else if (!VAR_5->scrambler_onoff && VAR_4->ictl.scrambler_onoff)
    FUNC_1 (VAR_4, VAR_2);

  FUNC_2 (VAR_4, VAR_5);
}
