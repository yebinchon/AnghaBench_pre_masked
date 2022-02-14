
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aio_ring_info {long nr_pages; scalar_t__ nr; int * ring_pages; int * internal_pages; scalar_t__ mmap_size; int mmap_base; } ;
struct kioctx {TYPE_1__* mm; struct aio_ring_info ring_info; } ;
struct TYPE_2__ {int mmap_sem; } ;


 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct kioctx *VAR_0)
{
 struct aio_ring_info *VAR_1 = &VAR_0->ring_info;
 long VAR_2;

 for (VAR_2=0; VAR_2<VAR_1->nr_pages; VAR_2++)
  FUNC_3(VAR_1->ring_pages[VAR_2]);

 if (VAR_1->mmap_size) {
  FUNC_1(&VAR_0->mm->mmap_sem);
  FUNC_0(VAR_0->mm, VAR_1->mmap_base, VAR_1->mmap_size);
  FUNC_4(&VAR_0->mm->mmap_sem);
 }

 if (VAR_1->ring_pages && VAR_1->ring_pages != VAR_1->internal_pages)
  FUNC_2(VAR_1->ring_pages);
 VAR_1->ring_pages = ((void*)0);
 VAR_1->nr = 0;
}
