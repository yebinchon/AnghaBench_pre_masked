
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int sdev_target; TYPE_1__* host; } ;
struct ahc_softc {int dummy; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct scsi_device*,char*) ;
 int FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct scsi_device *VAR_2)
{
 struct ahc_softc *VAR_3;

 VAR_3 = *((struct ahc_softc **)VAR_2->host->hostdata);

 if (VAR_1)
  FUNC_1(VAR_0, VAR_2, "Slave Configure\n");

 FUNC_0(VAR_2);


 if (!FUNC_3(VAR_2->sdev_target))
  FUNC_2(VAR_2);

 return 0;
}
