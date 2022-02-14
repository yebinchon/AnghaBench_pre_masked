
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; int offset; int dma_address; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int,int) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_3, struct scatterlist *VAR_4, int VAR_5)
{
 int VAR_6;

 while(VAR_5 != 0) {
  --VAR_5;

  VAR_6 = (VAR_4->length + VAR_4->offset + VAR_2-1) >> VAR_1;
  FUNC_0(VAR_3, VAR_4->dma_address & VAR_0, VAR_6);
  VAR_4->dma_address = 0x21212121;
  VAR_4 = FUNC_1(VAR_4);
 }
}
