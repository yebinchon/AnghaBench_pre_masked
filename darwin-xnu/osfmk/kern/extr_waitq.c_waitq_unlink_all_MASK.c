
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {int dummy; } ;
typedef int kern_return_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct waitq*) ;
 int FUNC_2 (struct waitq*) ;
 int FUNC_3 (struct waitq*) ;
 int FUNC_4 (struct waitq*) ;
 int FUNC_5 (struct waitq*) ;
 int FUNC_6 (struct waitq*) ;

kern_return_t FUNC_7(struct waitq *VAR_1)
{
 kern_return_t VAR_2 = VAR_0;

 if (!FUNC_6(VAR_1))
  FUNC_1("Invalid waitq: %p", VAR_1);

 FUNC_0(!FUNC_2(VAR_1));
 FUNC_3(VAR_1);
 if (!FUNC_6(VAR_1)) {
  FUNC_5(VAR_1);
  return VAR_0;
 }

 VAR_2 = FUNC_4(VAR_1);


 return VAR_2;
}
