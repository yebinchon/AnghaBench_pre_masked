
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {size_t first_dma_page; size_t current_dma_page; TYPE_2__* dma_pages; TYPE_1__* cmd_dma; } ;
typedef TYPE_3__ drm_savage_private_t ;
struct TYPE_6__ {unsigned int used; } ;
struct TYPE_5__ {scalar_t__ handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,size_t,size_t,unsigned int) ;
 int FUNC_3 (char*,unsigned int,unsigned int) ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_4(drm_savage_private_t * VAR_2)
{
 unsigned int VAR_3, VAR_4;
 VAR_0;

 if (VAR_2->first_dma_page == VAR_2->current_dma_page &&
     VAR_2->dma_pages[VAR_2->current_dma_page].used == 0)
  return;

 FUNC_2("first=%u, cur=%u, cur->used=%u\n",
    VAR_2->first_dma_page, VAR_2->current_dma_page,
    VAR_2->dma_pages[VAR_2->current_dma_page].used);

 for (VAR_3 = VAR_2->first_dma_page;
      VAR_3 <= VAR_2->current_dma_page && VAR_2->dma_pages[VAR_3].used;
      ++VAR_3) {
  uint32_t *VAR_5 = (uint32_t *) VAR_2->cmd_dma->handle +
      VAR_3 * VAR_1;
  FUNC_1(VAR_2->dma_pages[VAR_3].used);
  for (VAR_4 = 0; VAR_4 < VAR_2->dma_pages[VAR_3].used; ++VAR_4) {
   FUNC_0(VAR_5[VAR_4]);
  }
  VAR_2->dma_pages[VAR_3].used = 0;
 }


 VAR_2->first_dma_page = VAR_2->current_dma_page = 0;
}
