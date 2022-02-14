
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int entries; int index; } ;
struct efx_tx_queue {int queue; TYPE_3__ txd; TYPE_1__* channel; struct efx_nic* efx; } ;
struct efx_nic {TYPE_2__* type; } ;
typedef int efx_oword_t ;
struct TYPE_5__ {int txd_ptr_tbl_base; } ;
struct TYPE_4__ {int channel; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ,int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,void*) ;
 int FUNC_7 (struct efx_nic*,TYPE_3__*) ;
 scalar_t__ FUNC_8 (struct efx_nic*) ;
 int FUNC_9 (struct efx_nic*,int *,int ) ;
 int FUNC_10 (struct efx_nic*,int *,int ) ;
 int FUNC_11 (struct efx_nic*,int *,int ,int) ;

void FUNC_12(struct efx_tx_queue *VAR_21)
{
 struct efx_nic *VAR_22 = VAR_21->efx;
 efx_oword_t VAR_23;


 FUNC_7(VAR_22, &VAR_21->txd);


 FUNC_2(VAR_23,
         VAR_7, 1,
         VAR_13, 0,
         VAR_14, 0,
         VAR_6, VAR_21->txd.index,
         VAR_8,
         VAR_21->channel->channel,
         VAR_10, 0,
         VAR_9, VAR_21->queue,
         VAR_11,
         FUNC_5(VAR_21->txd.entries),
         VAR_12, 0,
         VAR_16, 1);

 if (FUNC_8(VAR_22) >= VAR_1) {
  int VAR_24 = VAR_21->queue & VAR_3;
  FUNC_3(VAR_23, VAR_15, !VAR_24);
  FUNC_3(VAR_23, VAR_18,
        !VAR_24);
 }

 FUNC_11(VAR_22, &VAR_23, VAR_22->type->txd_ptr_tbl_base,
    VAR_21->queue);

 if (FUNC_8(VAR_22) < VAR_1) {

  FUNC_0(VAR_0 > 128);

  FUNC_9(VAR_22, &VAR_23, VAR_19);
  if (VAR_21->queue & VAR_3)
   FUNC_4(VAR_21->queue, (void *)&VAR_23);
  else
   FUNC_6(VAR_21->queue, (void *)&VAR_23);
  FUNC_10(VAR_22, &VAR_23, VAR_19);
 }

 if (FUNC_8(VAR_22) >= VAR_1) {
  FUNC_1(VAR_23,
         VAR_17,
         (VAR_21->queue & VAR_2) ?
         VAR_4 :
         VAR_5);
  FUNC_11(VAR_22, &VAR_23, VAR_20,
     VAR_21->queue);
 }
}
