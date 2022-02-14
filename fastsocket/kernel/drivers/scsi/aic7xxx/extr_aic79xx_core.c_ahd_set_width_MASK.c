
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {int dummy; } ;
struct TYPE_6__ {int width; } ;
struct TYPE_5__ {int width; } ;
struct TYPE_4__ {int width; } ;
struct ahd_initiator_tinfo {TYPE_3__ curr; TYPE_2__ goal; TYPE_1__ user; } ;
struct ahd_devinfo {int target; int channel; int our_scsiid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ahd_initiator_tinfo* FUNC_0 (struct ahd_softc*,int ,int ,int,struct ahd_tmode_tstate**) ;
 char* FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*,int ,int,int ,int ) ;
 int FUNC_4 (struct ahd_softc*) ;
 scalar_t__ FUNC_5 (struct ahd_softc*,struct ahd_devinfo*,struct ahd_tmode_tstate*,struct ahd_initiator_tinfo*,int ) ;
 int FUNC_6 (struct ahd_softc*,struct ahd_devinfo*,TYPE_3__*) ;
 int FUNC_7 (struct ahd_softc*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (char*,char*,int,int) ;

void
FUNC_9(struct ahd_softc *VAR_8, struct ahd_devinfo *VAR_9,
       u_int VAR_10, u_int VAR_11, int VAR_12)
{
 struct ahd_initiator_tinfo *VAR_13;
 struct ahd_tmode_tstate *VAR_14;
 u_int VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_16 = (VAR_11 & VAR_2) == VAR_2;
 VAR_17 = 0;
 VAR_13 = FUNC_0(VAR_8, VAR_9->channel, VAR_9->our_scsiid,
        VAR_9->target, &VAR_14);

 if ((VAR_11 & VAR_5) != 0)
  VAR_13->user.width = VAR_10;

 if ((VAR_11 & VAR_4) != 0)
  VAR_13->goal.width = VAR_10;

 VAR_15 = VAR_13->curr.width;
 if ((VAR_11 & VAR_3) != 0 && VAR_15 != VAR_10) {

  VAR_17++;

  VAR_13->curr.width = VAR_10;
  FUNC_3(VAR_8, VAR_9->channel, VAR_9->target,
          VAR_6, VAR_0);
  if (VAR_7) {
   FUNC_8("%s: target %d using %dbit transfers\n",
          FUNC_1(VAR_8), VAR_9->target,
          8 * (0x01 << VAR_10));
  }
 }

 if ((VAR_11 & VAR_3) != 0) {
  if (!VAR_12)
   FUNC_2(VAR_8);
  FUNC_6(VAR_8, VAR_9, &VAR_13->curr);
  if (!VAR_12)
   FUNC_4(VAR_8);
 }

 VAR_17 += FUNC_5(VAR_8, VAR_9, VAR_14,
      VAR_13, VAR_1);
 if (VAR_17 && VAR_16)
  FUNC_7(VAR_8);

}
