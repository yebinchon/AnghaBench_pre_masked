
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int (* lld_busy_fn ) (struct request_queue*) ;} ;


 int FUNC_0 (struct request_queue*) ;

int FUNC_1(struct request_queue *VAR_0)
{
 if (VAR_0->lld_busy_fn)
  return VAR_0->lld_busy_fn(VAR_0);

 return 0;
}
