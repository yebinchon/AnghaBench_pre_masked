
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct megasas_instance {TYPE_1__* reg_set; TYPE_2__* pdev; } ;
struct TYPE_4__ {scalar_t__ device; } ;
struct TYPE_3__ {int inbound_doorbell; int doorbell; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct megasas_instance *VAR_6)
{
 if ((VAR_6->pdev->device == VAR_5) ||
     (VAR_6->pdev->device == VAR_4) ||
     (VAR_6->pdev->device == VAR_2) ||
     (VAR_6->pdev->device == VAR_3) ||
     (VAR_6->pdev->device == VAR_1)) {
  FUNC_0(VAR_0, &VAR_6->reg_set->doorbell);
 } else {
  FUNC_0(VAR_0, &VAR_6->reg_set->inbound_doorbell);
 }
}
