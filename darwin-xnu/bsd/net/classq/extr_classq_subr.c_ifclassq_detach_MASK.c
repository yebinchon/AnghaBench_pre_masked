
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifclassq {int * ifcq_request; int * ifcq_dequeue_sc; int * ifcq_dequeue; int * ifcq_enqueue; int * ifcq_disc; int ifcq_type; } ;


 int FUNC_0 (struct ifclassq*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct ifclassq *VAR_1)
{
 FUNC_0(VAR_1);

 FUNC_1(VAR_1->ifcq_disc == ((void*)0));

 VAR_1->ifcq_type = VAR_0;
 VAR_1->ifcq_disc = ((void*)0);
 VAR_1->ifcq_enqueue = ((void*)0);
 VAR_1->ifcq_dequeue = ((void*)0);
 VAR_1->ifcq_dequeue_sc = ((void*)0);
 VAR_1->ifcq_request = ((void*)0);

 return (0);
}
