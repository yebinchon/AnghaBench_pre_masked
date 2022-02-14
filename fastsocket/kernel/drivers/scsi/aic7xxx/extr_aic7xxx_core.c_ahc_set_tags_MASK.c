
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct ahc_softc {int dummy; } ;
struct ahc_devinfo {int lun; int target; int channel; } ;
typedef int ahc_queue_alg ;


 int VAR_0 ;
 int FUNC_0 (struct ahc_softc*,struct scsi_device*,struct ahc_devinfo*,int ) ;
 int FUNC_1 (struct ahc_softc*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ahc_softc *VAR_1, struct scsi_cmnd *VAR_2,
      struct ahc_devinfo *VAR_3, ahc_queue_alg VAR_4)
{
 struct scsi_device *VAR_5 = VAR_2->device;

  FUNC_0(VAR_1, VAR_5, VAR_3, VAR_4);
  FUNC_1(VAR_1, VAR_3->channel, VAR_3->target,
          VAR_3->lun, VAR_0);
}
