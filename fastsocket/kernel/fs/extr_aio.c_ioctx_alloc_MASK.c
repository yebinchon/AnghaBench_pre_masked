
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mm_struct {int ioctx_lock; int ioctx_list; int mm_count; } ;
struct TYPE_3__ {int nr; int ring_lock; } ;
struct kioctx {unsigned int max_reqs; TYPE_1__ ring_info; int user_id; int list; int wq; int run_list; int active_reqs; int wait; int ctx_lock; int users; struct mm_struct* mm; } ;
struct kiocb {int dummy; } ;
struct io_event {int dummy; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kioctx* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kioctx*) ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (struct kioctx*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 TYPE_2__* VAR_8 ;
 int FUNC_7 (char*,struct kioctx*,...) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int VAR_9 ;
 int FUNC_10 (int ,struct kioctx*) ;
 struct kioctx* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct mm_struct*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 () ;

__attribute__((used)) static struct kioctx *FUNC_20(unsigned VAR_10)
{
 struct mm_struct *VAR_11;
 struct kioctx *VAR_12;
 int VAR_13 = 0;


 if ((VAR_10 > (0x10000000U / sizeof(struct io_event))) ||
     (VAR_10 > (0x10000000U / sizeof(struct kiocb)))) {
  FUNC_13("ENOMEM: nr_events too high\n");
  return FUNC_0(-VAR_1);
 }

 if ((unsigned long)VAR_10 > VAR_5)
  return FUNC_0(-VAR_0);

 VAR_12 = FUNC_11(VAR_9, VAR_3);
 if (!VAR_12)
  return FUNC_0(-VAR_2);

 VAR_12->max_reqs = VAR_10;
 VAR_11 = VAR_12->mm = VAR_8->mm;
 FUNC_5(&VAR_11->mm_count);

 FUNC_6(&VAR_12->users, 2);
 FUNC_16(&VAR_12->ctx_lock);
 FUNC_16(&VAR_12->ring_info.ring_lock);
 FUNC_9(&VAR_12->wait);

 FUNC_2(&VAR_12->active_reqs);
 FUNC_2(&VAR_12->run_list);
 FUNC_1(&VAR_12->wq, VAR_4);

 if (FUNC_4(VAR_12) < 0)
  goto out_freectx;


 do {
  FUNC_15(&VAR_7);
  if (VAR_6 + VAR_10 > VAR_5 ||
      VAR_6 + VAR_10 < VAR_6)
   VAR_12->max_reqs = 0;
  else
   VAR_6 += VAR_12->max_reqs;
  FUNC_18(&VAR_7);
  if (VAR_12->max_reqs || VAR_13)
   break;


  FUNC_19();
  VAR_13 = 1;
  VAR_12->max_reqs = VAR_10;
 } while (1);

 if (VAR_12->max_reqs == 0)
  goto out_cleanup;


 FUNC_14(&VAR_11->ioctx_lock);
 FUNC_8(&VAR_12->list, &VAR_11->ioctx_list);
 FUNC_17(&VAR_11->ioctx_lock);

 FUNC_7("aio: allocated ioctx %p[%ld]: mm=%p mask=0x%x\n",
  VAR_12, VAR_12->user_id, VAR_8->mm, VAR_12->ring_info.nr);
 return VAR_12;

out_cleanup:
 FUNC_3(VAR_12);
 return FUNC_0(-VAR_0);

out_freectx:
 FUNC_12(VAR_11);
 FUNC_10(VAR_9, VAR_12);
 VAR_12 = FUNC_0(-VAR_2);

 FUNC_7("aio: error allocating ioctx %p\n", VAR_12);
 return VAR_12;
}
