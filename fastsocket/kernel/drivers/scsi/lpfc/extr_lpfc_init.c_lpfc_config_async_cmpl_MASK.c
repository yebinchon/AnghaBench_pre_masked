
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_hba {int temp_sensor_support; int mbox_mem_pool; } ;
struct TYPE_6__ {scalar_t__ mbxStatus; } ;
struct TYPE_7__ {TYPE_1__ mb; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba * VAR_1, LPFC_MBOXQ_t * VAR_2)
{
 if (VAR_2->u.mb.mbxStatus == VAR_0)
  VAR_1->temp_sensor_support = 1;
 else
  VAR_1->temp_sensor_support = 0;
 FUNC_0(VAR_2, VAR_1->mbox_mem_pool);
 return;
}
