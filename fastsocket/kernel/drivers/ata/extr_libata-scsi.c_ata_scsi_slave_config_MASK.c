
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int host; } ;
struct ata_port {int dummy; } ;
struct ata_device {int dummy; } ;


 struct ata_device* FUNC_0 (struct ata_port*,struct scsi_device*) ;
 int FUNC_1 (struct scsi_device*,struct ata_device*) ;
 int FUNC_2 (struct scsi_device*) ;
 struct ata_port* FUNC_3 (int ) ;

int FUNC_4(struct scsi_device *VAR_0)
{
 struct ata_port *VAR_1 = FUNC_3(VAR_0->host);
 struct ata_device *VAR_2 = FUNC_0(VAR_1, VAR_0);
 int VAR_3 = 0;

 FUNC_2(VAR_0);

 if (VAR_2)
  VAR_3 = FUNC_1(VAR_0, VAR_2);

 return VAR_3;
}
