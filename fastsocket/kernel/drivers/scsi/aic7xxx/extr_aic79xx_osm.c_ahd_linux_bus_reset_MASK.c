
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct ahd_softc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ahd_softc*,unsigned long*) ;
 char* FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,scalar_t__,int ) ;
 int FUNC_3 (struct ahd_softc*,unsigned long*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,char*,...) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_6(struct scsi_cmnd *VAR_5)
{
 struct ahd_softc *VAR_6;
 int VAR_7;
 unsigned long VAR_8;

 VAR_6 = *(struct ahd_softc **)VAR_5->device->host->hostdata;





 FUNC_0(VAR_6, &VAR_8);

 VAR_7 = FUNC_2(VAR_6, FUNC_5(VAR_5) + 'A',
                        VAR_2);
 FUNC_3(VAR_6, &VAR_8);

 if (VAR_4)
  FUNC_4("%s: SCSI bus reset delivered. "
         "%d SCBs aborted.\n", FUNC_1(VAR_6), VAR_7);

 return (VAR_1);
}
