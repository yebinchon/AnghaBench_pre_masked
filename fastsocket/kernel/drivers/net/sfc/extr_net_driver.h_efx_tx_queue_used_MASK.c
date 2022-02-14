
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_tx_queue {int queue; TYPE_1__* efx; } ;
struct TYPE_2__ {int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct efx_tx_queue *VAR_1)
{
 return !(FUNC_0(VAR_1->efx->net_dev) < 2 &&
   VAR_1->queue & VAR_0);
}
