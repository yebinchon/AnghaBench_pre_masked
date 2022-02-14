
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fore200e {TYPE_1__* bus; } ;
struct chunk {int alloc_size; int align_size; int direction; int * align_addr; int dma_addr; int * alloc_addr; } ;
struct TYPE_2__ {int (* dma_map ) (struct fore200e*,int *,int,int) ;} ;


 int VAR_0 ;
 unsigned long FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (struct fore200e*,int *,int,int) ;

__attribute__((used)) static int
FUNC_3(struct fore200e* VAR_3, struct chunk* VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    unsigned long VAR_8 = 0;

    if (VAR_6 <= sizeof(int))
 VAR_6 = 0;

    VAR_4->alloc_size = VAR_5 + VAR_6;
    VAR_4->align_size = VAR_5;
    VAR_4->direction = VAR_7;

    VAR_4->alloc_addr = FUNC_1(VAR_4->alloc_size, VAR_2 | VAR_1);
    if (VAR_4->alloc_addr == ((void*)0))
 return -VAR_0;

    if (VAR_6 > 0)
 VAR_8 = FUNC_0(VAR_4->alloc_addr, VAR_6);

    VAR_4->align_addr = VAR_4->alloc_addr + VAR_8;

    VAR_4->dma_addr = VAR_3->bus->dma_map(VAR_3, VAR_4->align_addr, VAR_4->align_size, VAR_7);

    return 0;
}
