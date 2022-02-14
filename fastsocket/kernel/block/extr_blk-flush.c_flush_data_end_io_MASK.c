
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {struct request_queue* q; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct request*,int ,int) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;

__attribute__((used)) static void FUNC_3(struct request *VAR_1, int VAR_2)
{
 struct request_queue *VAR_3 = VAR_1->q;
 bool VAR_4 = FUNC_2(VAR_3);





 if (FUNC_0(VAR_1, VAR_0, VAR_2) && VAR_4)
  FUNC_1(VAR_3);
}
