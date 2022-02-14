
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_region {int direction; int * sglist; int dev; } ;


 int FUNC_0 (struct dma_region*,unsigned long,int,unsigned long*) ;
 int FUNC_1 (int ,int *,int,int ) ;

void FUNC_2(struct dma_region *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2)
{
 int VAR_3, VAR_4;
 unsigned long VAR_5 = 0;

 if (!VAR_2)
  VAR_2 = 1;

 VAR_3 = FUNC_0(VAR_0, VAR_1, 0, &VAR_5);
 VAR_4 = FUNC_0(VAR_0, VAR_5 + VAR_2 - 1, VAR_3, &VAR_5);

 FUNC_1(VAR_0->dev, &VAR_0->sglist[VAR_3],
       VAR_4 - VAR_3 + 1, VAR_0->direction);
}
