
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct Scsi_Host* host; } ;
struct scsi_cmnd {int result; struct scsi_device* device; } ;
struct ata_port {int lock; } ;
struct ata_device {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,void (*) (struct scsi_cmnd*),struct ata_device*) ;
 int FUNC_1 (struct ata_port*,struct scsi_cmnd*) ;
 struct ata_device* FUNC_2 (struct ata_port*,struct scsi_device*) ;
 struct ata_port* FUNC_3 (struct Scsi_Host*) ;
 scalar_t__ FUNC_4 (struct ata_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct scsi_cmnd *VAR_1, void (*VAR_2)(struct scsi_cmnd *))
{
 struct ata_port *VAR_3;
 struct ata_device *VAR_4;
 struct scsi_device *VAR_5 = VAR_1->device;
 struct Scsi_Host *VAR_6 = VAR_5->host;
 int VAR_7 = 0;

 VAR_3 = FUNC_3(VAR_6);

 FUNC_6(VAR_6->host_lock);
 FUNC_5(VAR_3->lock);

 FUNC_1(VAR_3, VAR_1);

 VAR_4 = FUNC_2(VAR_3, VAR_5);
 if (FUNC_4(VAR_4))
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_4);
 else {
  VAR_1->result = (VAR_0 << 16);
  VAR_2(VAR_1);
 }

 FUNC_6(VAR_3->lock);
 FUNC_5(VAR_6->host_lock);
 return VAR_7;
}
