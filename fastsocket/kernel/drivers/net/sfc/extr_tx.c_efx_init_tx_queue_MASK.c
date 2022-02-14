
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_tx_queue {int empty_read_count; int initialised; scalar_t__ old_read_count; scalar_t__ read_count; scalar_t__ old_write_count; scalar_t__ write_count; scalar_t__ insert_count; int queue; TYPE_1__* efx; } ;
struct TYPE_2__ {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_tx_queue*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,char*,int ) ;

void FUNC_2(struct efx_tx_queue *VAR_2)
{
 FUNC_1(VAR_2->efx, VAR_1, VAR_2->efx->net_dev,
    "initialising TX queue %d\n", VAR_2->queue);

 VAR_2->insert_count = 0;
 VAR_2->write_count = 0;
 VAR_2->old_write_count = 0;
 VAR_2->read_count = 0;
 VAR_2->old_read_count = 0;
 VAR_2->empty_read_count = 0 | VAR_0;


 FUNC_0(VAR_2);

 VAR_2->initialised = 1;
}
