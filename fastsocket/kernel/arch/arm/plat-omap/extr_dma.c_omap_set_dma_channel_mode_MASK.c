
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum omap_dma_channel_mode { ____Placeholder_omap_dma_channel_mode } omap_dma_channel_mode ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

void FUNC_5(int VAR_0, enum omap_dma_channel_mode VAR_1)
{
 if (FUNC_1() && !FUNC_2()) {
  u32 VAR_2;

  VAR_2 = FUNC_3(FUNC_0(VAR_0));
  VAR_2 &= ~0x7;
  VAR_2 |= VAR_1;
  FUNC_4(VAR_2, FUNC_0(VAR_0));
 }
}
