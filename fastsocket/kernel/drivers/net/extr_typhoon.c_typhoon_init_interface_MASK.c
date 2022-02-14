
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct typhoon_shared {int dummy; } ;
struct typhoon_interface {void* txLoAddr; void* zeroAddr; void* respSize; void* respAddr; void* cmdSize; void* cmdAddr; void* rxHiSize; void* rxHiAddr; void* rxLoSize; void* rxLoAddr; void* rxBuffSize; void* rxBuffAddr; void* txHiSize; void* txHiAddr; void* txLoSize; void* ringIndex; } ;
struct TYPE_15__ {int writeRegister; int * ringBase; } ;
struct TYPE_14__ {int writeRegister; int * ringBase; } ;
struct TYPE_13__ {int * ringBase; } ;
struct TYPE_12__ {int * ringBase; } ;
struct TYPE_11__ {int * ringBase; } ;
struct TYPE_10__ {int * ringBase; } ;
struct TYPE_9__ {int * ringBase; } ;
struct typhoon {int shared_dma; int offload; int state_lock; int command_lock; int card_state; int txlo_dma_addr; TYPE_7__ txHiRing; TYPE_6__ txLoRing; TYPE_8__* shared; TYPE_5__ respRing; TYPE_4__ cmdRing; TYPE_3__ rxBuffRing; TYPE_2__ rxHiRing; TYPE_1__ rxLoRing; int * indexes; } ;
struct tx_desc {int dummy; } ;
struct rx_free {int dummy; } ;
struct rx_desc {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_16__ {scalar_t__ resp; scalar_t__ cmd; scalar_t__ rxBuff; scalar_t__ rxHi; scalar_t__ rxLo; scalar_t__ txHi; scalar_t__ txLo; int indexes; struct typhoon_interface iface; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 void* FUNC_0 (int) ;
 int VAR_14 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_8__*,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void
FUNC_6(struct typhoon *VAR_22)
{
 struct typhoon_interface *VAR_23 = &VAR_22->shared->iface;
 dma_addr_t VAR_24;

 FUNC_2(VAR_22->shared, 0, sizeof(struct typhoon_shared));



 VAR_24 = VAR_22->shared_dma + FUNC_3(VAR_14);
 VAR_23->ringIndex = FUNC_0(VAR_24);

 VAR_24 = VAR_22->shared_dma + FUNC_3(VAR_20);
 VAR_23->txLoAddr = FUNC_0(VAR_24);
 VAR_23->txLoSize = FUNC_0(VAR_7 * sizeof(struct tx_desc));

 VAR_24 = VAR_22->shared_dma + FUNC_3(VAR_19);
 VAR_23->txHiAddr = FUNC_0(VAR_24);
 VAR_23->txHiSize = FUNC_0(VAR_6 * sizeof(struct tx_desc));

 VAR_24 = VAR_22->shared_dma + FUNC_3(VAR_16);
 VAR_23->rxBuffAddr = FUNC_0(VAR_24);
 VAR_23->rxBuffSize = FUNC_0(VAR_2 *
     sizeof(struct rx_free));

 VAR_24 = VAR_22->shared_dma + FUNC_3(VAR_18);
 VAR_23->rxLoAddr = FUNC_0(VAR_24);
 VAR_23->rxLoSize = FUNC_0(VAR_3 * sizeof(struct rx_desc));

 VAR_24 = VAR_22->shared_dma + FUNC_3(VAR_17);
 VAR_23->rxHiAddr = FUNC_0(VAR_24);
 VAR_23->rxHiSize = FUNC_0(VAR_3 * sizeof(struct rx_desc));

 VAR_24 = VAR_22->shared_dma + FUNC_3(VAR_13);
 VAR_23->cmdAddr = FUNC_0(VAR_24);
 VAR_23->cmdSize = FUNC_0(VAR_0);

 VAR_24 = VAR_22->shared_dma + FUNC_3(VAR_15);
 VAR_23->respAddr = FUNC_0(VAR_24);
 VAR_23->respSize = FUNC_0(VAR_1);

 VAR_24 = VAR_22->shared_dma + FUNC_3(VAR_21);
 VAR_23->zeroAddr = FUNC_0(VAR_24);

 VAR_22->indexes = &VAR_22->shared->indexes;
 VAR_22->txLoRing.ringBase = (u8 *) VAR_22->shared->txLo;
 VAR_22->txHiRing.ringBase = (u8 *) VAR_22->shared->txHi;
 VAR_22->rxLoRing.ringBase = (u8 *) VAR_22->shared->rxLo;
 VAR_22->rxHiRing.ringBase = (u8 *) VAR_22->shared->rxHi;
 VAR_22->rxBuffRing.ringBase = (u8 *) VAR_22->shared->rxBuff;
 VAR_22->cmdRing.ringBase = (u8 *) VAR_22->shared->cmd;
 VAR_22->respRing.ringBase = (u8 *) VAR_22->shared->resp;

 VAR_22->txLoRing.writeRegister = VAR_12;
 VAR_22->txHiRing.writeRegister = VAR_11;

 VAR_22->txlo_dma_addr = FUNC_1(VAR_23->txLoAddr);
 VAR_22->card_state = VAR_4;
 FUNC_4();

 VAR_22->offload = VAR_8 | VAR_9;
 VAR_22->offload |= VAR_10 | VAR_5;

 FUNC_5(&VAR_22->command_lock);
 FUNC_5(&VAR_22->state_lock);
}
