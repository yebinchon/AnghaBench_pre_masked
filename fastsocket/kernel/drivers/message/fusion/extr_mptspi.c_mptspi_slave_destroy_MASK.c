
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_target {TYPE_1__* hostdata; } ;
struct scsi_device {TYPE_2__* hostdata; } ;
struct _CONFIG_PAGE_SCSI_DEVICE_1 {scalar_t__ Configuration; scalar_t__ Reserved; scalar_t__ RequestedParameters; } ;
struct TYPE_3__ {int num_luns; } ;
typedef TYPE_1__ VirtTarget ;
struct TYPE_4__ {scalar_t__ configured_lun; } ;
typedef TYPE_2__ VirtDevice ;


 int FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (struct scsi_target*,struct _CONFIG_PAGE_SCSI_DEVICE_1*) ;
 struct scsi_target* FUNC_2 (struct scsi_device*) ;

__attribute__((used)) static void FUNC_3(struct scsi_device *VAR_0)
{
 struct scsi_target *VAR_1 = FUNC_2(VAR_0);
 VirtTarget *VAR_2 = VAR_1->hostdata;
 VirtDevice *VAR_3 = VAR_0->hostdata;


 if (VAR_2->num_luns == 1 && VAR_3->configured_lun) {
  struct _CONFIG_PAGE_SCSI_DEVICE_1 VAR_4;


  VAR_4 = 0;
  VAR_4 = 0;
  VAR_4 = 0;

  FUNC_1(VAR_1, &VAR_4);
 }

 FUNC_0(VAR_0);
}
