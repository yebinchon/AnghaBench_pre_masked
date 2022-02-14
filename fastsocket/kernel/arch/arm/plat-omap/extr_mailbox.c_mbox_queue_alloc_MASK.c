
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct omap_mbox* queuedata; } ;
struct omap_mbox_queue {int work; struct request_queue* queue; int lock; } ;
struct omap_mbox {int dummy; } ;
typedef int request_fn_proc ;


 int VAR_0 ;
 int FUNC_0 (int *,void (*) (struct work_struct*)) ;
 struct request_queue* FUNC_1 (int *,int *) ;
 int FUNC_2 (struct omap_mbox_queue*) ;
 struct omap_mbox_queue* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct omap_mbox_queue *FUNC_5(struct omap_mbox *VAR_1,
     request_fn_proc * VAR_2,
     void (*VAR_3) (struct work_struct *))
{
 struct request_queue *VAR_4;
 struct omap_mbox_queue *VAR_5;

 VAR_5 = FUNC_3(sizeof(struct omap_mbox_queue), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_4(&VAR_5->lock);

 VAR_4 = FUNC_1(VAR_2, &VAR_5->lock);
 if (!VAR_4)
  goto error;
 VAR_4->queuedata = VAR_1;
 VAR_5->queue = VAR_4;

 FUNC_0(&VAR_5->work, VAR_3);

 return VAR_5;
error:
 FUNC_2(VAR_5);
 return ((void*)0);
}
