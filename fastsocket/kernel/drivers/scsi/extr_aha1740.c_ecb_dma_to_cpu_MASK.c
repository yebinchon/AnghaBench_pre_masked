
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecb {int dummy; } ;
struct aha1740_hostdata {scalar_t__ ecb; scalar_t__ ecb_dma_addr; } ;
struct Scsi_Host {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 struct aha1740_hostdata* FUNC_0 (struct Scsi_Host*) ;

__attribute__((used)) static inline struct ecb *FUNC_1 (struct Scsi_Host *VAR_0,
       dma_addr_t VAR_1)
{
 struct aha1740_hostdata *VAR_2 = FUNC_0 (VAR_0);
 dma_addr_t VAR_3;

 VAR_3 = VAR_1 - VAR_2->ecb_dma_addr;

 return (struct ecb *)(((char *) VAR_2->ecb) + (unsigned int) VAR_3);
}
