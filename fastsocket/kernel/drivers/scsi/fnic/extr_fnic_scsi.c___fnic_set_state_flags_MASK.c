
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fnic {unsigned long state_flags; TYPE_1__* lport; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

void
FUNC_3(struct fnic *VAR_0, unsigned long VAR_1,
   unsigned long VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_0->lport->host;
 int VAR_4 = FUNC_0(VAR_3->host_lock);
 unsigned long VAR_5 = 0;

 if (!VAR_4)
  FUNC_1(VAR_3->host_lock, VAR_5);

 if (VAR_2)
  VAR_0->state_flags &= ~VAR_1;
 else
  VAR_0->state_flags |= VAR_1;

 if (!VAR_4)
  FUNC_2(VAR_3->host_lock, VAR_5);

 return;
}
