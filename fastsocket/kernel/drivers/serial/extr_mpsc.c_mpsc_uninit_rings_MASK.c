
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;
struct mpsc_port_info {scalar_t__ txr_tail; scalar_t__ txr_head; int * txb_p; int * txb; scalar_t__ txr_p; scalar_t__ txr; scalar_t__ rxr_posn; int * rxb_p; int * rxb; scalar_t__ rxr_p; scalar_t__ rxr; int * dma_region; TYPE_1__ port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct mpsc_port_info *VAR_0)
{
 FUNC_1("mpsc_uninit_rings[%d]: Uninitializing rings\n",VAR_0->port.line);

 FUNC_0(VAR_0->dma_region == ((void*)0));

 VAR_0->rxr = 0;
 VAR_0->rxr_p = 0;
 VAR_0->rxb = ((void*)0);
 VAR_0->rxb_p = ((void*)0);
 VAR_0->rxr_posn = 0;

 VAR_0->txr = 0;
 VAR_0->txr_p = 0;
 VAR_0->txb = ((void*)0);
 VAR_0->txb_p = ((void*)0);
 VAR_0->txr_head = 0;
 VAR_0->txr_tail = 0;
}
