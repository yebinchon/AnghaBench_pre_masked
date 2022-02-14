
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_dma_channel {scalar_t__ in_use; int watchdog; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *) ;
 struct imx_dma_channel* VAR_4 ;
 scalar_t__ FUNC_4 (struct imx_dma_channel*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (char*,int) ;

void FUNC_8(int VAR_5)
{
 struct imx_dma_channel *VAR_6 = &VAR_4[VAR_5];
 unsigned long VAR_7;

 FUNC_7("imxdma%d: imx_dma_disable\n", VAR_5);

 if (FUNC_4(VAR_6))
  FUNC_3(&VAR_6->watchdog);

 FUNC_6(VAR_7);
 FUNC_2(FUNC_1(VAR_1 + VAR_2) | (1 << VAR_5),
  VAR_1 + VAR_2);
 FUNC_2(FUNC_1(VAR_1 + FUNC_0(VAR_5)) & ~VAR_0,
  VAR_1 + FUNC_0(VAR_5));
 FUNC_2(1 << VAR_5, VAR_1 + VAR_3);
 VAR_6->in_use = 0;
 FUNC_5(VAR_7);
}
