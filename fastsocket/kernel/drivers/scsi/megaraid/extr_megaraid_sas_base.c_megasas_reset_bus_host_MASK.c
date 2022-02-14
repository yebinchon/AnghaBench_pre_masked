
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct megasas_instance {TYPE_2__* pdev; } ;
struct TYPE_6__ {scalar_t__ hostdata; } ;
struct TYPE_5__ {scalar_t__ device; } ;
struct TYPE_4__ {TYPE_3__* host; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_3)
{
 int VAR_4;
 struct megasas_instance *VAR_5;
 VAR_5 = (struct megasas_instance *)VAR_3->device->host->hostdata;




 if ((VAR_5->pdev->device == VAR_1) ||
     (VAR_5->pdev->device == VAR_2) ||
     (VAR_5->pdev->device == VAR_0))
  VAR_4 = FUNC_1(VAR_3->device->host);
 else
  VAR_4 = FUNC_0(VAR_3);

 return VAR_4;
}
