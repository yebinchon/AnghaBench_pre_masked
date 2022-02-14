
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct qfq_if {int qif_ifq; } ;
struct qfq_class {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qfq_if*,struct qfq_class*) ;
 struct qfq_class* FUNC_2 (struct qfq_if*,int ) ;

int
FUNC_3(struct qfq_if *VAR_1, u_int32_t VAR_2)
{
 struct qfq_class *VAR_3;

 FUNC_0(VAR_1->qif_ifq);

 if ((VAR_3 = FUNC_2(VAR_1, VAR_2)) == ((void*)0))
  return (VAR_0);

 return (FUNC_1(VAR_1, VAR_3));
}
