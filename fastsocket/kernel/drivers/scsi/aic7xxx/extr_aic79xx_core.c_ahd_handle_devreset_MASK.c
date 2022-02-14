
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ahd_tmode_tstate {struct ahd_tmode_lstate** enabled_luns; } ;
struct ahd_tmode_lstate {int dummy; } ;
struct ahd_softc {struct ahd_tmode_tstate** enabled_targets; } ;
struct ahd_devinfo {int target; int channel; size_t our_scsiid; int role; } ;
typedef scalar_t__ cam_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ahd_softc*,int,int,scalar_t__,int ,int ,scalar_t__) ;
 char* FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,struct ahd_tmode_lstate*,size_t,int ,int ) ;
 int FUNC_3 (struct ahd_softc*,int,int,scalar_t__,int ) ;
 int FUNC_4 (struct ahd_softc*,struct ahd_tmode_lstate*) ;
 int FUNC_5 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (char*,char*,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_8(struct ahd_softc *VAR_10, struct ahd_devinfo *VAR_11,
      u_int VAR_12, cam_status VAR_13, char *VAR_14,
      int VAR_15)
{



 int VAR_16;

 VAR_16 = FUNC_0(VAR_10, VAR_11->target, VAR_11->channel,
          VAR_12, VAR_7, VAR_11->role,
          VAR_13);
 FUNC_6(VAR_10, VAR_11, VAR_6,
        VAR_2, VAR_8);
 FUNC_5(VAR_10, VAR_11, 0, 0,
                   0, VAR_2,
              VAR_8);

 if (VAR_13 != VAR_4)
  FUNC_3(VAR_10, VAR_11->channel, VAR_11->target,
          VAR_3, VAR_0);

 if (VAR_14 != ((void*)0) && VAR_9)
  FUNC_7("%s: %s on %c:%d. %d SCBs aborted\n", FUNC_1(VAR_10),
         VAR_14, VAR_11->channel, VAR_11->target, VAR_16);
}
