
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtio_scsi_event {unsigned int* lun; int reason; } ;
struct virtio_scsi {int vdev; } ;
struct scsi_device {int sdev_gendev; } ;
struct Scsi_Host {int host_no; } ;


 int FUNC_0 (char*,int ,unsigned int,unsigned int) ;
 struct scsi_device* FUNC_1 (struct Scsi_Host*,int ,unsigned int,unsigned int) ;
 int FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (int *) ;
 struct Scsi_Host* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct virtio_scsi *VAR_0,
      struct virtio_scsi_event *VAR_1)
{
 struct scsi_device *VAR_2;
 struct Scsi_Host *VAR_3 = FUNC_4(VAR_0->vdev);
 unsigned int VAR_4 = VAR_1->lun[1];
 unsigned int VAR_5 = (VAR_1->lun[2] << 8) | VAR_1->lun[3];
 u8 VAR_6 = VAR_1->reason & 255;
 u8 VAR_7 = VAR_1->reason >> 8;

 VAR_2 = FUNC_1(VAR_3, 0, VAR_4, VAR_5);
 if (!VAR_2) {
  FUNC_0("SCSI device %d 0 %d %d not found\n",
   VAR_3->host_no, VAR_4, VAR_5);
  return;
 }



 if (VAR_6 == 0x2a && (VAR_7 == 0x00 || VAR_7 == 0x01 || VAR_7 == 0x09))
  FUNC_3(&VAR_2->sdev_gendev);

 FUNC_2(VAR_2);
}
