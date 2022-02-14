
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aha1740_hostdata {int ecb_dma_addr; scalar_t__ ecb; } ;
struct Scsi_Host {int dummy; } ;
typedef int dma_addr_t ;


 struct aha1740_hostdata* FUNC_0 (struct Scsi_Host*) ;

__attribute__((used)) static inline dma_addr_t FUNC_1 (struct Scsi_Host *VAR_0, void *VAR_1)
{
 struct aha1740_hostdata *VAR_2 = FUNC_0 (VAR_0);
 dma_addr_t VAR_3;

 VAR_3 = (char *) VAR_1 - (char *) VAR_2->ecb;

 return VAR_2->ecb_dma_addr + VAR_3;
}
