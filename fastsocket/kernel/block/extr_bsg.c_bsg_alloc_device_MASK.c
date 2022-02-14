
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsg_device {int wq_done; int wq_free; int dev_list; int done_list; int busy_list; int max_queue; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct bsg_device* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct bsg_device *FUNC_6(void)
{
 struct bsg_device *VAR_2;

 VAR_2 = FUNC_3(sizeof(struct bsg_device), VAR_1);
 if (FUNC_5(!VAR_2))
  return ((void*)0);

 FUNC_4(&VAR_2->lock);

 VAR_2->max_queue = VAR_0;

 FUNC_1(&VAR_2->busy_list);
 FUNC_1(&VAR_2->done_list);
 FUNC_0(&VAR_2->dev_list);

 FUNC_2(&VAR_2->wq_free);
 FUNC_2(&VAR_2->wq_done);
 return VAR_2;
}
