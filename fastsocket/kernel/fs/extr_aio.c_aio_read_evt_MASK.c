
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aio_ring_info {unsigned long nr; int ring_lock; int * ring_pages; } ;
struct kioctx {struct aio_ring_info ring_info; } ;
struct io_event {int dummy; } ;
struct aio_ring {unsigned long head; unsigned long tail; scalar_t__ nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct io_event* FUNC_0 (struct aio_ring_info*,unsigned long,int ) ;
 int FUNC_1 (char*,int,unsigned long,unsigned long) ;
 struct aio_ring* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct aio_ring*,int ) ;
 int FUNC_4 (struct io_event*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct kioctx *VAR_2, struct io_event *VAR_3)
{
 struct aio_ring_info *VAR_4 = &VAR_2->ring_info;
 struct aio_ring *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_2(VAR_4->ring_pages[0], VAR_0);
 FUNC_1("in aio_read_evt h%lu t%lu m%lu\n",
   (unsigned long)VAR_5->head, (unsigned long)VAR_5->tail,
   (unsigned long)VAR_5->nr);

 if (VAR_5->head == VAR_5->tail)
  goto out;

 FUNC_6(&VAR_4->ring_lock);

 VAR_6 = VAR_5->head % VAR_4->nr;
 if (VAR_6 != VAR_5->tail) {
  struct io_event *VAR_8 = FUNC_0(VAR_4, VAR_6, VAR_1);
  *VAR_3 = *VAR_8;
  VAR_6 = (VAR_6 + 1) % VAR_4->nr;
  FUNC_5();
  VAR_5->head = VAR_6;
  VAR_7 = 1;
  FUNC_4(VAR_8, VAR_1);
 }
 FUNC_7(&VAR_4->ring_lock);

out:
 FUNC_3(VAR_5, VAR_0);
 FUNC_1("leaving aio_read_evt: %d  h%lu t%lu\n", VAR_7,
   (unsigned long)VAR_5->head, (unsigned long)VAR_5->tail);
 return VAR_7;
}
