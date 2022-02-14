
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {unsigned int event_wrap; unsigned int nr_dma_pages; scalar_t__ current_dma_page; scalar_t__ first_dma_page; int last_dma_age; TYPE_1__* dma_pages; } ;
typedef TYPE_2__ drm_savage_private_t ;
struct TYPE_5__ {scalar_t__ flushed; scalar_t__ used; int age; } ;


 int FUNC_0 (int *,int ,unsigned int) ;
 int FUNC_1 (TYPE_2__*,int ) ;

void FUNC_2(drm_savage_private_t * VAR_0)
{
 uint16_t VAR_1;
 unsigned int VAR_2, VAR_3;
 VAR_1 = FUNC_1(VAR_0, 0);
 VAR_2 = VAR_0->event_wrap;
 for (VAR_3 = 0; VAR_3 < VAR_0->nr_dma_pages; ++VAR_3) {
  FUNC_0(&VAR_0->dma_pages[VAR_3].age, VAR_1, VAR_2);
  VAR_0->dma_pages[VAR_3].used = 0;
  VAR_0->dma_pages[VAR_3].flushed = 0;
 }
 FUNC_0(&VAR_0->last_dma_age, VAR_1, VAR_2);
 VAR_0->first_dma_page = VAR_0->current_dma_page = 0;
}
