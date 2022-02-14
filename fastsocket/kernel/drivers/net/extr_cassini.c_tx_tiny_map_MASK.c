
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cas {scalar_t__* tx_tiny_dvma; TYPE_1__** tx_tiny_use; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int used; int nbufs; } ;


 int const VAR_0 ;

__attribute__((used)) static inline dma_addr_t FUNC_0(struct cas *VAR_1, const int VAR_2,
         const int VAR_3, const int VAR_4)
{
 VAR_1->tx_tiny_use[VAR_2][VAR_4].nbufs++;
 VAR_1->tx_tiny_use[VAR_2][VAR_3].used = 1;
 return VAR_1->tx_tiny_dvma[VAR_2] + VAR_0*VAR_3;
}
