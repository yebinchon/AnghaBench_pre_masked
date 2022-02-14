
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dn_flow_set {int rq_size; int rq_elements; struct dn_flow_queue** rq; } ;
struct dn_flow_queue_64 {void* fs; void* tail; void* head; void* next; } ;
struct dn_flow_queue {int hash_slot; struct dn_flow_set* fs; struct dn_flow_queue* next; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_1 (struct dn_flow_set*) ;
 int FUNC_2 (struct dn_flow_queue*,struct dn_flow_queue_64*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,int,...) ;

__attribute__((used)) static
char* FUNC_4(struct dn_flow_set *VAR_3, char *VAR_4)
{
    int VAR_5, VAR_6 = 0 ;
    struct dn_flow_queue *VAR_7;
 struct dn_flow_queue_64 *VAR_8 = (struct dn_flow_queue_64 *)VAR_4;

 FUNC_0(VAR_2, VAR_0);

    for (VAR_5 = 0 ; VAR_5 <= VAR_3->rq_size ; VAR_5++)
  for (VAR_7 = VAR_3->rq[VAR_5] ; VAR_7 ; VAR_7 = VAR_7->next, VAR_8++ ) {
   if (VAR_7->hash_slot != VAR_5)
    FUNC_3("dummynet: ++ at %d: wrong slot (have %d, "
        "should be %d)\n", VAR_6, VAR_7->hash_slot, VAR_5);
   if (VAR_7->fs != VAR_3)
    FUNC_3("dummynet: ++ at %d: wrong fs ptr "
        "(have 0x%llx, should be 0x%llx)\n", VAR_5,
        (uint64_t)FUNC_1(VAR_7->fs),
        (uint64_t)FUNC_1(VAR_3));
   VAR_6++ ;

   FUNC_2( VAR_7, VAR_8 );

   VAR_8->next = VAR_1 ;
   VAR_8->head = VAR_8->tail = VAR_1 ;
   VAR_8->fs = VAR_1 ;
  }
    if (VAR_6 != VAR_3->rq_elements)
  FUNC_3("dummynet: ++ wrong count, have %d should be %d\n",
      VAR_6, VAR_3->rq_elements);
    return (char *)VAR_8 ;
}
