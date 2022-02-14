
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport {unsigned long dev_loss_tmo; scalar_t__ port_state; int roles; int fast_io_fail_tmo; int dev_loss_work; int fail_io_work; int dev; int flags; } ;
struct Scsi_Host {int active_mode; int host_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct Scsi_Host*,int *,unsigned long) ;
 int FUNC_1 (struct Scsi_Host*,unsigned long) ;
 struct Scsi_Host* FUNC_2 (struct fc_rport*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

void
FUNC_6(struct fc_rport *VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8 = VAR_6->dev_loss_tmo;
 unsigned long VAR_9;
 FUNC_4(VAR_7->host_lock, VAR_9);

 if (VAR_6->port_state != VAR_1) {
  FUNC_5(VAR_7->host_lock, VAR_9);
  return;
 }
 VAR_6->port_state = VAR_0;

 VAR_6->flags |= VAR_3;

 FUNC_5(VAR_7->host_lock, VAR_9);

 if (VAR_6->roles & VAR_2 &&
     VAR_7->active_mode & VAR_5)
  FUNC_1(VAR_7, (unsigned long)VAR_6);

 FUNC_3(&VAR_6->dev);


 if ((VAR_6->fast_io_fail_tmo != -1) &&
     (VAR_6->fast_io_fail_tmo < VAR_8))
  FUNC_0(VAR_7, &VAR_6->fail_io_work,
     VAR_6->fast_io_fail_tmo * VAR_4);


 FUNC_0(VAR_7, &VAR_6->dev_loss_work, VAR_8 * VAR_4);
}
