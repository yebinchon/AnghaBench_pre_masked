
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
typedef int spinlock_t ;
typedef int request_fn_proc ;


 int VAR_0 ;
 struct request_queue* FUNC_0 (int ,int) ;
 int FUNC_1 (struct request_queue*) ;
 struct request_queue* FUNC_2 (struct request_queue*,int *,int *,int) ;

struct request_queue *
FUNC_3(request_fn_proc *VAR_1, spinlock_t *VAR_2, int VAR_3)
{
 struct request_queue *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);
 if (!VAR_5)
  FUNC_1(VAR_4);

 return VAR_5;
}
