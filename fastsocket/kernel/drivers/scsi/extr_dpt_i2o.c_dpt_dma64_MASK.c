
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dma_addr_t ;
struct TYPE_3__ {scalar_t__ dma64; } ;
typedef TYPE_1__ adpt_hba ;



__attribute__((used)) static inline int FUNC_0(adpt_hba *VAR_0)
{
 return (sizeof(dma_addr_t) > 4 && (VAR_0)->dma64);
}
