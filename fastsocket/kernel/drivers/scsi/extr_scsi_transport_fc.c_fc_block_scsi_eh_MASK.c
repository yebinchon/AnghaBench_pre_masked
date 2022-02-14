
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct fc_rport {scalar_t__ port_state; int flags; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct fc_rport* FUNC_4 (int ) ;

int FUNC_5(struct scsi_cmnd *VAR_3)
{
 struct Scsi_Host *VAR_4 = VAR_3->device->host;
 struct fc_rport *VAR_5 = FUNC_4(FUNC_1(VAR_3->device));
 unsigned long VAR_6;

 FUNC_2(VAR_4->host_lock, VAR_6);
 while (VAR_5->port_state == VAR_1 &&
        !(VAR_5->flags & VAR_2)) {
  FUNC_3(VAR_4->host_lock, VAR_6);
  FUNC_0(1000);
  FUNC_2(VAR_4->host_lock, VAR_6);
 }
 FUNC_3(VAR_4->host_lock, VAR_6);

 if (VAR_5->flags & VAR_2)
  return VAR_0;

 return 0;
}
