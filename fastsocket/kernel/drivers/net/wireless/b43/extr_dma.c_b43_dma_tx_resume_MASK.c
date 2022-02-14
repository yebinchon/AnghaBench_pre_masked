
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_ring_AC_BK; int tx_ring_AC_BE; int tx_ring_AC_VI; int tx_ring_AC_VO; int tx_ring_mcast; } ;
struct b43_wldev {TYPE_1__ dma; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*,int ) ;

void FUNC_2(struct b43_wldev *VAR_0)
{
 FUNC_0(VAR_0->dma.tx_ring_mcast);
 FUNC_0(VAR_0->dma.tx_ring_AC_VO);
 FUNC_0(VAR_0->dma.tx_ring_AC_VI);
 FUNC_0(VAR_0->dma.tx_ring_AC_BE);
 FUNC_0(VAR_0->dma.tx_ring_AC_BK);
 FUNC_1(VAR_0, 0);
}
