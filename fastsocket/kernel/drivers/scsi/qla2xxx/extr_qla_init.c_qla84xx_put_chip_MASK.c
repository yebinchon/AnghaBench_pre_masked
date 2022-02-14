
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {TYPE_1__* cs84xx; } ;
struct TYPE_2__ {int kref; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct scsi_qla_host *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_1->hw;
 if (VAR_2->cs84xx)
  FUNC_0(&VAR_2->cs84xx->kref, VAR_0);
}
