
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_dma {struct b43legacy_dmaring* tx_ring5; struct b43legacy_dmaring* tx_ring4; struct b43legacy_dmaring* tx_ring3; struct b43legacy_dmaring* tx_ring2; struct b43legacy_dmaring* tx_ring1; struct b43legacy_dmaring* tx_ring0; } ;
struct b43legacy_wldev {struct b43legacy_dma dma; } ;
struct b43legacy_dmaring {int nr_slots; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static
struct b43legacy_dmaring *FUNC_1(struct b43legacy_wldev *VAR_0,
          u16 VAR_1, int *VAR_2)
{
 struct b43legacy_dma *VAR_3 = &VAR_0->dma;
 struct b43legacy_dmaring *VAR_4 = ((void*)0);

 switch (VAR_1 & 0xF000) {
 case 0xA000:
  VAR_4 = VAR_3->tx_ring0;
  break;
 case 0xB000:
  VAR_4 = VAR_3->tx_ring1;
  break;
 case 0xC000:
  VAR_4 = VAR_3->tx_ring2;
  break;
 case 0xD000:
  VAR_4 = VAR_3->tx_ring3;
  break;
 case 0xE000:
  VAR_4 = VAR_3->tx_ring4;
  break;
 case 0xF000:
  VAR_4 = VAR_3->tx_ring5;
  break;
 default:
  FUNC_0(1);
 }
 *VAR_2 = (VAR_1 & 0x0FFF);
 FUNC_0(!(VAR_4 && *VAR_2 >= 0 && *VAR_2 < VAR_4->nr_slots));

 return VAR_4;
}
