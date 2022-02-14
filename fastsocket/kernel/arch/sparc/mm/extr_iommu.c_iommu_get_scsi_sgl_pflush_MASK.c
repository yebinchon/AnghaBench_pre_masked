
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; int offset; int dma_address; int dma_length; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct device*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_2, struct scatterlist *VAR_3, int VAR_4)
{
 unsigned long VAR_5, VAR_6 = 0;
 int VAR_7, VAR_8;

 while(VAR_4 != 0) {
  --VAR_4;

  VAR_7 = (VAR_3->length + VAR_3->offset + VAR_1-1) >> VAR_0;






  if ((VAR_5 = (unsigned long) FUNC_2(FUNC_4(VAR_3))) != 0) {
   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
    if (VAR_5 != VAR_6) {
     FUNC_0(VAR_5);
     VAR_6 = VAR_5;
    }
    VAR_5 += VAR_1;
   }
  }

  VAR_3->dma_address = FUNC_1(VAR_2, FUNC_4(VAR_3), VAR_7) + VAR_3->offset;
  VAR_3->dma_length = VAR_3->length;
  VAR_3 = FUNC_3(VAR_3);
 }
}
