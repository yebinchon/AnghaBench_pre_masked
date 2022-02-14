
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; } ;
struct TYPE_2__ {int device; } ;
struct ata_port {TYPE_1__ link; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,void (*) (struct scsi_cmnd*),int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ata_port*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct scsi_cmnd *VAR_1, void (*VAR_2)(struct scsi_cmnd *),
       struct ata_port *VAR_3)
{
 int VAR_4 = 0;

 FUNC_2(VAR_3, VAR_1);

 if (FUNC_3(FUNC_1(VAR_3->link.device)))
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3->link.device);
 else {
  VAR_1->result = (VAR_0 << 16);
  VAR_2(VAR_1);
 }
 return VAR_4;
}
