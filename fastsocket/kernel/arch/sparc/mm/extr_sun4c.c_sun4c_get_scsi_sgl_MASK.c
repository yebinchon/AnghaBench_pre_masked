
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; int dma_length; scalar_t__ dma_address; } ;
struct device {int dummy; } ;
typedef scalar_t__ __u32 ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (struct scatterlist*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct scatterlist *VAR_1, int VAR_2)
{
 while (VAR_2 != 0) {
  --VAR_2;
  VAR_1->dma_address = (__u32)FUNC_2(FUNC_1(VAR_1), VAR_1->length);
  VAR_1->dma_length = VAR_1->length;
  VAR_1 = FUNC_0(VAR_1);
 }
}
