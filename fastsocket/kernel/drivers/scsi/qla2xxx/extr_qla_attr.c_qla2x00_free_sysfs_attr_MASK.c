
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sysfs_entry {int is4GBp_only; int attr; scalar_t__ name; } ;
struct qla_hw_data {int beacon_blink_led; TYPE_2__* isp_ops; } ;
struct TYPE_6__ {int kobj; } ;
struct Scsi_Host {TYPE_1__ shost_gendev; } ;
struct TYPE_8__ {struct qla_hw_data* hw; struct Scsi_Host* host; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_7__ {int (* beacon_off ) (TYPE_3__*) ;} ;


 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 struct sysfs_entry* VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(scsi_qla_host_t *VAR_1)
{
 struct Scsi_Host *VAR_2 = VAR_1->host;
 struct sysfs_entry *VAR_3;
 struct qla_hw_data *VAR_4 = VAR_1->hw;

 for (VAR_3 = VAR_0; VAR_3->name; VAR_3++) {
  if (VAR_3->is4GBp_only && !FUNC_1(VAR_4))
   continue;
  if (VAR_3->is4GBp_only == 2 && !FUNC_2(VAR_4))
   continue;
  if (VAR_3->is4GBp_only == 3 && !(FUNC_0(VAR_1->hw)))
   continue;

  FUNC_4(&VAR_2->shost_gendev.kobj,
      VAR_3->attr);
 }

 if (VAR_4->beacon_blink_led == 1)
  VAR_4->isp_ops->beacon_off(VAR_1);
}
