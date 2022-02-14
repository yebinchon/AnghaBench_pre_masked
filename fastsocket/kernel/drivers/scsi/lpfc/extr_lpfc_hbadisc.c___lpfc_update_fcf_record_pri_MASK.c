
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_3__ {struct lpfc_fcf_pri* fcf_pri; } ;
struct lpfc_hba {TYPE_1__ fcf; } ;
struct TYPE_4__ {size_t fcf_index; int priority; } ;
struct lpfc_fcf_pri {TYPE_2__ fcf_rec; } ;
struct fcf_record {int fip_priority; } ;



__attribute__((used)) static void
FUNC_0(struct lpfc_hba *VAR_0, uint16_t VAR_1,
     struct fcf_record *VAR_2
     )
{
 struct lpfc_fcf_pri *VAR_3;

 VAR_3 = &VAR_0->fcf.fcf_pri[VAR_1];
 VAR_3->fcf_rec.fcf_index = VAR_1;

 VAR_3->fcf_rec.priority = VAR_2->fip_priority;

}
