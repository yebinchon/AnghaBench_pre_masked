
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct lpfc_hbq_entry {int dummy; } ;
struct lpfc_hba {size_t* hbq_get; struct hbq_s* hbqs; int link_state; } ;
struct hbq_s {scalar_t__ next_hbqPutIdx; scalar_t__ hbqPutIdx; scalar_t__ entry_count; scalar_t__ local_hbqGetIdx; scalar_t__ hbq_virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (struct lpfc_hba*,int ,int,char*,size_t,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct lpfc_hbq_entry *
FUNC_3(struct lpfc_hba *VAR_4, uint32_t VAR_5)
{
 struct hbq_s *VAR_6 = &VAR_4->hbqs[VAR_5];

 if (VAR_6->next_hbqPutIdx == VAR_6->hbqPutIdx &&
     ++VAR_6->next_hbqPutIdx >= VAR_6->entry_count)
  VAR_6->next_hbqPutIdx = 0;

 if (FUNC_2(VAR_6->local_hbqGetIdx == VAR_6->next_hbqPutIdx)) {
  uint32_t VAR_7 = VAR_4->hbq_get[VAR_5];
  uint32_t VAR_8 = FUNC_0(VAR_7);

  VAR_6->local_hbqGetIdx = VAR_8;

  if (FUNC_2(VAR_6->local_hbqGetIdx >= VAR_6->entry_count)) {
   FUNC_1(VAR_4, VAR_0,
     VAR_1 | VAR_2,
     "1802 HBQ %d: local_hbqGetIdx "
     "%u is > than hbqp->entry_count %u\n",
     VAR_5, VAR_6->local_hbqGetIdx,
     VAR_6->entry_count);

   VAR_4->link_state = VAR_3;
   return ((void*)0);
  }

  if (VAR_6->local_hbqGetIdx == VAR_6->next_hbqPutIdx)
   return ((void*)0);
 }

 return (struct lpfc_hbq_entry *) VAR_4->hbqs[VAR_5].hbq_virt +
   VAR_6->hbqPutIdx;
}
