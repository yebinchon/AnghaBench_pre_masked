
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct aio_ring_info {unsigned int nr; int mmap_size; int mmap_base; int nr_pages; int * ring_pages; int * internal_pages; } ;
struct kioctx {unsigned int max_reqs; int user_id; TYPE_1__* mm; struct aio_ring_info ring_info; } ;
struct io_event {int dummy; } ;
struct aio_ring {unsigned int nr; int id; int header_length; int incompat_features; int compat_features; int magic; scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_2__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct kioctx*) ;
 int VAR_15 ;
 int FUNC_2 (int *,int ,int,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,TYPE_1__*,int,int,int,int ,int *,int *) ;
 int * FUNC_6 (int,int,int ) ;
 struct aio_ring* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct aio_ring*,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct kioctx *VAR_16)
{
 struct aio_ring *VAR_17;
 struct aio_ring_info *VAR_18 = &VAR_16->ring_info;
 unsigned VAR_19 = VAR_16->max_reqs;
 unsigned long VAR_20;
 int VAR_21;


 VAR_19 += 2;

 VAR_20 = sizeof(struct aio_ring);
 VAR_20 += sizeof(struct io_event) * VAR_19;
 VAR_21 = (VAR_20 + VAR_12-1) >> VAR_11;

 if (VAR_21 < 0)
  return -VAR_5;

 VAR_19 = (VAR_12 * VAR_21 - sizeof(struct aio_ring)) / sizeof(struct io_event);

 VAR_18->nr = 0;
 VAR_18->ring_pages = VAR_18->internal_pages;
 if (VAR_21 > VAR_3) {
  VAR_18->ring_pages = FUNC_6(VAR_21, sizeof(struct page *), VAR_7);
  if (!VAR_18->ring_pages)
   return -VAR_6;
 }

 VAR_18->mmap_size = VAR_21 * VAR_12;
 FUNC_4("attempting mmap of %lu bytes\n", VAR_18->mmap_size);
 FUNC_3(&VAR_16->mm->mmap_sem);
 VAR_18->mmap_base = FUNC_2(((void*)0), 0, VAR_18->mmap_size,
      VAR_13|VAR_14, VAR_9|VAR_10,
      0);
 if (FUNC_0((void *)VAR_18->mmap_base)) {
  FUNC_10(&VAR_16->mm->mmap_sem);
  VAR_18->mmap_size = 0;
  FUNC_1(VAR_16);
  return -VAR_4;
 }

 FUNC_4("mmap address: 0x%08lx\n", VAR_18->mmap_base);
 VAR_18->nr_pages = FUNC_5(VAR_15, VAR_16->mm,
     VAR_18->mmap_base, VAR_21,
     1, 0, VAR_18->ring_pages, ((void*)0));
 FUNC_10(&VAR_16->mm->mmap_sem);

 if (FUNC_9(VAR_18->nr_pages != VAR_21)) {
  FUNC_1(VAR_16);
  return -VAR_4;
 }

 VAR_16->user_id = VAR_18->mmap_base;

 VAR_18->nr = VAR_19;

 VAR_17 = FUNC_7(VAR_18->ring_pages[0], VAR_8);
 VAR_17->nr = VAR_19;
 VAR_17->id = VAR_16->user_id;
 VAR_17->head = VAR_17->tail = 0;
 VAR_17->magic = VAR_2;
 VAR_17->compat_features = VAR_0;
 VAR_17->incompat_features = VAR_1;
 VAR_17->header_length = sizeof(struct aio_ring);
 FUNC_8(VAR_17, VAR_8);

 return 0;
}
