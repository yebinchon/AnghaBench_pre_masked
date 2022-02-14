
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device {int* dma_mask; } ;
struct Scsi_Host {scalar_t__ unchecked_isa_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device* FUNC_0 (struct Scsi_Host*) ;

u64 FUNC_1(struct Scsi_Host *VAR_3)
{
 struct device *VAR_4;
 u64 VAR_5 = 0xffffffff;

 if (VAR_3->unchecked_isa_dma)
  return VAR_1;




 if (!VAR_2)
  return VAR_0;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 && VAR_4->dma_mask)
  VAR_5 = *VAR_4->dma_mask;

 return VAR_5;
}
