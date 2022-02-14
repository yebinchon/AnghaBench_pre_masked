
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fore200e {TYPE_2__* bus; TYPE_1__** host_bsq; } ;
struct chunk {scalar_t__ alloc_addr; } ;
struct TYPE_4__ {int (* dma_chunk_free ) (struct fore200e*,struct chunk*) ;} ;
struct TYPE_3__ {struct chunk rbd_block; struct chunk status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fore200e*,struct chunk*) ;
 int FUNC_1 (struct fore200e*,struct chunk*) ;

__attribute__((used)) static void
FUNC_2(struct fore200e* VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {

     struct chunk* VAR_5 = &VAR_2->host_bsq[ VAR_3 ][ VAR_4 ].status;
     struct chunk* VAR_6 = &VAR_2->host_bsq[ VAR_3 ][ VAR_4 ].rbd_block;

     if (VAR_5->alloc_addr)
  VAR_2->bus->dma_chunk_free(VAR_2, VAR_5);

     if (VAR_6->alloc_addr)
  VAR_2->bus->dma_chunk_free(VAR_2, VAR_6);
 }
    }
}
