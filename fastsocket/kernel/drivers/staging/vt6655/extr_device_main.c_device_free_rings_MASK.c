
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nRxDescs0; int nRxDescs1; int* nTxDescs; } ;
struct TYPE_5__ {int tx_bufs_dma0; scalar_t__ tx0_bufs; TYPE_1__ sOpts; int pcid; int pool_dma; scalar_t__ aRD0Ring; } ;
typedef int STxDesc ;
typedef int SRxDesc ;
typedef TYPE_2__* PSDevice ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(PSDevice VAR_3) {

    FUNC_0(VAR_3->pcid,
            VAR_3->sOpts.nRxDescs0 * sizeof(SRxDesc) +
            VAR_3->sOpts.nRxDescs1 * sizeof(SRxDesc) +
            VAR_3->sOpts.nTxDescs[0] * sizeof(STxDesc) +
            VAR_3->sOpts.nTxDescs[1] * sizeof(STxDesc)
            ,
            VAR_3->aRD0Ring, VAR_3->pool_dma
        );

    if (VAR_3->tx0_bufs)
        FUNC_0(VAR_3->pcid,
           VAR_3->sOpts.nTxDescs[0] * VAR_2 +
           VAR_3->sOpts.nTxDescs[1] * VAR_2 +
           VAR_0 +
           VAR_1,
           VAR_3->tx0_bufs, VAR_3->tx_bufs_dma0
        );
}
