
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct deadline_data {int last_sector; int ** next_rq; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_0 (struct request*) ;
 int FUNC_1 (struct deadline_data*,struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;

__attribute__((used)) static void
FUNC_4(struct deadline_data *VAR_2, struct request *VAR_3)
{
 const int VAR_4 = FUNC_2(VAR_3);

 VAR_2->next_rq[VAR_0] = ((void*)0);
 VAR_2->next_rq[VAR_1] = ((void*)0);
 VAR_2->next_rq[VAR_4] = FUNC_0(VAR_3);

 VAR_2->last_sector = FUNC_3(VAR_3);





 FUNC_1(VAR_2, VAR_3);
}
