
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int FirstSeg; int LastSeg; int Offset; int TxFWInfoSize; int OWN; int TxBuffAddr; int TxBufferSize; scalar_t__ RATid; int QueueSelect; scalar_t__ PktSize; scalar_t__ CmdInit; int LINIP; } ;
typedef TYPE_1__ tx_desc_819x_pci ;
struct sk_buff {int len; scalar_t__ cb; int data; } ;
struct rtl8192_tx_ring {unsigned int idx; unsigned int entries; int queue; TYPE_1__* desc; } ;
struct r8192_priv {int irq_th_lock; int pdev; struct rtl8192_tx_ring* tx_ring; } ;
struct net_device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {scalar_t__ bCmdOrInit; scalar_t__ pkt_size; int bLastIniPkt; } ;
typedef TYPE_2__ cb_desc ;
typedef int TX_FWINFO_8190PCI ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (int ) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (char*,...) ;
 unsigned int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct net_device*,int ,int ) ;

void FUNC_10(struct net_device *VAR_8, struct sk_buff *VAR_9)
{
    struct r8192_priv *VAR_10 = FUNC_2(VAR_8);
    struct rtl8192_tx_ring *VAR_11;
    tx_desc_819x_pci *VAR_12;
    unsigned int VAR_13;
    dma_addr_t VAR_14;
    cb_desc *VAR_15;
    unsigned long VAR_16;

    VAR_11 = &VAR_10->tx_ring[VAR_7];
    VAR_14 = FUNC_4(VAR_10->pdev, VAR_9->data, VAR_9->len, VAR_3);

    FUNC_7(&VAR_10->irq_th_lock,VAR_16);
    VAR_13 = (VAR_11->idx + FUNC_6(&VAR_11->queue)) % VAR_11->entries;
    VAR_12 = &VAR_11->desc[VAR_13];

    VAR_15 = (cb_desc *)(VAR_9->cb + VAR_2);
    FUNC_3(VAR_12,0,12);
    VAR_12->LINIP = VAR_15->bLastIniPkt;
    VAR_12->FirstSeg = 1;
    VAR_12->LastSeg = 1;
    if(VAR_15->bCmdOrInit == VAR_0) {
        VAR_12->CmdInit = VAR_0;
    } else {
        VAR_12->CmdInit = VAR_1;
        VAR_12->Offset = sizeof(TX_FWINFO_8190PCI) + 8;
        VAR_12->PktSize = (u16)(VAR_15->pkt_size + VAR_12->Offset);
        VAR_12->QueueSelect = VAR_4;
        VAR_12->TxFWInfoSize = 0x08;
        VAR_12->RATid = (u8)VAR_0;
    }
    VAR_12->TxBufferSize = VAR_9->len;
    VAR_12->TxBuffAddr = FUNC_1(VAR_14);
    VAR_12->OWN = 1;
    FUNC_0(&VAR_11->queue, VAR_9);
    FUNC_8(&VAR_10->irq_th_lock,VAR_16);

    FUNC_9(VAR_8, VAR_5, VAR_6);

    return;
}
