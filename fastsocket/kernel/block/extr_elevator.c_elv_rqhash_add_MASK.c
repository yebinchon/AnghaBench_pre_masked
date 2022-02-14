
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct elevator_queue* elevator; } ;
struct request {int hash; } ;
struct elevator_queue {int * hash; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct request*) ;

__attribute__((used)) static void FUNC_5(struct request_queue *VAR_0, struct request *VAR_1)
{
 struct elevator_queue *VAR_2 = VAR_0->elevator;

 FUNC_0(FUNC_2(VAR_1));
 FUNC_3(&VAR_1->hash, &VAR_2->hash[FUNC_1(FUNC_4(VAR_1))]);
}
