
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct imx_dma_channel {int hw_chaining; unsigned int ccr_from_device; unsigned int ccr_to_device; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 struct imx_dma_channel* VAR_3 ;
 int FUNC_2 (struct imx_dma_channel*) ;

int
FUNC_3(int VAR_4, unsigned int VAR_5,
 unsigned int VAR_6, unsigned int VAR_7, int VAR_8)
{
 struct imx_dma_channel *VAR_9 = &VAR_3[VAR_4];
 u32 VAR_10 = 0;

 VAR_9->hw_chaining = 0;

 if (VAR_8) {
  VAR_9->hw_chaining = 1;
  if (!FUNC_2(VAR_9))
   return -VAR_2;
 }

 if (VAR_7)
  VAR_10 = VAR_0;

 VAR_9->ccr_from_device = VAR_5 | (VAR_6 << 2) | VAR_10;
 VAR_9->ccr_to_device = VAR_6 | (VAR_5 << 2) | VAR_10;

 FUNC_1(VAR_7, VAR_1 + FUNC_0(VAR_4));

 return 0;
}
