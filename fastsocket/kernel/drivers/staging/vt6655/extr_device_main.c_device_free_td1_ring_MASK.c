
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int len; } ;
struct TYPE_10__ {scalar_t__ skb_dma; scalar_t__ buf_dma; TYPE_6__* skb; } ;
struct TYPE_7__ {int* nTxDescs; } ;
struct TYPE_9__ {int pcid; TYPE_2__* apTD1Rings; TYPE_1__ sOpts; } ;
struct TYPE_8__ {TYPE_4__* pTDInfo; } ;
typedef int PVOID ;
typedef TYPE_2__* PSTxDesc ;
typedef TYPE_3__* PSDevice ;
typedef TYPE_4__* PDEVICE_TD_INFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_3(PSDevice VAR_1) {
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->sOpts.nTxDescs[1]; VAR_2++) {
        PSTxDesc VAR_3=&(VAR_1->apTD1Rings[VAR_2]);
        PDEVICE_TD_INFO VAR_4=VAR_3->pTDInfo;

        if (VAR_4->skb_dma && (VAR_4->skb_dma != VAR_4->buf_dma))
            FUNC_2(VAR_1->pcid, VAR_4->skb_dma,
               VAR_4->skb->len, VAR_0);

        if (VAR_4->skb)
            FUNC_0(VAR_4->skb);

        FUNC_1((PVOID)VAR_3->pTDInfo);
    }

}
