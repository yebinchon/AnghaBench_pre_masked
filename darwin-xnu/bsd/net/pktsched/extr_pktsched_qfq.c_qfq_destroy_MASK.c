
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_if {struct ifclassq* qif_ifq; } ;
struct ifclassq {int dummy; } ;


 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*) ;
 int FUNC_2 (struct qfq_if*) ;

int
FUNC_3(struct qfq_if *VAR_0)
{
 struct ifclassq *VAR_1 = VAR_0->qif_ifq;
 int VAR_2;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_2(VAR_0);
 FUNC_1(VAR_1);

 return (VAR_2);
}
