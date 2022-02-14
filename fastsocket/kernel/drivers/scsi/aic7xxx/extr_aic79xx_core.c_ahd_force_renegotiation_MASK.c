
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {int dummy; } ;
struct ahd_initiator_tinfo {int dummy; } ;
struct ahd_devinfo {int target; int our_scsiid; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ahd_initiator_tinfo* FUNC_0 (struct ahd_softc*,int ,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_1 (struct ahd_softc*,struct ahd_devinfo*) ;
 int FUNC_2 (struct ahd_softc*,struct ahd_devinfo*,struct ahd_tmode_tstate*,struct ahd_initiator_tinfo*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct ahd_softc *VAR_3, struct ahd_devinfo *VAR_4)
{
 struct ahd_initiator_tinfo *VAR_5;
 struct ahd_tmode_tstate *VAR_6;







 VAR_5 = FUNC_0(VAR_3,
     VAR_4->channel,
     VAR_4->our_scsiid,
     VAR_4->target,
     &VAR_6);
 FUNC_2(VAR_3, VAR_4, VAR_6,
          VAR_5, VAR_0);
}
