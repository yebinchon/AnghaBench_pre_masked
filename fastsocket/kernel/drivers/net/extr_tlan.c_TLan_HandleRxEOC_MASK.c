
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {scalar_t__ base_addr; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_3__ {int tlanRev; int rxHead; int rxEocCount; scalar_t__ rxListDMA; int rxTail; } ;
typedef TYPE_1__ TLanPrivateInfo ;
typedef int TLanList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u32 FUNC_3( struct net_device *VAR_4, u16 VAR_5 )
{
 TLanPrivateInfo *VAR_6 = FUNC_1(VAR_4);
 dma_addr_t VAR_7;
 u32 VAR_8 = 1;

 if ( VAR_6->tlanRev < 0x30 ) {
  FUNC_0( VAR_1,
     "RECEIVE:  Handling RX EOC (Head=%d Tail=%d) -- IRQ\n",
     VAR_6->rxHead, VAR_6->rxTail );
  VAR_7 = VAR_6->rxListDMA + sizeof(TLanList) * VAR_6->rxHead;
  FUNC_2( VAR_7, VAR_4->base_addr + VAR_0 );
  VAR_8 |= VAR_2 | VAR_3;
  VAR_6->rxEocCount++;
 }

 return VAR_8;

}
