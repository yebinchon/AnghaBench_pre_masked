
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int data; int len; } ;
struct net_device {int name; int trans_start; scalar_t__ base_addr; } ;
typedef int netdev_tx_t ;
typedef void* dma_addr_t ;
struct TYPE_8__ {scalar_t__ cStat; void* forward; TYPE_1__* buffer; scalar_t__ frameSize; } ;
struct TYPE_7__ {int txTail; int txInProgress; int lock; TYPE_3__* txList; int pciDev; int txBusyCount; int txHead; void* txListDMA; int phyOnline; } ;
struct TYPE_6__ {int count; scalar_t__ address; } ;
typedef TYPE_2__ TLanPrivateInfo ;
typedef TYPE_3__ TLanList ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_3__*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int VAR_12 ;
 unsigned int FUNC_4 (int ,unsigned int) ;
 TYPE_2__* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (void*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_12( struct sk_buff *VAR_13, struct net_device *VAR_14 )
{
 TLanPrivateInfo *VAR_15 = FUNC_5(VAR_14);
 dma_addr_t VAR_16;
 TLanList *VAR_17;
 unsigned long VAR_18;
 unsigned int VAR_19;

 if ( ! VAR_15->phyOnline ) {
  FUNC_1( VAR_6, "TRANSMIT:  %s PHY is not ready\n",
     VAR_14->name );
  FUNC_3(VAR_13);
  return VAR_1;
 }

 if (FUNC_9(VAR_13, VAR_10))
  return VAR_1;
 VAR_19 = FUNC_4(VAR_13->len, (unsigned int)VAR_10);

 VAR_17 = VAR_15->txList + VAR_15->txTail;
 VAR_16 = VAR_15->txListDMA + sizeof(TLanList) * VAR_15->txTail;

 if ( VAR_17->cStat != VAR_5 ) {
  FUNC_1( VAR_6,
     "TRANSMIT:  %s is busy (Head=%d Tail=%d)\n",
     VAR_14->name, VAR_15->txHead, VAR_15->txTail );
  FUNC_6(VAR_14);
  VAR_15->txBusyCount++;
  return VAR_0;
 }

 VAR_17->forward = 0;

 VAR_17->buffer[0].address = FUNC_8(VAR_15->pciDev,
            VAR_13->data, VAR_19,
            VAR_2);
 FUNC_2(VAR_17, VAR_13);

 VAR_17->frameSize = (u16) VAR_19;
 VAR_17->buffer[0].count = VAR_9 | (u32) VAR_19;
 VAR_17->buffer[1].count = 0;
 VAR_17->buffer[1].address = 0;

 FUNC_10(&VAR_15->lock, VAR_18);
 VAR_17->cStat = VAR_4;
 if ( ! VAR_15->txInProgress ) {
  VAR_15->txInProgress = 1;
  FUNC_1( VAR_6,
     "TRANSMIT:  Starting TX on buffer %d\n", VAR_15->txTail );
  FUNC_7( VAR_16, VAR_14->base_addr + VAR_3 );
  FUNC_7( VAR_7, VAR_14->base_addr + VAR_8 );
 } else {
  FUNC_1( VAR_6, "TRANSMIT:  Adding buffer %d to TX channel\n",
     VAR_15->txTail );
  if ( VAR_15->txTail == 0 ) {
   ( VAR_15->txList + ( VAR_11 - 1 ) )->forward
    = VAR_16;
  } else {
   ( VAR_15->txList + ( VAR_15->txTail - 1 ) )->forward
    = VAR_16;
  }
 }
 FUNC_11(&VAR_15->lock, VAR_18);

 FUNC_0( VAR_15->txTail, VAR_11 );

 VAR_14->trans_start = VAR_12;
 return VAR_1;

}
