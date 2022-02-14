
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct cardinfo* queuedata; } ;
struct cardinfo {int lock; } ;


 int FUNC_0 (struct cardinfo*) ;
 scalar_t__ FUNC_1 (struct request_queue*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct request_queue *VAR_0)
{
 struct cardinfo *VAR_1 = VAR_0->queuedata;
 unsigned long VAR_2;

 FUNC_2(&VAR_1->lock, VAR_2);
 if (FUNC_1(VAR_0))
  FUNC_0(VAR_1);
 FUNC_3(&VAR_1->lock, VAR_2);
}
