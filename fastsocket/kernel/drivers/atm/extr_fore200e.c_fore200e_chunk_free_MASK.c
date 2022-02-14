
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fore200e {TYPE_1__* bus; } ;
struct chunk {int alloc_addr; int direction; int dma_size; int dma_addr; } ;
struct TYPE_2__ {int (* dma_unmap ) (struct fore200e*,int ,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fore200e*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct fore200e* VAR_0, struct chunk* VAR_1)
{
    VAR_0->bus->dma_unmap(VAR_0, VAR_1->dma_addr, VAR_1->dma_size, VAR_1->direction);

    FUNC_0(VAR_1->alloc_addr);
}
