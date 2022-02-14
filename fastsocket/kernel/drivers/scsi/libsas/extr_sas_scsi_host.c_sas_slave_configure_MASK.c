
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_device {int allow_restart; scalar_t__ tagged_supported; int lun; } ;
struct sas_ha_struct {int dummy; } ;
struct TYPE_6__ {int ap; } ;
struct domain_device {int sas_addr; TYPE_3__* port; TYPE_2__ sata_dev; TYPE_1__* rphy; } ;
struct TYPE_8__ {scalar_t__ device_type; } ;
struct TYPE_7__ {struct sas_ha_struct* ha; } ;
struct TYPE_5__ {TYPE_4__ identify; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct scsi_device*,int ) ;
 scalar_t__ FUNC_4 (struct domain_device*) ;
 int FUNC_5 (struct scsi_device*) ;
 int FUNC_6 (struct scsi_device*,int ) ;
 int FUNC_7 (struct scsi_device*,int) ;
 int FUNC_8 (struct scsi_device*,int ) ;
 struct domain_device* FUNC_9 (struct scsi_device*) ;

int FUNC_10(struct scsi_device *VAR_3)
{
 struct domain_device *VAR_4 = FUNC_9(VAR_3);
 struct sas_ha_struct *VAR_5;

 FUNC_0(VAR_4->rphy->identify.device_type != VAR_2);

 if (FUNC_4(VAR_4)) {
  FUNC_3(VAR_3, VAR_4->sata_dev.ap);
  return 0;
 }

 VAR_5 = VAR_4->port->ha;

 FUNC_5(VAR_3);

 if (VAR_3->tagged_supported) {
  FUNC_8(VAR_3, VAR_0);
  FUNC_6(VAR_3, VAR_1);
 } else {
  FUNC_2("device %llx, LUN %x doesn't support "
       "TCQ\n", FUNC_1(VAR_4->sas_addr),
       VAR_3->lun);
  VAR_3->tagged_supported = 0;
  FUNC_8(VAR_3, 0);
  FUNC_7(VAR_3, 1);
 }

 VAR_3->allow_restart = 1;

 return 0;
}
