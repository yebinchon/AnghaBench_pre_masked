
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; int offset; int dma_address; int dma_length; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int ,int) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_2, struct scatterlist *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(0);
 while (VAR_4 != 0) {
  --VAR_4;
  VAR_5 = (VAR_3->length + VAR_3->offset + VAR_1-1) >> VAR_0;
  VAR_3->dma_address = FUNC_1(VAR_2, FUNC_3(VAR_3), VAR_5) + VAR_3->offset;
  VAR_3->dma_length = VAR_3->length;
  VAR_3 = FUNC_2(VAR_3);
 }
}
