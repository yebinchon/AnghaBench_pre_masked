
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct dasd_block {int request_queue_lock; int request_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int ) ;
 struct request* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dasd_block *VAR_1)
{
 struct request *VAR_2;

 if (!VAR_1->request_queue)
  return;

 FUNC_2(&VAR_1->request_queue_lock);
 while ((VAR_2 = FUNC_1(VAR_1->request_queue)))
  FUNC_0(VAR_2, -VAR_0);
 FUNC_3(&VAR_1->request_queue_lock);
}
