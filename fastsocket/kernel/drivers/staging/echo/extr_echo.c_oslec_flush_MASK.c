
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int curr_pos; } ;
struct oslec_state {int Lbgn_upper; int Lbgn_upper_acc; int taps; int curr_pos; scalar_t__ Pstates; int * fir_taps16; TYPE_1__ fir_state_bg; TYPE_1__ fir_state; scalar_t__ nonupdate_dwell; scalar_t__ Lbgn_acc; scalar_t__ Lbgn; scalar_t__ rx_2; scalar_t__ rx_1; scalar_t__ tx_2; scalar_t__ tx_1; scalar_t__ Lclean_bg; scalar_t__ Lclean; scalar_t__ Lrx; scalar_t__ Ltx; scalar_t__ Lclean_bgacc; scalar_t__ Lcleanacc; scalar_t__ Lrxacc; scalar_t__ Ltxacc; } ;
typedef int int16_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct oslec_state *VAR_0)
{
 int VAR_1;

 VAR_0->Ltxacc = VAR_0->Lrxacc = VAR_0->Lcleanacc = VAR_0->Lclean_bgacc = 0;
 VAR_0->Ltx = VAR_0->Lrx = VAR_0->Lclean = VAR_0->Lclean_bg = 0;
 VAR_0->tx_1 = VAR_0->tx_2 = VAR_0->rx_1 = VAR_0->rx_2 = 0;

 VAR_0->Lbgn = VAR_0->Lbgn_acc = 0;
 VAR_0->Lbgn_upper = 200;
 VAR_0->Lbgn_upper_acc = VAR_0->Lbgn_upper << 13;

 VAR_0->nonupdate_dwell = 0;

 FUNC_0(&VAR_0->fir_state);
 FUNC_0(&VAR_0->fir_state_bg);
 VAR_0->fir_state.curr_pos = VAR_0->taps - 1;
 VAR_0->fir_state_bg.curr_pos = VAR_0->taps - 1;
 for (VAR_1 = 0; VAR_1 < 2; VAR_1++)
  FUNC_1(VAR_0->fir_taps16[VAR_1], 0, VAR_0->taps * sizeof(int16_t));

 VAR_0->curr_pos = VAR_0->taps - 1;
 VAR_0->Pstates = 0;
}
