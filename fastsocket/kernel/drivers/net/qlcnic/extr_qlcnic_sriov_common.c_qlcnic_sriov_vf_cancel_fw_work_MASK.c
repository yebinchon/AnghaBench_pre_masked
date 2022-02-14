
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {int fw_work; int state; TYPE_2__* ahw; } ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ idc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct qlcnic_adapter *VAR_2)
{
 while (FUNC_3(VAR_1, &VAR_2->state))
  FUNC_2(20);

 FUNC_1(VAR_0, &VAR_2->ahw->idc.status);
 FUNC_1(VAR_1, &VAR_2->state);
 FUNC_0(&VAR_2->fw_work);
}
