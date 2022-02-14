
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int tagged_supported; } ;
struct TYPE_2__ {int ap; } ;
struct domain_device {TYPE_1__ sata_dev; } ;


 int VAR_0 ;



 int FUNC_0 (int ,struct scsi_device*,int,int) ;
 scalar_t__ FUNC_1 (struct domain_device*) ;
 int FUNC_2 (struct scsi_device*,int ,int) ;
 int FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (struct scsi_device*,int) ;
 struct domain_device* FUNC_5 (struct scsi_device*) ;

int FUNC_6(struct scsi_device *VAR_1, int VAR_2, int VAR_3)
{
 struct domain_device *VAR_4 = FUNC_5(VAR_1);

 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_4->sata_dev.ap, VAR_1, VAR_2,
      VAR_3);

 switch (VAR_3) {
 case 130:
 case 128:
  if (!VAR_1->tagged_supported)
   VAR_2 = 1;
  FUNC_2(VAR_1, FUNC_3(VAR_1), VAR_2);
  break;
 case 129:
  FUNC_4(VAR_1, VAR_2);
  break;
 default:
  return -VAR_0;
 }

 return VAR_2;
}
