
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qla_hw_data {scalar_t__ dpc_active; int pdev; } ;
struct TYPE_5__ {scalar_t__ online; } ;
struct TYPE_6__ {TYPE_1__ flags; int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

int
FUNC_4(scsi_qla_host_t *VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;
 struct qla_hw_data *VAR_11 = VAR_8->hw;
 scsi_qla_host_t *VAR_12 = FUNC_1(VAR_11->pdev);

 VAR_10 = VAR_7 + (VAR_4 * VAR_1);
 while (((FUNC_2(VAR_2, &VAR_12->dpc_flags)) ||
     FUNC_2(VAR_0, &VAR_12->dpc_flags) ||
     FUNC_2(VAR_3, &VAR_12->dpc_flags) ||
     VAR_11->dpc_active) && FUNC_3(VAR_7, VAR_10)) {

  FUNC_0(1000);
 }
 if (VAR_12->flags.online)
  VAR_9 = VAR_6;
 else
  VAR_9 = VAR_5;

 return (VAR_9);
}
