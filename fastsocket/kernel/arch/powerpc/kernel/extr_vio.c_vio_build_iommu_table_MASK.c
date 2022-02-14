
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;
struct vio_dev {TYPE_2__ dev; } ;
struct iommu_table {unsigned long it_size; unsigned long it_offset; int it_blocksize; int it_type; scalar_t__ it_busno; int it_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct iommu_table* FUNC_1 (struct iommu_table*,int) ;
 struct iommu_table* FUNC_2 (int,int ) ;
 unsigned char* FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int ,unsigned char const*,int *,unsigned long*,unsigned long*) ;
 struct iommu_table* FUNC_5 (struct vio_dev*) ;

__attribute__((used)) static struct iommu_table *FUNC_6(struct vio_dev *VAR_4)
{
 const unsigned char *VAR_5;
 struct iommu_table *VAR_6;
 unsigned long VAR_7, VAR_8;

 if (FUNC_0(VAR_0))
  return FUNC_5(VAR_4);

 VAR_5 = FUNC_3(VAR_4->dev.archdata.of_node,
      "ibm,my-dma-window", ((void*)0));
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_4->dev.archdata.of_node, VAR_5,
       &VAR_6->it_index, &VAR_7, &VAR_8);


 VAR_6->it_size = VAR_8 >> VAR_2;

 VAR_6->it_offset = VAR_7 >> VAR_2;
 VAR_6->it_busno = 0;
 VAR_6->it_type = VAR_3;
 VAR_6->it_blocksize = 16;

 return FUNC_1(VAR_6, -1);
}
