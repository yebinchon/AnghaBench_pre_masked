
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {unsigned int saved_queue_if_no_path; unsigned int queue_if_no_path; int lock; int process_queued_ios; scalar_t__ queue_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct multipath *VAR_1, unsigned VAR_2,
       unsigned VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_1->lock, VAR_4);

 if (VAR_3)
  VAR_1->saved_queue_if_no_path = VAR_1->queue_if_no_path;
 else
  VAR_1->saved_queue_if_no_path = VAR_2;
 VAR_1->queue_if_no_path = VAR_2;
 if (!VAR_1->queue_if_no_path && VAR_1->queue_size)
  FUNC_0(VAR_0, &VAR_1->process_queued_ios);

 FUNC_2(&VAR_1->lock, VAR_4);

 return 0;
}
