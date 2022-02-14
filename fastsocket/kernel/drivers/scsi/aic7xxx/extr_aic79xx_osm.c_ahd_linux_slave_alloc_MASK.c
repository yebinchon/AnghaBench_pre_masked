
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int id; TYPE_1__* host; } ;
struct ahd_softc {int dummy; } ;
struct ahd_linux_device {int openings; scalar_t__ maxtags; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 char* FUNC_0 (struct ahd_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ahd_linux_device*,int ,int) ;
 int FUNC_2 (char*,char*,int) ;
 struct ahd_linux_device* FUNC_3 (struct scsi_device*) ;

__attribute__((used)) static int
FUNC_4(struct scsi_device *VAR_1)
{
 struct ahd_softc *VAR_2 =
  *((struct ahd_softc **)VAR_1->host->hostdata);
 struct ahd_linux_device *VAR_3;

 if (VAR_0)
  FUNC_2("%s: Slave Alloc %d\n", FUNC_0(VAR_2), VAR_1->id);

 VAR_3 = FUNC_3(VAR_1);
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));





 VAR_3->openings = 1;






 VAR_3->maxtags = 0;

 return (0);
}
