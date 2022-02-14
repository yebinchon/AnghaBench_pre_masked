
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_queue {size_t hba_index; int entry_count; int host_index; TYPE_1__* qe; } ;
struct lpfc_eqe {int dummy; } ;
struct TYPE_2__ {struct lpfc_eqe* eqe; } ;


 int FUNC_0 (int ,struct lpfc_eqe*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct lpfc_eqe *
FUNC_2(struct lpfc_queue *VAR_1)
{
 struct lpfc_eqe *VAR_2;
 uint32_t VAR_3;


 if (FUNC_1(!VAR_1))
  return ((void*)0);
 VAR_2 = VAR_1->qe[VAR_1->hba_index].eqe;


 if (!FUNC_0(VAR_0, VAR_2))
  return ((void*)0);

 VAR_3 = ((VAR_1->hba_index + 1) % VAR_1->entry_count);
 if (VAR_3 == VAR_1->host_index)
  return ((void*)0);

 VAR_1->hba_index = VAR_3;
 return VAR_2;
}
