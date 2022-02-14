
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct lpfc_hba {scalar_t__ sli_rev; } ;
struct TYPE_2__ {int add_count; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,size_t,int ) ;

int
FUNC_1(struct lpfc_hba *VAR_2, uint32_t VAR_3)
{
 if (VAR_2->sli_rev == VAR_0)
  return 0;
 else
  return FUNC_0(VAR_2, VAR_3,
      VAR_1[VAR_3]->add_count);
}
