
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct lpfc_mbx_sge {int length; int pa_hi; int pa_lo; } ;
struct lpfc_mbx_nembed_cmd {TYPE_4__* sge; } ;
struct TYPE_5__ {int nembed_cmd; } ;
struct TYPE_6__ {TYPE_1__ un; } ;
struct TYPE_7__ {TYPE_2__ mqe; } ;
struct lpfcMboxq {TYPE_3__ u; } ;
struct TYPE_8__ {int length; int pa_hi; int pa_lo; } ;



void
FUNC_0(struct lpfcMboxq *VAR_0, uint32_t VAR_1,
        struct lpfc_mbx_sge *VAR_2)
{
 struct lpfc_mbx_nembed_cmd *VAR_3;

 VAR_3 = (struct lpfc_mbx_nembed_cmd *)
    &VAR_0->u.mqe.un.nembed_cmd;
 VAR_2->pa_lo = VAR_3->sge[VAR_1].pa_lo;
 VAR_2->pa_hi = VAR_3->sge[VAR_1].pa_hi;
 VAR_2->length = VAR_3->sge[VAR_1].length;
}
