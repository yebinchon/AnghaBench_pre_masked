
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
typedef int spinlock_t ;
typedef int request_fn_proc ;


 struct request_queue* FUNC_0 (struct request_queue*,int *,int *,int) ;

struct request_queue *
FUNC_1(struct request_queue *VAR_0, request_fn_proc *VAR_1,
    spinlock_t *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, -1);
}
