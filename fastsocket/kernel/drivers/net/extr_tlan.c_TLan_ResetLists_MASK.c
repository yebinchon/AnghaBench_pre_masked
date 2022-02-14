
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_8__ {int frameSize; scalar_t__ forward; TYPE_1__* buffer; int cStat; } ;
struct TYPE_7__ {int rxTail; TYPE_3__* rxList; int pciDev; scalar_t__ rxListDMA; scalar_t__ rxHead; TYPE_3__* txList; scalar_t__ txTail; scalar_t__ txHead; } ;
struct TYPE_6__ {int count; scalar_t__ address; } ;
typedef TYPE_2__ TLanPrivateInfo ;
typedef TYPE_3__ TLanList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct net_device*,int) ;
 TYPE_2__* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_6( struct net_device *VAR_8 )
{
 TLanPrivateInfo *VAR_9 = FUNC_2(VAR_8);
 int VAR_10;
 TLanList *VAR_11;
 dma_addr_t VAR_12;
 struct sk_buff *VAR_13;

 VAR_9->txHead = 0;
 VAR_9->txTail = 0;
 for ( VAR_10 = 0; VAR_10 < VAR_7; VAR_10++ ) {
  VAR_11 = VAR_9->txList + VAR_10;
  VAR_11->cStat = VAR_3;
  VAR_11->buffer[0].address = 0;
  VAR_11->buffer[2].count = 0;
  VAR_11->buffer[2].address = 0;
  VAR_11->buffer[8].address = 0;
  VAR_11->buffer[9].address = 0;
 }

 VAR_9->rxHead = 0;
 VAR_9->rxTail = VAR_6 - 1;
 for ( VAR_10 = 0; VAR_10 < VAR_6; VAR_10++ ) {
  VAR_11 = VAR_9->rxList + VAR_10;
  VAR_12 = VAR_9->rxListDMA + sizeof(TLanList) * VAR_10;
  VAR_11->cStat = VAR_2;
  VAR_11->frameSize = VAR_5;
  VAR_11->buffer[0].count = VAR_5 | VAR_4;
  VAR_13 = FUNC_1(VAR_8, VAR_5 + 7 );
  if ( !VAR_13 ) {
   FUNC_4("TLAN: out of memory for received data.\n" );
   break;
  }

  FUNC_5( VAR_13, VAR_0 );
  VAR_11->buffer[0].address = FUNC_3(VAR_9->pciDev,
        VAR_13->data,
        VAR_5,
        VAR_1);
  FUNC_0(VAR_11, VAR_13);
  VAR_11->buffer[1].count = 0;
  VAR_11->buffer[1].address = 0;
  VAR_11->forward = VAR_12 + sizeof(TLanList);
 }


 while (VAR_10 < VAR_6) {
  FUNC_0(VAR_9->rxList + VAR_10, ((void*)0));
  ++VAR_10;
 }
 VAR_11->forward = 0;

}
