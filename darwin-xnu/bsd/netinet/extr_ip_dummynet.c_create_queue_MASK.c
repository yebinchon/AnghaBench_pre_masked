
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_flow_set {int rq_elements; int rq_size; struct dn_flow_queue** rq; } ;
struct dn_flow_queue {int hash_slot; scalar_t__ F; scalar_t__ S; struct dn_flow_queue* next; struct dn_flow_set* fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dn_flow_queue* FUNC_0 (int,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct dn_flow_set*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct dn_flow_queue *
FUNC_3(struct dn_flow_set *VAR_4, int VAR_5)
{
    struct dn_flow_queue *VAR_6 ;

    if (VAR_4->rq_elements > VAR_4->rq_size * VAR_3 &&
     FUNC_1(VAR_4) == 0) {



 VAR_5 = VAR_4->rq_size ;
 if ( VAR_4->rq[VAR_5] != ((void*)0) )
     return VAR_4->rq[VAR_5] ;
    }
    VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1, VAR_0 | VAR_2);
    if (VAR_6 == ((void*)0)) {
 FUNC_2("dummynet: sorry, cannot allocate queue for new flow\n");
 return ((void*)0) ;
    }
    VAR_6->fs = VAR_4 ;
    VAR_6->hash_slot = VAR_5 ;
    VAR_6->next = VAR_4->rq[VAR_5] ;
    VAR_6->S = VAR_6->F + 1;
    VAR_4->rq[VAR_5] = VAR_6 ;
    VAR_4->rq_elements++ ;
    return VAR_6 ;
}
