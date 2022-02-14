
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; } ;
struct dn_flow_set {int rq_elements; scalar_t__ last_expired; int rq_size; struct dn_flow_queue** rq; } ;
struct dn_flow_queue {scalar_t__ S; scalar_t__ F; struct dn_flow_queue* next; int * head; } ;


 int FUNC_0 (struct dn_flow_queue*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct timeval*) ;

__attribute__((used)) static int
FUNC_2(struct dn_flow_set *VAR_1)
{
    struct dn_flow_queue *VAR_2, *VAR_3 ;
    int VAR_4, VAR_5 = VAR_1->rq_elements ;
 struct timeval VAR_6;


 FUNC_1(&VAR_6);

    if (VAR_1->last_expired == VAR_6.tv_sec)
 return 0 ;
    VAR_1->last_expired = VAR_6.tv_sec ;
    for (VAR_4 = 0 ; VAR_4 <= VAR_1->rq_size ; VAR_4++)
 for (VAR_3=((void*)0), VAR_2 = VAR_1->rq[VAR_4] ; VAR_2 != ((void*)0) ; )
     if (VAR_2->head != ((void*)0) || VAR_2->S != VAR_2->F+1) {
    VAR_3 = VAR_2 ;
           VAR_2 = VAR_2->next ;
       } else {
  struct dn_flow_queue *VAR_7 = VAR_2 ;

  if (VAR_3 != ((void*)0))
      VAR_3->next = VAR_2 = VAR_2->next ;
  else
      VAR_1->rq[VAR_4] = VAR_2 = VAR_2->next ;
  VAR_1->rq_elements-- ;
  FUNC_0(VAR_7, VAR_0);
     }
    return VAR_5 - VAR_1->rq_elements ;
}
