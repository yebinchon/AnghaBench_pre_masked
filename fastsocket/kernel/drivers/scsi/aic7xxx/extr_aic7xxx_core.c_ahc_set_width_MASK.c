
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct ahc_tmode_tstate {int dummy; } ;
struct ahc_softc {int dummy; } ;
struct TYPE_6__ {int width; } ;
struct TYPE_5__ {int width; } ;
struct TYPE_4__ {int width; } ;
struct ahc_initiator_tinfo {int scsirate; TYPE_3__ curr; TYPE_2__ goal; TYPE_1__ user; } ;
struct ahc_devinfo {int target; int channel; int our_scsiid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ahc_initiator_tinfo* FUNC_0 (struct ahc_softc*,int ,int ,int,struct ahc_tmode_tstate**) ;
 char* FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,int ,int) ;
 int FUNC_3 (struct ahc_softc*,int ,int,int ,int ) ;
 scalar_t__ FUNC_4 (struct ahc_softc*,struct ahc_devinfo*,struct ahc_tmode_tstate*,struct ahc_initiator_tinfo*,int ) ;
 int FUNC_5 (struct ahc_softc*) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (char*,char*,int,int) ;

void
FUNC_7(struct ahc_softc *VAR_11, struct ahc_devinfo *VAR_12,
       u_int VAR_13, u_int VAR_14, int VAR_15)
{
 struct ahc_initiator_tinfo *VAR_16;
 struct ahc_tmode_tstate *VAR_17;
 u_int VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_19 = (VAR_14 & VAR_2) == VAR_2;
 VAR_20 = 0;
 VAR_16 = FUNC_0(VAR_11, VAR_12->channel, VAR_12->our_scsiid,
        VAR_12->target, &VAR_17);

 if ((VAR_14 & VAR_5) != 0)
  VAR_16->user.width = VAR_13;

 if ((VAR_14 & VAR_4) != 0)
  VAR_16->goal.width = VAR_13;

 VAR_18 = VAR_16->curr.width;
 if ((VAR_14 & VAR_3) != 0 && VAR_18 != VAR_13) {
  u_int VAR_21;

  VAR_20++;
  VAR_21 = VAR_16->scsirate;
  VAR_21 &= ~VAR_9;
  if (VAR_13 == VAR_7)
   VAR_21 |= VAR_9;

  VAR_16->scsirate = VAR_21;

  if (VAR_19)
   FUNC_2(VAR_11, VAR_8, VAR_21);

  VAR_16->curr.width = VAR_13;

  FUNC_3(VAR_11, VAR_12->channel, VAR_12->target,
          VAR_6, VAR_0);
  if (VAR_10) {
   FUNC_6("%s: target %d using %dbit transfers\n",
          FUNC_1(VAR_11), VAR_12->target,
          8 * (0x01 << VAR_13));
  }
 }

 VAR_20 += FUNC_4(VAR_11, VAR_12, VAR_17,
      VAR_16, VAR_1);
 if (VAR_20)
  FUNC_5(VAR_11);
}
