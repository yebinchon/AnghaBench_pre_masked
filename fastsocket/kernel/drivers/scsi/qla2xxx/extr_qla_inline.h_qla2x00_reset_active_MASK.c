
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dpc_flags; TYPE_1__* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_5__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static inline int
FUNC_2(scsi_qla_host_t *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_0(VAR_3->hw->pdev);


 return FUNC_1(VAR_1, &VAR_4->dpc_flags) ||
     FUNC_1(VAR_0, &VAR_4->dpc_flags) ||
     FUNC_1(VAR_2, &VAR_4->dpc_flags) ||
     FUNC_1(VAR_1, &VAR_3->dpc_flags) ||
     FUNC_1(VAR_0, &VAR_3->dpc_flags);
}
