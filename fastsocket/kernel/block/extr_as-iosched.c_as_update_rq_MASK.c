
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct as_data {scalar_t__ antic_status; int * next_rq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct as_data*) ;
 scalar_t__ FUNC_1 (struct as_data*,struct request*) ;
 int FUNC_2 (struct as_data*,struct request*,int ) ;
 int FUNC_3 (struct request*) ;

__attribute__((used)) static void FUNC_4(struct as_data *VAR_2, struct request *VAR_3)
{
 const int VAR_4 = FUNC_3(VAR_3);


 VAR_2->next_rq[VAR_4] = FUNC_2(VAR_2, VAR_3, VAR_2->next_rq[VAR_4]);






 if (VAR_2->antic_status == VAR_1
   || VAR_2->antic_status == VAR_0) {
  if (FUNC_1(VAR_2, VAR_3))
   FUNC_0(VAR_2);
 }
}
