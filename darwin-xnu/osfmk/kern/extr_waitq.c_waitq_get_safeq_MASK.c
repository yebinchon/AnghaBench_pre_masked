
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {int dummy; } ;


 int FUNC_0 (int) ;
 struct waitq* FUNC_1 (struct waitq*) ;
 struct waitq* FUNC_2 (struct waitq*) ;
 int FUNC_3 (struct waitq*) ;
 scalar_t__ FUNC_4 (struct waitq*) ;

struct waitq * FUNC_5(struct waitq *VAR_0)
{
 struct waitq *VAR_1;


 if (FUNC_4(VAR_0)) {
  FUNC_0(!FUNC_3(VAR_0));
  VAR_1 = FUNC_2(VAR_0);
 } else {
  VAR_1 = FUNC_1(VAR_0);
 }
 return VAR_1;
}
