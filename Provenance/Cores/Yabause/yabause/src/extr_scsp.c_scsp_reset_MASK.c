
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dislr; int disll; int efslr; int efsll; int lfoemw; int lfofmw; int ecurp; int ecnt; } ;
typedef TYPE_1__ slot_t ;
struct TYPE_6__ {int midflag; int timacnt; int timbcnt; int timccnt; TYPE_1__* slot; scalar_t__ scilv2; scalar_t__ scilv1; scalar_t__ scilv0; scalar_t__ scipd; scalar_t__ scieb; scalar_t__ mcipd; scalar_t__ mcieb; scalar_t__ timcsd; scalar_t__ timbsd; scalar_t__ timasd; scalar_t__ midflag2; scalar_t__ midoutcnt; scalar_t__ midincnt; scalar_t__ dmlen; scalar_t__ dmfl; scalar_t__ drga; scalar_t__ dmea; scalar_t__ ca; scalar_t__ mslc; scalar_t__ rbp; scalar_t__ rbl; scalar_t__ mvol; scalar_t__ mem4b; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

void
FUNC_2 (void)
{
  slot_t *VAR_9;

  FUNC_0(VAR_8, 0, 0x1000);

  VAR_5.mem4b = 0;
  VAR_5.mvol = 0;
  VAR_5.rbl = 0;
  VAR_5.rbp = 0;
  VAR_5.mslc = 0;
  VAR_5.ca = 0;

  VAR_5.dmea = 0;
  VAR_5.drga = 0;
  VAR_5.dmfl = 0;
  VAR_5.dmlen = 0;

  VAR_5.midincnt = 0;
  VAR_5.midoutcnt = 0;
  VAR_5.midflag = VAR_2 | VAR_3;
  VAR_5.midflag2 = 0;

  VAR_5.timacnt = 0xFF00;
  VAR_5.timbcnt = 0xFF00;
  VAR_5.timccnt = 0xFF00;
  VAR_5.timasd = 0;
  VAR_5.timbsd = 0;
  VAR_5.timcsd = 0;

  VAR_5.mcieb = 0;
  VAR_5.mcipd = 0;
  VAR_5.scieb = 0;
  VAR_5.scipd = 0;
  VAR_5.scilv0 = 0;
  VAR_5.scilv1 = 0;
  VAR_5.scilv2 = 0;

  for(VAR_9 = &(VAR_5.slot[0]); VAR_9 < &(VAR_5.slot[32]); VAR_9++)
    {
      FUNC_0(VAR_9, 0, sizeof(slot_t));
      VAR_9->ecnt = VAR_0;
      VAR_9->ecurp = VAR_1;
      VAR_9->dislr = VAR_9->disll = 31;
      VAR_9->efslr = VAR_9->efsll = 31;


  VAR_9->lfofmw = VAR_7;
  VAR_9->lfoemw = VAR_6;
    }



}
