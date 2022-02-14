
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scb {TYPE_3__* hscb; } ;
struct ahd_softc {int dummy; } ;
struct TYPE_4__ {scalar_t__ scsi_status; } ;
struct TYPE_5__ {TYPE_1__ istatus; } ;
struct TYPE_6__ {TYPE_2__ shared_data; } ;


 int FUNC_0 (struct ahd_softc*,struct scb*) ;
 int FUNC_1 (struct ahd_softc*,struct scb*) ;
 int FUNC_2 (struct ahd_softc*,struct scb*) ;

__attribute__((used)) static void
FUNC_3(struct ahd_softc *VAR_0, struct scb *VAR_1)
{
 if (VAR_1->hscb->shared_data.istatus.scsi_status != 0) {
  FUNC_2(VAR_0, VAR_1);
 } else {
  FUNC_0(VAR_0, VAR_1);
  FUNC_1(VAR_0, VAR_1);
 }
}
