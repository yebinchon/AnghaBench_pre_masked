
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct iovec {scalar_t__ iov_base; scalar_t__ iov_len; } ;
struct dma_pinned_list {int nr_iovecs; struct dma_page_list* page_list; } ;
struct dma_page_list {int nr_pages; struct page** pages; scalar_t__ base_address; } ;
struct TYPE_5__ {int mmap_sem; } ;
struct TYPE_4__ {TYPE_2__* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct dma_pinned_list*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,unsigned long,int,int,int ,struct page**,int *) ;
 struct dma_pinned_list* FUNC_5 (int,int ) ;
 int FUNC_6 (struct iovec*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;

struct dma_pinned_list *FUNC_9(struct iovec *VAR_4, size_t VAR_5)
{
 struct dma_pinned_list *VAR_6;
 struct page **VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;


 if (FUNC_7(FUNC_3(), VAR_1))
  return ((void*)0);


 do {
  VAR_11 += VAR_4[VAR_10].iov_len;
  VAR_12 += FUNC_6(&VAR_4[VAR_10]);
  VAR_10++;
 } while (VAR_11 < VAR_5);


 VAR_6 = FUNC_5(sizeof(*VAR_6)
  + (VAR_10 * sizeof (struct dma_page_list))
  + (VAR_12 * sizeof (struct page*)), VAR_0);
 if (!VAR_6)
  goto out;


 VAR_7 = (struct page **) &VAR_6->page_list[VAR_10];

 VAR_6->nr_iovecs = 0;

 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  struct dma_page_list *VAR_13 = &VAR_6->page_list[VAR_8];

  VAR_5 -= VAR_4[VAR_8].iov_len;

  if (!FUNC_0(VAR_2, VAR_4[VAR_8].iov_base, VAR_4[VAR_8].iov_len))
   goto unpin;

  VAR_13->nr_pages = FUNC_6(&VAR_4[VAR_8]);
  VAR_13->base_address = VAR_4[VAR_8].iov_base;

  VAR_13->pages = VAR_7;
  VAR_7 += VAR_13->nr_pages;


  FUNC_2(&VAR_3->mm->mmap_sem);
  VAR_9 = FUNC_4(
   VAR_3,
   VAR_3->mm,
   (unsigned long) VAR_4[VAR_8].iov_base,
   VAR_13->nr_pages,
   1,
   0,
   VAR_13->pages,
   ((void*)0));
  FUNC_8(&VAR_3->mm->mmap_sem);

  if (VAR_9 != VAR_13->nr_pages)
   goto unpin;

  VAR_6->nr_iovecs = VAR_8 + 1;
 }

 return VAR_6;

unpin:
 FUNC_1(VAR_6);
out:
 return ((void*)0);
}
