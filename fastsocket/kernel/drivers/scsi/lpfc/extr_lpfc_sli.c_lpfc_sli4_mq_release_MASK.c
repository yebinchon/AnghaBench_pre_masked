
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_queue {int hba_index; int entry_count; TYPE_1__* phba; } ;
struct TYPE_2__ {int * mbox; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct lpfc_queue *VAR_0)
{

 if (FUNC_0(!VAR_0))
  return 0;


 VAR_0->phba->mbox = ((void*)0);
 VAR_0->hba_index = ((VAR_0->hba_index + 1) % VAR_0->entry_count);
 return 1;
}
