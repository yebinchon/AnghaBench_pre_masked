
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int falc; } ;
typedef TYPE_1__ pc300ch_t ;
struct TYPE_8__ {TYPE_1__* chan; } ;
typedef TYPE_2__ pc300_t ;
struct TYPE_9__ {scalar_t__ prbs; scalar_t__ loss_mfa; scalar_t__ loss_fa; scalar_t__ yellow_alarm; scalar_t__ blue_alarm; scalar_t__ red_alarm; int ebc; int cec; int cvc; int fec; int bec; int rai; int es; int sec; int ais; int lmfa; int farec; int lfa; int losr; int los; int pden; int num_channels; scalar_t__ active; scalar_t__ sync; } ;
typedef TYPE_3__ falc_t ;


 int FUNC_0 (TYPE_2__*,unsigned long) ;
 int FUNC_1 (TYPE_2__*,unsigned long) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(pc300_t * VAR_0, int VAR_1)
{
 pc300ch_t *VAR_2 = &VAR_0->chan[VAR_1];
 falc_t *VAR_3 = (falc_t *) & VAR_2->falc;
 unsigned long VAR_4;

 FUNC_0(VAR_0, VAR_4);
 FUNC_2("CH%d:   %s %s  %d channels\n",
        VAR_1, (VAR_3->sync ? "SYNC" : ""), (VAR_3->active ? "ACTIVE" : ""),
        VAR_3->num_channels);

 FUNC_2("        pden=%d,  los=%d,  losr=%d,  lfa=%d,  farec=%d\n",
        VAR_3->pden, VAR_3->los, VAR_3->losr, VAR_3->lfa, VAR_3->farec);
 FUNC_2("        lmfa=%d,  ais=%d,  sec=%d,  es=%d,  rai=%d\n",
        VAR_3->lmfa, VAR_3->ais, VAR_3->sec, VAR_3->es, VAR_3->rai);
 FUNC_2("        bec=%d,  fec=%d,  cvc=%d,  cec=%d,  ebc=%d\n",
        VAR_3->bec, VAR_3->fec, VAR_3->cvc, VAR_3->cec, VAR_3->ebc);

 FUNC_2("\n");
 FUNC_2("        STATUS: %s  %s  %s  %s  %s  %s\n",
        (VAR_3->red_alarm ? "RED" : ""),
        (VAR_3->blue_alarm ? "BLU" : ""),
        (VAR_3->yellow_alarm ? "YEL" : ""),
        (VAR_3->loss_fa ? "LFA" : ""),
        (VAR_3->loss_mfa ? "LMF" : ""), (VAR_3->prbs ? "PRB" : ""));
 FUNC_1(VAR_0, VAR_4);
}
