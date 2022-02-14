
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;int result; TYPE_2__* device; } ;
struct ahd_softc {int dummy; } ;
struct ahd_linux_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahd_softc*,struct ahd_linux_device*,struct scsi_cmnd*) ;
 struct ahd_linux_device* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(struct scsi_cmnd * VAR_2, void (*VAR_3) (struct scsi_cmnd *))
{
 struct ahd_softc *VAR_4;
 struct ahd_linux_device *VAR_5 = FUNC_1(VAR_2->device);
 int VAR_6 = VAR_1;

 VAR_4 = *(struct ahd_softc **)VAR_2->device->host->hostdata;

 VAR_2->scsi_done = VAR_3;
 VAR_2->result = VAR_0 << 16;
 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_2);

 return VAR_6;
}
