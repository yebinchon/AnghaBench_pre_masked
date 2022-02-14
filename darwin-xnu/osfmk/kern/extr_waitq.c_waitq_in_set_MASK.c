
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq_link {int dummy; } ;
struct waitq {scalar_t__ waitq_set_id; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct waitq*) ;
 int FUNC_1 (struct waitq*) ;
 int FUNC_2 (struct waitq*) ;
 struct waitq_link* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct waitq_link*) ;

boolean_t FUNC_5(struct waitq *VAR_2)
{
 struct waitq_link *VAR_3;
 boolean_t VAR_4 = VAR_0;

 if (FUNC_0(VAR_2))
  return VAR_0;

 FUNC_1(VAR_2);

 if (!VAR_2->waitq_set_id)
  goto out_unlock;

 VAR_3 = FUNC_3(VAR_2->waitq_set_id);
 if (VAR_3) {

  VAR_4 = VAR_1;
  FUNC_4(VAR_3);
 } else {

  VAR_2->waitq_set_id = 0;
 }

out_unlock:
 FUNC_2(VAR_2);
 return VAR_4;
}
