
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_wldev {int * dma_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43legacy_wldev*,int) ;

__attribute__((used)) static void FUNC_1(struct b43legacy_wldev *VAR_3,
          u16 VAR_4, int VAR_5)
{
 u16 VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4 + VAR_1);
 if (VAR_6 & VAR_2)
  VAR_3->dma_reason[VAR_5] |= VAR_0;
 else
  VAR_3->dma_reason[VAR_5] &= ~VAR_0;
}
