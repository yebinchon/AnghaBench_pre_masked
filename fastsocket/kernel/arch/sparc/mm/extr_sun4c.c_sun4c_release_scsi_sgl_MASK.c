
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; scalar_t__ dma_address; } ;
struct device {int dummy; } ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, struct scatterlist *VAR_1, int VAR_2)
{
 while (VAR_2 != 0) {
  --VAR_2;
  FUNC_1((char *)VAR_1->dma_address, VAR_1->length);
  VAR_1 = FUNC_0(VAR_1);
 }
}
