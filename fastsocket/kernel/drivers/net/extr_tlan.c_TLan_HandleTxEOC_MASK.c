
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct net_device {scalar_t__ base_addr; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_5__ {int cStat; } ;
struct TYPE_4__ {int tlanRev; int txHead; scalar_t__ txInProgress; scalar_t__ txListDMA; TYPE_2__* txList; int txTail; } ;
typedef TYPE_1__ TLanPrivateInfo ;
typedef TYPE_2__ TLanList ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u32 FUNC_4( struct net_device *VAR_4, u16 VAR_5 )
{
 TLanPrivateInfo *VAR_6 = FUNC_1(VAR_4);
 TLanList *VAR_7;
 dma_addr_t VAR_8;
 u32 VAR_9 = 1;

 VAR_5 = 0;
 if ( VAR_6->tlanRev < 0x30 ) {
  FUNC_0( VAR_2,
     "TRANSMIT:  Handling TX EOC (Head=%d Tail=%d) -- IRQ\n",
     VAR_6->txHead, VAR_6->txTail );
  VAR_7 = VAR_6->txList + VAR_6->txHead;
  VAR_8 = VAR_6->txListDMA + sizeof(TLanList) * VAR_6->txHead;
  if ( ( VAR_7->cStat & VAR_1 ) == VAR_1 ) {
   FUNC_2(VAR_4);
   FUNC_3( VAR_8, VAR_4->base_addr + VAR_0 );
   VAR_9 |= VAR_3;
  } else {
   VAR_6->txInProgress = 0;
  }
 }

 return VAR_9;

}
