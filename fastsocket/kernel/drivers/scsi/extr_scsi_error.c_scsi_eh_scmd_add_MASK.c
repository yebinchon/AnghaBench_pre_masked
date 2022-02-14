
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int eh_eflags; int eh_entry; TYPE_1__* device; } ;
struct Scsi_Host {int host_lock; int host_failed; int eh_cmd_q; scalar_t__ last_reset; scalar_t__ eh_deadline; int ehandler; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct Scsi_Host*) ;
 scalar_t__ FUNC_2 (struct Scsi_Host*,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

int FUNC_5(struct scsi_cmnd *VAR_3, int VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_3->device->host;
 unsigned long VAR_6;
 int VAR_7 = 0;

 if (!VAR_5->ehandler)
  return 0;

 FUNC_3(VAR_5->host_lock, VAR_6);
 if (FUNC_2(VAR_5, VAR_1))
  if (FUNC_2(VAR_5, VAR_0))
   goto out_unlock;

 if (VAR_5->eh_deadline && !VAR_5->last_reset)
  VAR_5->last_reset = VAR_2;

 VAR_7 = 1;
 VAR_3->eh_eflags |= VAR_4;
 FUNC_0(&VAR_3->eh_entry, &VAR_5->eh_cmd_q);
 VAR_5->host_failed++;
 FUNC_1(VAR_5);
 out_unlock:
 FUNC_4(VAR_5->host_lock, VAR_6);
 return VAR_7;
}
