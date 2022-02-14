
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int dev; } ;
struct TYPE_15__ {int skb_dma; TYPE_6__* skb; } ;
struct TYPE_14__ {scalar_t__ rx_buf_sz; int pcid; int dev; } ;
struct TYPE_12__ {void* wReqCount; } ;
struct TYPE_11__ {int f1Owner; void* wResCount; } ;
struct TYPE_13__ {int buff_addr; TYPE_2__ m_rd1RD1; TYPE_1__ m_rd0RD0; TYPE_5__* pRDInfo; } ;
typedef TYPE_3__* PSRxDesc ;
typedef TYPE_4__* PSDevice ;
typedef TYPE_5__* PDEVICE_RD_INFO ;
typedef int BOOL ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 TYPE_6__* FUNC_3 (int) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (TYPE_6__*) ;

__attribute__((used)) static BOOL FUNC_6(PSDevice VAR_4, PSRxDesc VAR_5) {

    PDEVICE_RD_INFO VAR_6=VAR_5->pRDInfo;


    VAR_6->skb = FUNC_3((int)VAR_4->rx_buf_sz);



    if (VAR_6->skb==((void*)0))
        return VAR_0;
    FUNC_0(VAR_6->skb);
    VAR_6->skb->dev = VAR_4->dev;
    VAR_6->skb_dma = FUNC_4(VAR_4->pcid, FUNC_5(VAR_6->skb),
          VAR_4->rx_buf_sz, VAR_2);
    *((unsigned int *) &(VAR_5->m_rd0RD0)) = 0;

    VAR_5->m_rd0RD0.wResCount = FUNC_1(VAR_4->rx_buf_sz);
    VAR_5->m_rd0RD0.f1Owner = VAR_1;
    VAR_5->m_rd1RD1.wReqCount = FUNC_1(VAR_4->rx_buf_sz);
    VAR_5->buff_addr = FUNC_2(VAR_6->skb_dma);

    return VAR_3;
}
