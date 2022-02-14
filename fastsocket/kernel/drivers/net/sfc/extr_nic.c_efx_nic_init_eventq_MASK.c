
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; int net_dev; } ;
struct TYPE_4__ {scalar_t__ index; scalar_t__ entries; int len; int addr; } ;
struct efx_channel {int channel; TYPE_2__ eventq; struct efx_nic* efx; } ;
typedef int efx_oword_t ;
struct TYPE_3__ {int (* push_irq_moderation ) (struct efx_channel*) ;int evq_ptr_tbl_base; } ;


 int FUNC_0 (int ,int ,int,int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct efx_nic*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*,int *,int ,int ) ;
 int VAR_9 ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct efx_channel*) ;

void FUNC_8(struct efx_channel *VAR_10)
{
 efx_oword_t VAR_11;
 struct efx_nic *VAR_12 = VAR_10->efx;

 FUNC_6(VAR_12, VAR_9, VAR_12->net_dev,
    "channel %d event queue in special buffers %d-%d\n",
    VAR_10->channel, VAR_10->eventq.index,
    VAR_10->eventq.index + VAR_10->eventq.entries - 1);

 if (FUNC_3(VAR_12) >= VAR_0) {
  FUNC_0(VAR_11,
         VAR_7, 1,
         VAR_5, 0,
         VAR_6, VAR_1);
  FUNC_4(VAR_12, &VAR_11, VAR_8, VAR_10->channel);
 }


 FUNC_2(VAR_12, &VAR_10->eventq);


 FUNC_5(VAR_10->eventq.addr, 0xff, VAR_10->eventq.len);


 FUNC_0(VAR_11,
        VAR_3, 1,
        VAR_4, FUNC_1(VAR_10->eventq.entries),
        VAR_2, VAR_10->eventq.index);
 FUNC_4(VAR_12, &VAR_11, VAR_12->type->evq_ptr_tbl_base,
    VAR_10->channel);

 VAR_12->type->push_irq_moderation(VAR_10);
}
