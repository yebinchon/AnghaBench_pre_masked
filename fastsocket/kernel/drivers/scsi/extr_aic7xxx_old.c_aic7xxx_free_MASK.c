
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aic7xxx_scb_dma {int dma_len; unsigned long dma_offset; scalar_t__ dma_address; } ;
struct aic7xxx_host {scalar_t__ fifo_dma; scalar_t__ untagged_scbs; int pdev; TYPE_2__* scb_data; } ;
struct TYPE_4__ {void* hscbs; int hscbs_dma_len; int numscbs; TYPE_1__** scb_array; int * hscb_kmalloc_ptr; scalar_t__ hscbs_dma; } ;
struct TYPE_3__ {TYPE_2__* kmalloc_ptr; struct aic7xxx_scb_dma* scb_dma; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int,void*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct aic7xxx_host *VAR_0)
{
  int VAR_1;




  if (VAR_0->scb_data != ((void*)0))
  {
    struct aic7xxx_scb_dma *VAR_2 = ((void*)0);
    if (VAR_0->scb_data->hscbs != ((void*)0))
    {
      FUNC_1(VAR_0->pdev, VAR_0->scb_data->hscbs_dma_len,
     VAR_0->scb_data->hscbs, VAR_0->scb_data->hscbs_dma);
      VAR_0->scb_data->hscbs = VAR_0->scb_data->hscb_kmalloc_ptr = ((void*)0);
    }






    for (VAR_1 = 0; VAR_1 < VAR_0->scb_data->numscbs; VAR_1++)
    {
      if (VAR_0->scb_data->scb_array[VAR_1]->scb_dma != VAR_2)
      {
 VAR_2 = VAR_0->scb_data->scb_array[VAR_1]->scb_dma;
 FUNC_1(VAR_0->pdev, VAR_2->dma_len,
       (void *)((unsigned long)VAR_2->dma_address
                                     - VAR_2->dma_offset),
       VAR_2->dma_address);
      }
      FUNC_0(VAR_0->scb_data->scb_array[VAR_1]->kmalloc_ptr);
      VAR_0->scb_data->scb_array[VAR_1] = ((void*)0);
    }




    FUNC_0(VAR_0->scb_data);
  }

  FUNC_1(VAR_0->pdev, 3*256, (void *)VAR_0->untagged_scbs, VAR_0->fifo_dma);
}
