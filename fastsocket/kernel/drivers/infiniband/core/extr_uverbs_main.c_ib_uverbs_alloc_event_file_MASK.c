
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_uverbs_file {int dummy; } ;
struct ib_uverbs_event_file {int is_async; scalar_t__ is_closed; int * async_queue; struct ib_uverbs_file* uverbs_file; int poll_wait; int event_list; int lock; int ref; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct file* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 struct file* FUNC_2 (char*,int *,struct ib_uverbs_event_file*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ib_uverbs_event_file*) ;
 struct ib_uverbs_event_file* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;

struct file *FUNC_10(struct ib_uverbs_file *VAR_5,
     int VAR_6, int *VAR_7)
{
 struct ib_uverbs_event_file *VAR_8;
 struct file *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_6(sizeof *VAR_8, VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 FUNC_7(&VAR_8->ref);
 FUNC_9(&VAR_8->lock);
 FUNC_1(&VAR_8->event_list);
 FUNC_4(&VAR_8->poll_wait);
 VAR_8->uverbs_file = VAR_5;
 VAR_8->async_queue = ((void*)0);
 VAR_8->is_async = VAR_6;
 VAR_8->is_closed = 0;

 *VAR_7 = FUNC_3();
 if (*VAR_7 < 0) {
  VAR_10 = *VAR_7;
  goto err;
 }

 VAR_9 = FUNC_2("[uverbs-event]", &VAR_4,
      VAR_8, VAR_3);
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto err_fd;
 }

 return VAR_9;

err_fd:
 FUNC_8(*VAR_7);

err:
 FUNC_5(VAR_8);
 return FUNC_0(VAR_10);
}
