
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int kobj; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct request_queue *VAR_0)
{
 if (FUNC_2(!FUNC_0(VAR_0))) {
  FUNC_1(&VAR_0->kobj);
  return 0;
 }

 return 1;
}
