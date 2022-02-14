
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ type; int allow_restart; int queue_depth; scalar_t__ tagged_supported; struct Scsi_Host* host; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct scsi_device*,int ) ;
 int FUNC_1 (struct scsi_device*,int ) ;
 int FUNC_2 (struct scsi_device*,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct scsi_device *VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_2->host;
 unsigned long VAR_4 = 0;

 FUNC_3(VAR_3->host_lock, VAR_4);
 if (VAR_2->type == VAR_1)
  VAR_2->allow_restart = 1;

 if (VAR_2->tagged_supported) {
  FUNC_2(VAR_2, VAR_0);
  FUNC_0(VAR_2, VAR_2->queue_depth);
 } else
  FUNC_1(VAR_2, VAR_2->queue_depth);
 FUNC_4(VAR_3->host_lock, VAR_4);
 return 0;
}
