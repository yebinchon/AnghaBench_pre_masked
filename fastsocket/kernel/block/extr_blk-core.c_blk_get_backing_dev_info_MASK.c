
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backing_dev_info {int dummy; } ;
struct request_queue {struct backing_dev_info backing_dev_info; } ;
struct block_device {int dummy; } ;


 struct request_queue* FUNC_0 (struct block_device*) ;

struct backing_dev_info *FUNC_1(struct block_device *VAR_0)
{
 struct backing_dev_info *VAR_1 = ((void*)0);
 struct request_queue *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2)
  VAR_1 = &VAR_2->backing_dev_info;
 return VAR_1;
}
