
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 int VAR_6, VAR_7;





 VAR_7 = FUNC_0(VAR_0 + VAR_1);

 FUNC_4("imxdma: dma_irq_handler called, disr=0x%08x\n",
       VAR_7);

 FUNC_1(VAR_7, VAR_0 + VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_7 & (1 << VAR_6))
   FUNC_3(VAR_6);
 }

 return VAR_3;
}
