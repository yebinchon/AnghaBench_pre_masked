
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct ahc_tmode_tstate {int dummy; } ;
struct ahc_syncrate {int dummy; } ;
struct ahc_softc {int features; } ;
struct TYPE_4__ {scalar_t__ period; scalar_t__ offset; scalar_t__ ppr_options; scalar_t__ width; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ offset; scalar_t__ period; } ;
struct ahc_initiator_tinfo {TYPE_2__ goal; TYPE_1__ curr; } ;
struct ahc_devinfo {int role; int target; int our_scsiid; int channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahc_softc*,struct ahc_devinfo*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ahc_softc*,struct ahc_devinfo*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ahc_softc*,struct ahc_devinfo*,scalar_t__) ;
 struct ahc_syncrate* FUNC_3 (struct ahc_softc*,struct ahc_initiator_tinfo*,scalar_t__*,scalar_t__*,int ) ;
 struct ahc_initiator_tinfo* FUNC_4 (struct ahc_softc*,int ,int ,int ,struct ahc_tmode_tstate**) ;
 int FUNC_5 (struct ahc_softc*,struct ahc_devinfo*) ;
 int FUNC_6 (struct ahc_softc*,struct ahc_initiator_tinfo*,struct ahc_syncrate const*,scalar_t__*,scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(struct ahc_softc *VAR_4, struct ahc_devinfo *VAR_5)
{





 struct ahc_initiator_tinfo *VAR_6;
 struct ahc_tmode_tstate *VAR_7;
 const struct ahc_syncrate *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 u_int VAR_12;
 u_int VAR_13;
 u_int VAR_14;

 VAR_6 = FUNC_4(VAR_4, VAR_5->channel, VAR_5->our_scsiid,
        VAR_5->target, &VAR_7);






 VAR_12 = VAR_6->goal.period;
 VAR_14 = VAR_6->goal.offset;
 VAR_13 = VAR_6->goal.ppr_options;

 if (VAR_5->role == VAR_2)
  VAR_13 = 0;
 VAR_8 = FUNC_3(VAR_4, VAR_6, &VAR_12,
           &VAR_13, VAR_5->role);
 VAR_9 = VAR_6->curr.width != VAR_6->goal.width;
 VAR_10 = VAR_6->curr.offset != VAR_14 || VAR_6->curr.period != VAR_12;





 VAR_11 = VAR_13 != 0;

 if (!VAR_9 && !VAR_10 && !VAR_11) {
  VAR_9 = VAR_6->goal.width != VAR_1;
  VAR_10 = VAR_6->goal.offset != 0;
 }

 if (!VAR_9 && !VAR_10 && !VAR_11) {




  if ((VAR_4->features & VAR_0) != 0)
   VAR_9 = 1;
  else
   VAR_10 = 1;

  if (VAR_3) {
   FUNC_5(VAR_4, VAR_5);
   FUNC_7("Ensuring async\n");
  }
 }


 if (VAR_5->role == VAR_2)
  VAR_11 = 0;
 if (VAR_11 || (VAR_10 && !VAR_9)) {

  VAR_14 = VAR_6->goal.offset;
  FUNC_6(VAR_4, VAR_6, VAR_8, &VAR_14,
        VAR_11 ? VAR_6->goal.width
       : VAR_6->curr.width,
        VAR_5->role);
  if (VAR_11) {
   FUNC_0(VAR_4, VAR_5, VAR_12, VAR_14,
       VAR_6->goal.width, VAR_13);
  } else {
   FUNC_1(VAR_4, VAR_5, VAR_12, VAR_14);
  }
 } else {
  FUNC_2(VAR_4, VAR_5, VAR_6->goal.width);
 }
}
