
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r5conf {int plug; } ;
struct mddev {int * to_remove; int * plug; struct r5conf* private; TYPE_2__* queue; int thread; } ;
struct TYPE_3__ {int * congested_fn; } ;
struct TYPE_4__ {TYPE_1__ backing_dev_info; } ;


 int FUNC_0 (struct r5conf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct mddev *VAR_1)
{
 struct r5conf *VAR_2 = VAR_1->private;

 FUNC_1(&VAR_1->thread);
 if (VAR_1->queue)
  VAR_1->queue->backing_dev_info.congested_fn = ((void*)0);
 FUNC_2(&VAR_2->plug);
 FUNC_0(VAR_2);
 VAR_1->private = ((void*)0);
 VAR_1->plug = ((void*)0);
 VAR_1->to_remove = &VAR_0;
 return 0;
}
