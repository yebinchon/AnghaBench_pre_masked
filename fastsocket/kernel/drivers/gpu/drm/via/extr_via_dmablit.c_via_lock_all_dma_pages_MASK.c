
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_8__ {unsigned long num_pages; scalar_t__ direction; void* state; int * pages; } ;
typedef TYPE_1__ drm_via_sg_info_t ;
struct TYPE_9__ {int mem_addr; int num_lines; int mem_stride; } ;
typedef TYPE_2__ drm_via_dmablit_t ;
struct TYPE_11__ {int mmap_sem; } ;
struct TYPE_10__ {TYPE_6__* mm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (int) ;
 TYPE_5__* VAR_3 ;
 int FUNC_2 (int *) ;
 void* VAR_4 ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*,unsigned long,int,int,int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(drm_via_sg_info_t *VAR_5, drm_via_dmablit_t *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8 = FUNC_1(VAR_6->mem_addr);
 VAR_5->num_pages = FUNC_1(VAR_6->mem_addr + (VAR_6->num_lines * VAR_6->mem_stride - 1)) -
  VAR_8 + 1;

 VAR_5->pages = FUNC_5(sizeof(struct page *) * VAR_5->num_pages);
 if (((void*)0) == VAR_5->pages)
  return -VAR_2;
 FUNC_2(&VAR_3->mm->mmap_sem);
 VAR_7 = FUNC_3(VAR_3, VAR_3->mm,
        (unsigned long)VAR_6->mem_addr,
        VAR_5->num_pages,
        (VAR_5->direction == VAR_0),
        0, VAR_5->pages, ((void*)0));

 FUNC_4(&VAR_3->mm->mmap_sem);
 if (VAR_7 != VAR_5->num_pages) {
  if (VAR_7 < 0)
   return VAR_7;
  VAR_5->state = VAR_4;
  return -VAR_1;
 }
 VAR_5->state = VAR_4;
 FUNC_0("DMA pages locked\n");
 return 0;
}
