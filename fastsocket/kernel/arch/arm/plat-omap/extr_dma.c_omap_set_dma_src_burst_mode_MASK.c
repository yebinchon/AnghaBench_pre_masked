
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum omap_dma_burst_mode { ____Placeholder_omap_dma_burst_mode } omap_dma_burst_mode ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;




 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

void FUNC_5(int VAR_0, enum omap_dma_burst_mode VAR_1)
{
 unsigned int VAR_2 = 0;
 u32 VAR_3;

 VAR_3 = FUNC_3(FUNC_1(VAR_0));
 VAR_3 &= ~(0x03 << 7);

 switch (VAR_1) {
 case 128:
  break;
 case 130:
  if (FUNC_2())
   VAR_2 = 0x1;
  else
   VAR_2 = 0x2;
  break;
 case 129:
  if (FUNC_2()) {
   VAR_2 = 0x2;
   break;
  }




 case 131:
  if (FUNC_2()) {
   VAR_2 = 0x3;
   break;
  }



 default:
  FUNC_0();
 }

 VAR_3 |= (VAR_2 << 7);
 FUNC_4(VAR_3, FUNC_1(VAR_0));
}
