
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifclassq {scalar_t__ ifcq_type; int * ifcq_disc; } ;
typedef int fq_if_t ;


 int FUNC_0 (struct ifclassq*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ifclassq*) ;

int
FUNC_4(struct ifclassq *VAR_1)
{
 fq_if_t *VAR_2 = (fq_if_t *)VAR_1->ifcq_disc;

 FUNC_0(VAR_1);
 FUNC_1(VAR_2 != ((void*)0) && VAR_1->ifcq_type == VAR_0);

 FUNC_2(VAR_2);
 VAR_1->ifcq_disc = ((void*)0);
 return (FUNC_3(VAR_1));
}
