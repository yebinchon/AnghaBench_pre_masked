
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ SSB_Addr; scalar_t__ SCB_Addr; int DMA_Abort_Thrhld; void* TX_Burst_Size; void* RX_Burst_Size; scalar_t__ Adapter_CHK_IV; scalar_t__ SCB_Clear_IV; scalar_t__ Ring_Status_IV; scalar_t__ RX_IV; scalar_t__ TX_IV; scalar_t__ CMD_Status_IV; int Init_Options; } ;
struct net_local {TYPE_1__ ipb; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct net_local *VAR_3)
{
 VAR_3->ipb.Init_Options = VAR_0;
 VAR_3->ipb.CMD_Status_IV = 0;
 VAR_3->ipb.TX_IV = 0;
 VAR_3->ipb.RX_IV = 0;
 VAR_3->ipb.Ring_Status_IV = 0;
 VAR_3->ipb.SCB_Clear_IV = 0;
 VAR_3->ipb.Adapter_CHK_IV = 0;
 VAR_3->ipb.RX_Burst_Size = VAR_1;
 VAR_3->ipb.TX_Burst_Size = VAR_1;
 VAR_3->ipb.DMA_Abort_Thrhld = VAR_2;
 VAR_3->ipb.SCB_Addr = 0;
 VAR_3->ipb.SSB_Addr = 0;

 return;
}
