
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int RdDCSR; int DBSB; int DBSA; } ;
typedef TYPE_1__ dma_regs_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

dma_addr_t FUNC_0(dma_regs_t *VAR_3)
{
 int VAR_4;
 VAR_4 = VAR_3->RdDCSR;
 if ((!(VAR_4 & VAR_0) && (VAR_4 & VAR_1)) ||
     ( (VAR_4 & VAR_0) && !(VAR_4 & VAR_2)))
  return VAR_3->DBSA;
 else
  return VAR_3->DBSB;
}
