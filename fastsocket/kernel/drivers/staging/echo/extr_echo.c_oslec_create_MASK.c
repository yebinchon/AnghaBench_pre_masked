
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oslec_state {int taps; int curr_pos; int cng_level; int Lbgn_upper; int Lbgn_upper_acc; struct oslec_state** fir_taps16; scalar_t__ Lbgn_acc; scalar_t__ Lbgn; scalar_t__ rx_2; scalar_t__ rx_1; scalar_t__ tx_2; scalar_t__ tx_1; scalar_t__ Lclean_bg; scalar_t__ Lclean; scalar_t__ Lrx; scalar_t__ Ltx; scalar_t__ Lclean_bgacc; scalar_t__ Lcleanacc; scalar_t__ Lrxacc; scalar_t__ Ltxacc; scalar_t__ Pstates; scalar_t__ cond_met; void* snapshot; scalar_t__* yvrx; scalar_t__* xvrx; scalar_t__* yvtx; scalar_t__* xvtx; int fir_state_bg; int fir_state; int log2taps; } ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct oslec_state*,int) ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct oslec_state*) ;
 struct oslec_state* FUNC_3 (int,int ) ;
 int FUNC_4 (struct oslec_state*,int) ;
 int FUNC_5 (int) ;

struct oslec_state *FUNC_6(int VAR_1, int VAR_2)
{
 struct oslec_state *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->taps = VAR_1;
 VAR_3->log2taps = FUNC_5(VAR_1);
 VAR_3->curr_pos = VAR_3->taps - 1;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  VAR_3->fir_taps16[VAR_4] =
      FUNC_1(VAR_3->taps, sizeof(int16_t), VAR_0);
  if (!VAR_3->fir_taps16[VAR_4])
   goto error_oom;
 }

 FUNC_0(&VAR_3->fir_state, VAR_3->fir_taps16[0], VAR_3->taps);
 FUNC_0(&VAR_3->fir_state_bg, VAR_3->fir_taps16[1], VAR_3->taps);

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++)
  VAR_3->xvtx[VAR_4] = VAR_3->yvtx[VAR_4] = VAR_3->xvrx[VAR_4] = VAR_3->yvrx[VAR_4] = 0;

 VAR_3->cng_level = 1000;
 FUNC_4(VAR_3, VAR_2);

 VAR_3->snapshot = FUNC_1(VAR_3->taps, sizeof(int16_t), VAR_0);
 if (!VAR_3->snapshot)
  goto error_oom;

 VAR_3->cond_met = 0;
 VAR_3->Pstates = 0;
 VAR_3->Ltxacc = VAR_3->Lrxacc = VAR_3->Lcleanacc = VAR_3->Lclean_bgacc = 0;
 VAR_3->Ltx = VAR_3->Lrx = VAR_3->Lclean = VAR_3->Lclean_bg = 0;
 VAR_3->tx_1 = VAR_3->tx_2 = VAR_3->rx_1 = VAR_3->rx_2 = 0;
 VAR_3->Lbgn = VAR_3->Lbgn_acc = 0;
 VAR_3->Lbgn_upper = 200;
 VAR_3->Lbgn_upper_acc = VAR_3->Lbgn_upper << 13;

 return VAR_3;

error_oom:
 for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
  FUNC_2(VAR_3->fir_taps16[VAR_4]);

 FUNC_2(VAR_3);
 return ((void*)0);
}
