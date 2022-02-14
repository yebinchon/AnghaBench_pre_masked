
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frv_dma_channel {int flags; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct frv_dma_channel*) ;
 struct frv_dma_channel* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(int VAR_3)
{
 struct frv_dma_channel *VAR_4 = &VAR_1[VAR_3];
 unsigned long VAR_5;

 FUNC_2(&VAR_2, VAR_5);

 FUNC_0(VAR_4->irq, VAR_4);
 FUNC_1(VAR_3);

 VAR_4->flags &= ~VAR_0;

 FUNC_3(&VAR_2, VAR_5);
}
