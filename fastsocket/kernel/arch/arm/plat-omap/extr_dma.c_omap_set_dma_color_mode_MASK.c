
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef enum omap_dma_color_mode { ____Placeholder_omap_dma_color_mode } omap_dma_color_mode ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;



 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 () ;

void FUNC_13(int VAR_0, enum omap_dma_color_mode VAR_1, u32 VAR_2)
{
 FUNC_1(FUNC_12());

 if (FUNC_8()) {
  u16 VAR_3;

  VAR_3 = FUNC_10(FUNC_3(VAR_0));
  VAR_3 &= ~0x03;

  switch (VAR_1) {
  case 129:
   VAR_3 |= 0x01;
   break;
  case 128:
   VAR_3 |= 0x02;
   break;
  case 130:
   break;
  default:
   FUNC_0();
  }
  FUNC_11(VAR_3, FUNC_3(VAR_0));

  VAR_3 = FUNC_10(FUNC_7(VAR_0));
  VAR_3 &= ~0x0f;

  if (VAR_1) {
   FUNC_11((u16)VAR_2, FUNC_5(VAR_0));
   FUNC_11((u16)(VAR_2 >> 16), FUNC_6(VAR_0));
   VAR_3 |= 1;
  }
  FUNC_11(VAR_3, FUNC_7(VAR_0));
 }

 if (FUNC_9()) {
  u32 VAR_4;

  VAR_4 = FUNC_10(FUNC_2(VAR_0));
  VAR_4 &= ~((1 << 17) | (1 << 16));

  switch (VAR_1) {
  case 129:
   VAR_4 |= 1 << 16;
   break;
  case 128:
   VAR_4 |= 1 << 17;
   break;
  case 130:
   break;
  default:
   FUNC_0();
  }
  FUNC_11(VAR_4, FUNC_2(VAR_0));

  VAR_2 &= 0xffffff;
  FUNC_11(VAR_2, FUNC_4(VAR_0));
 }
}
