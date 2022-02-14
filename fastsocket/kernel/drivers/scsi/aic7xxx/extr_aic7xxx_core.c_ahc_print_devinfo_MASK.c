
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int dummy; } ;
struct ahc_devinfo {int channel; int target; int lun; } ;


 char* FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (char*,char*,int,int,int) ;

void
FUNC_2(struct ahc_softc *VAR_0, struct ahc_devinfo *VAR_1)
{
 FUNC_1("%s:%c:%d:%d: ", FUNC_0(VAR_0), VAR_1->channel,
        VAR_1->target, VAR_1->lun);
}
