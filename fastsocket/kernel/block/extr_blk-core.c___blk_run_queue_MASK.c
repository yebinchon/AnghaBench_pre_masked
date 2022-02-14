
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int (* request_fn ) (struct request_queue*) ;} ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 scalar_t__ FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct request_queue *VAR_0)
{
 FUNC_1(VAR_0);

 if (FUNC_4(FUNC_0(VAR_0)))
  return;

 if (FUNC_2(VAR_0))
  return;

 VAR_0->request_fn(VAR_0);
}
