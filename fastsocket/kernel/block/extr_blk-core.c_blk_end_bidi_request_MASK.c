
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; } ;
struct request {struct request_queue* q; } ;


 int FUNC_0 (struct request*,int) ;
 scalar_t__ FUNC_1 (struct request*,int,unsigned int,unsigned int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct request *VAR_0, int VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 struct request_queue *VAR_4 = VAR_0->q;
 unsigned long VAR_5;

 if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3))
  return 1;

 FUNC_2(VAR_4->queue_lock, VAR_5);
 FUNC_0(VAR_0, VAR_1);
 FUNC_3(VAR_4->queue_lock, VAR_5);

 return 0;
}
