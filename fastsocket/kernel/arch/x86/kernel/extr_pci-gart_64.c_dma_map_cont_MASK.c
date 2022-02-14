
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; int dma_length; int dma_address; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,struct scatterlist*,int,struct scatterlist*,unsigned long) ;

__attribute__((used)) static inline int
FUNC_2(struct device *VAR_0, struct scatterlist *VAR_1, int VAR_2,
      struct scatterlist *VAR_3, unsigned long VAR_4, int VAR_5)
{
 if (!VAR_5) {
  FUNC_0(VAR_2 != 1);
  VAR_3->dma_address = VAR_1->dma_address;
  VAR_3->dma_length = VAR_1->length;
  return 0;
 }
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
