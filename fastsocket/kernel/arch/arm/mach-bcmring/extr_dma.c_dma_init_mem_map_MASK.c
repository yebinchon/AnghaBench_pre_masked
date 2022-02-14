
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ DMA_MemMap_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

int FUNC_2(DMA_MemMap_t *VAR_0)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));

 FUNC_0(&VAR_0->lock);

 return 0;
}
