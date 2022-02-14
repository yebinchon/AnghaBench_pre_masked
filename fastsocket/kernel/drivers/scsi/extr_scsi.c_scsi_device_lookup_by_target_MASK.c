
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct TYPE_2__ {int parent; } ;
struct scsi_target {TYPE_1__ dev; } ;
struct scsi_device {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 struct scsi_device* FUNC_0 (struct scsi_target*,int ) ;
 struct Scsi_Host* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

struct scsi_device *FUNC_5(struct scsi_target *VAR_0,
       uint VAR_1)
{
 struct scsi_device *VAR_2;
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_0->dev.parent);
 unsigned long VAR_4;

 FUNC_3(VAR_3->host_lock, VAR_4);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 && FUNC_2(VAR_2))
  VAR_2 = ((void*)0);
 FUNC_4(VAR_3->host_lock, VAR_4);

 return VAR_2;
}
