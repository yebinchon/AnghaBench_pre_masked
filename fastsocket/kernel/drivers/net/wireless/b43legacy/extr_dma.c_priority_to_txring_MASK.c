
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct b43legacy_dmaring* tx_ring5; struct b43legacy_dmaring* tx_ring4; struct b43legacy_dmaring* tx_ring0; struct b43legacy_dmaring* tx_ring1; struct b43legacy_dmaring* tx_ring2; struct b43legacy_dmaring* tx_ring3; } ;
struct b43legacy_wldev {TYPE_1__ dma; } ;
struct b43legacy_dmaring {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct b43legacy_dmaring *FUNC_1(
      struct b43legacy_wldev *VAR_0,
      int VAR_1)
{
 struct b43legacy_dmaring *VAR_2;


return VAR_0->dma.tx_ring1;


 switch (VAR_1) {
 default:
  FUNC_0(1);

 case 0:
  VAR_2 = VAR_0->dma.tx_ring3;
  break;
 case 1:
  VAR_2 = VAR_0->dma.tx_ring2;
  break;
 case 2:
  VAR_2 = VAR_0->dma.tx_ring1;
  break;
 case 3:
  VAR_2 = VAR_0->dma.tx_ring0;
  break;
 case 4:
  VAR_2 = VAR_0->dma.tx_ring4;
  break;
 case 5:
  VAR_2 = VAR_0->dma.tx_ring5;
  break;
 }

 return VAR_2;
}
