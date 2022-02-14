
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* user32_addr_t ;
typedef int uint64_t ;
struct dn_flow_set {int rq_size; int rq_elements; struct dn_flow_queue** rq; } ;
struct dn_flow_queue_32 {void* fs; void* tail; void* head; void* next; } ;
struct dn_flow_queue {int hash_slot; struct dn_flow_set* fs; struct dn_flow_queue* next; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct dn_flow_set*) ;
 int FUNC_2 (struct dn_flow_queue*,struct dn_flow_queue_32*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int,int,...) ;

__attribute__((used)) static
char* FUNC_4(struct dn_flow_set *VAR_2, char *VAR_3)
{
    int VAR_4, VAR_5 = 0 ;
    struct dn_flow_queue *VAR_6;
 struct dn_flow_queue_32 *VAR_7 = (struct dn_flow_queue_32 *)VAR_3;

 FUNC_0(VAR_1, VAR_0);

    for (VAR_4 = 0 ; VAR_4 <= VAR_2->rq_size ; VAR_4++)
  for (VAR_6 = VAR_2->rq[VAR_4] ; VAR_6 ; VAR_6 = VAR_6->next, VAR_7++ ) {
   if (VAR_6->hash_slot != VAR_4)
    FUNC_3("dummynet: ++ at %d: wrong slot (have %d, "
        "should be %d)\n", VAR_5, VAR_6->hash_slot, VAR_4);
   if (VAR_6->fs != VAR_2)
    FUNC_3("dummynet: ++ at %d: wrong fs ptr "
        "(have 0x%llx, should be 0x%llx)\n", VAR_4,
        (uint64_t)FUNC_1(VAR_6->fs),
        (uint64_t)FUNC_1(VAR_2));
   VAR_5++ ;
   FUNC_2( VAR_6, VAR_7 );

   VAR_7->next = (user32_addr_t)0 ;
   VAR_7->head = VAR_7->tail = (user32_addr_t)0 ;
   VAR_7->fs = (user32_addr_t)0 ;
  }
    if (VAR_5 != VAR_2->rq_elements)
  FUNC_3("dummynet: ++ wrong count, have %d should be %d\n",
      VAR_5, VAR_2->rq_elements);
    return (char *)VAR_7 ;
}
