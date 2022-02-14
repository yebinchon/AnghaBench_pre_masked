
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {scalar_t__ n_channels; int legacy_irq_enabled; scalar_t__ legacy_irq; int loopback_selftest; } ;
struct efx_channel {scalar_t__ channel; int napi_str; scalar_t__ eventq_mask; scalar_t__ irq; int enabled; struct efx_nic* efx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_channel*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_channel*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;

void FUNC_8(struct efx_channel *VAR_0)
{
 struct efx_nic *VAR_1 = VAR_0->efx;

 FUNC_0(VAR_0->channel >= VAR_1->n_channels);
 FUNC_0(!VAR_0->enabled);
 FUNC_0(!VAR_1->loopback_selftest);


 FUNC_2(VAR_1);
 if (VAR_1->legacy_irq) {
  FUNC_7(VAR_1->legacy_irq);
  VAR_1->legacy_irq_enabled = 0;
 }
 if (VAR_0->irq)
  FUNC_7(VAR_0->irq);


 FUNC_5(&VAR_0->napi_str);


 FUNC_4(VAR_0, VAR_0->eventq_mask + 1);



 FUNC_1(VAR_0);

 FUNC_6(&VAR_0->napi_str);
 if (VAR_1->legacy_irq)
  VAR_1->legacy_irq_enabled = 1;
 FUNC_3(VAR_1);
}
