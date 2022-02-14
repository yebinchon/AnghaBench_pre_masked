
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frv_dma_channel {int data; int ioaddr; int (* handler ) (struct frv_dma_channel*,int ,int ) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct frv_dma_channel*) ;
 int VAR_1 ;
 int FUNC_2 (struct frv_dma_channel*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct frv_dma_channel *VAR_4 = VAR_3;

 FUNC_1(VAR_4 - VAR_1);
 return VAR_4->handler(VAR_4 - VAR_1,
    FUNC_0(VAR_4->ioaddr, VAR_0),
    VAR_4->data);

}
