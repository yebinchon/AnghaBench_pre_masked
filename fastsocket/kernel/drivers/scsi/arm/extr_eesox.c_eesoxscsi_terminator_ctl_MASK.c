
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eesoxscsi_info {int ctl_port; int control; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct Scsi_Host *VAR_1, int VAR_2)
{
 struct eesoxscsi_info *VAR_3 = (struct eesoxscsi_info *)VAR_1->hostdata;
 unsigned long VAR_4;

 FUNC_0(VAR_1->host_lock, VAR_4);
 if (VAR_2)
  VAR_3->control |= VAR_0;
 else
  VAR_3->control &= ~VAR_0;

 FUNC_2(VAR_3->control, VAR_3->ctl_port);
 FUNC_1(VAR_1->host_lock, VAR_4);
}
