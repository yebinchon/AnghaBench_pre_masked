
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {scalar_t__ sdev_state; TYPE_2__* host; int sdev_gendev; } ;
struct TYPE_4__ {TYPE_1__* hostt; } ;
struct TYPE_3__ {int module; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct scsi_device *VAR_2)
{
 if (VAR_2->sdev_state == VAR_1)
  return -VAR_0;
 if (!FUNC_0(&VAR_2->sdev_gendev))
  return -VAR_0;


 FUNC_1(VAR_2->host->hostt->module);

 return 0;
}
