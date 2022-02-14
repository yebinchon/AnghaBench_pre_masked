
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int length; int dma_length; int dma_address; } ;
struct iounit_struct {int lock; } ;
struct TYPE_2__ {struct iounit_struct* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 int FUNC_0 (struct iounit_struct*,unsigned long,int ) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0, struct scatterlist *VAR_1, int VAR_2)
{
 struct iounit_struct *VAR_3 = VAR_0->archdata.iommu;
 unsigned long VAR_4;


 FUNC_3(&VAR_3->lock, VAR_4);
 while (VAR_2 != 0) {
  --VAR_2;
  VAR_1->dma_address = FUNC_0(VAR_3, (unsigned long) FUNC_2(VAR_1), VAR_1->length);
  VAR_1->dma_length = VAR_1->length;
  VAR_1 = FUNC_1(VAR_1);
 }
 FUNC_4(&VAR_3->lock, VAR_4);
}
