
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {int capacity; struct scsi_device* device; } ;
struct scsi_device {struct Scsi_Host* host; } ;
struct hd_geometry {int heads; int sectors; int cylinders; } ;
struct block_device {int bd_disk; } ;
struct Scsi_Host {TYPE_1__* hostt; } ;
struct TYPE_2__ {int (* bios_param ) (struct scsi_device*,struct block_device*,int,int*) ;} ;


 struct scsi_disk* FUNC_0 (int ) ;
 int FUNC_1 (struct block_device*,int,int*) ;
 int FUNC_2 (struct scsi_device*,struct block_device*,int,int*) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_0, struct hd_geometry *VAR_1)
{
 struct scsi_disk *VAR_2 = FUNC_0(VAR_0->bd_disk);
 struct scsi_device *VAR_3 = VAR_2->device;
 struct Scsi_Host *VAR_4 = VAR_3->host;
 int VAR_5[4];


        VAR_5[0] = 0x40;
        VAR_5[1] = 0x20;
        VAR_5[2] = VAR_2->capacity >> 11;


 if (VAR_4->hostt->bios_param)
  VAR_4->hostt->bios_param(VAR_3, VAR_0, VAR_2->capacity, VAR_5);
 else
  FUNC_1(VAR_0, VAR_2->capacity, VAR_5);

 VAR_1->heads = VAR_5[0];
 VAR_1->sectors = VAR_5[1];
 VAR_1->cylinders = VAR_5[2];
 return 0;
}
