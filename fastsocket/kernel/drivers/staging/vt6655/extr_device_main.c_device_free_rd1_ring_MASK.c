
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int skb; int skb_dma; } ;
struct TYPE_6__ {int nRxDescs1; } ;
struct TYPE_8__ {int rx_buf_sz; int pcid; TYPE_2__* aRD1Ring; TYPE_1__ sOpts; } ;
struct TYPE_7__ {TYPE_4__* pRDInfo; } ;
typedef int PVOID ;
typedef TYPE_2__* PSRxDesc ;
typedef TYPE_3__* PSDevice ;
typedef TYPE_4__* PDEVICE_RD_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(PSDevice VAR_1) {
    int VAR_2;


    for (VAR_2 = 0; VAR_2 < VAR_1->sOpts.nRxDescs1; VAR_2++) {
        PSRxDesc VAR_3=&(VAR_1->aRD1Ring[VAR_2]);
        PDEVICE_RD_INFO VAR_4=VAR_3->pRDInfo;

        FUNC_2(VAR_1->pcid,VAR_4->skb_dma,
           VAR_1->rx_buf_sz, VAR_0);

        FUNC_0(VAR_4->skb);

        FUNC_1((PVOID)VAR_3->pRDInfo);
    }

}
