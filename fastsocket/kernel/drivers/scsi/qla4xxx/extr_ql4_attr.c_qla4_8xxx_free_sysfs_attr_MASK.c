
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysfs_entry {int attr; scalar_t__ name; } ;
struct scsi_qla_host {struct Scsi_Host* host; } ;
struct TYPE_2__ {int kobj; } ;
struct Scsi_Host {TYPE_1__ shost_gendev; } ;


 struct sysfs_entry* VAR_0 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(struct scsi_qla_host *VAR_1)
{
 struct Scsi_Host *VAR_2 = VAR_1->host;
 struct sysfs_entry *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->name; VAR_3++)
  FUNC_0(&VAR_2->shost_gendev.kobj,
          VAR_3->attr);
}
