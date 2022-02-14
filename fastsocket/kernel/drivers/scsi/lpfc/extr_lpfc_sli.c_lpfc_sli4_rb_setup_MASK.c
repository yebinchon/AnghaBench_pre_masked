
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_hba {int hbq_in_use; int hbq_count; TYPE_1__* hbqs; } ;
struct TYPE_4__ {int entry_count; } ;
struct TYPE_3__ {int entry_count; } ;


 TYPE_2__** VAR_0 ;
 int FUNC_0 (struct lpfc_hba*,int ) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_hba *VAR_1)
{
 VAR_1->hbq_in_use = 1;
 VAR_1->hbqs[0].entry_count = VAR_0[0]->entry_count;
 VAR_1->hbq_count = 1;

 FUNC_0(VAR_1, 0);
 return 0;
}
