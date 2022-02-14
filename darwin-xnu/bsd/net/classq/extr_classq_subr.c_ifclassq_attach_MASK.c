
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifclassq {int * ifcq_request; int ifcq_dequeue_sc_multi; int ifcq_dequeue_multi; int ifcq_dequeue_sc; int ifcq_dequeue; int * ifcq_enqueue; int * ifcq_disc; int ifcq_type; } ;
typedef int * ifclassq_req_func ;
typedef int * ifclassq_enq_func ;
typedef int ifclassq_deq_sc_multi_func ;
typedef int ifclassq_deq_sc_func ;
typedef int ifclassq_deq_multi_func ;
typedef int ifclassq_deq_func ;


 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct ifclassq *VAR_0, u_int32_t VAR_1, void *VAR_2,
    ifclassq_enq_func VAR_3, ifclassq_deq_func VAR_4,
    ifclassq_deq_sc_func VAR_5, ifclassq_deq_multi_func VAR_6,
    ifclassq_deq_sc_multi_func VAR_7, ifclassq_req_func VAR_8)
{
 FUNC_0(VAR_0);

 FUNC_1(VAR_0->ifcq_disc == ((void*)0));
 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_8 != ((void*)0));

 VAR_0->ifcq_type = VAR_1;
 VAR_0->ifcq_disc = VAR_2;
 VAR_0->ifcq_enqueue = VAR_3;
 VAR_0->ifcq_dequeue = VAR_4;
 VAR_0->ifcq_dequeue_sc = VAR_5;
 VAR_0->ifcq_dequeue_multi = VAR_6;
 VAR_0->ifcq_dequeue_sc_multi = VAR_7;
 VAR_0->ifcq_request = VAR_8;

 return (0);
}
