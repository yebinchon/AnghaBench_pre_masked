
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int xri_bitmap; } ;
struct lpfc_nodelist {TYPE_1__ active_rrqs; } ;
struct lpfc_hba {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

int
FUNC_1(struct lpfc_hba *VAR_0, struct lpfc_nodelist *VAR_1,
   uint16_t VAR_2)
{
 if (!VAR_1)
  return 0;
 if (FUNC_0(VAR_2, VAR_1->active_rrqs.xri_bitmap))
   return 1;
 else
  return 0;
}
