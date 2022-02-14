
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_tx_queue {int initialised; int queue; TYPE_1__* efx; } ;
struct TYPE_2__ {int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_tx_queue*) ;
 int FUNC_1 (struct efx_tx_queue*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*,int ) ;

void FUNC_3(struct efx_tx_queue *VAR_1)
{
 if (!VAR_1->initialised)
  return;

 FUNC_2(VAR_1->efx, VAR_0, VAR_1->efx->net_dev,
    "shutting down TX queue %d\n", VAR_1->queue);

 VAR_1->initialised = 0;


 FUNC_0(VAR_1);

 FUNC_1(VAR_1);
}
