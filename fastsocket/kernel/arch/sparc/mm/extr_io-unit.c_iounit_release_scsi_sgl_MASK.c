
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dma_address; int length; } ;
struct iounit_struct {int lock; int bmap; } ;
struct TYPE_2__ {struct iounit_struct* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned long,int ) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_4, struct scatterlist *VAR_5, int VAR_6)
{
 struct iounit_struct *VAR_7 = VAR_4->archdata.iommu;
 unsigned long VAR_8;
 unsigned long VAR_9, VAR_10;

 FUNC_3(&VAR_7->lock, VAR_8);
 while (VAR_6 != 0) {
  --VAR_6;
  VAR_10 = ((VAR_5->dma_address & ~VAR_1) + VAR_5->length + (VAR_3-1)) >> VAR_2;
  VAR_9 = (VAR_5->dma_address - VAR_0) >> VAR_2;
  FUNC_0(("iounit_release %08lx-%08lx\n", (long)VAR_9, (long)VAR_10+VAR_9));
  for (VAR_10 += VAR_9; VAR_9 < VAR_10; VAR_9++)
   FUNC_1(VAR_9, VAR_7->bmap);
  VAR_5 = FUNC_2(VAR_5);
 }
 FUNC_4(&VAR_7->lock, VAR_8);
}
