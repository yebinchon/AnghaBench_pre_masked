
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct deadline_data {struct request** next_rq; } ;


 struct request* FUNC_0 (struct request*) ;
 int FUNC_1 (struct deadline_data*,struct request*) ;
 int FUNC_2 (int ,struct request*) ;
 int FUNC_3 (struct request*) ;

__attribute__((used)) static inline void
FUNC_4(struct deadline_data *VAR_0, struct request *VAR_1)
{
 const int VAR_2 = FUNC_3(VAR_1);

 if (VAR_0->next_rq[VAR_2] == VAR_1)
  VAR_0->next_rq[VAR_2] = FUNC_0(VAR_1);

 FUNC_2(FUNC_1(VAR_0, VAR_1), VAR_1);
}
