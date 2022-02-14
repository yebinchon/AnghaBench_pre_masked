
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ahc_tmode_tstate {struct ahc_tmode_lstate** enabled_luns; } ;
struct ahc_tmode_lstate {int dummy; } ;
struct ahc_softc {struct ahc_tmode_tstate** enabled_targets; } ;
struct ahc_devinfo {int target; int channel; size_t our_scsiid; int role; } ;
typedef scalar_t__ cam_status ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ahc_softc*,int,int,int ,int ,int ,scalar_t__) ;
 char* FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,struct ahc_tmode_lstate*,size_t,int ,int ) ;
 int FUNC_3 (struct ahc_softc*,int,int,int ,int ) ;
 int FUNC_4 (struct ahc_softc*,struct ahc_tmode_lstate*) ;
 int FUNC_5 (struct ahc_softc*,struct ahc_devinfo*,int *,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct ahc_softc*,struct ahc_devinfo*,int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_7 (char*,char*,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_8(struct ahc_softc *VAR_10, struct ahc_devinfo *VAR_11,
      cam_status VAR_12, char *VAR_13, int VAR_14)
{




 int VAR_15;

 VAR_15 = FUNC_0(VAR_10, VAR_11->target, VAR_11->channel,
          VAR_3, VAR_7, VAR_11->role,
          VAR_12);
 FUNC_6(VAR_10, VAR_11, VAR_6,
        VAR_2, VAR_8);
 FUNC_5(VAR_10, VAR_11, ((void*)0),
              0, 0, 0,
    VAR_2, VAR_8);

 if (VAR_12 != VAR_4)
  FUNC_3(VAR_10, VAR_11->channel, VAR_11->target,
          VAR_3, VAR_0);

 if (VAR_13 != ((void*)0)
  && (VAR_14 <= VAR_9))
  FUNC_7("%s: %s on %c:%d. %d SCBs aborted\n", FUNC_1(VAR_10),
         VAR_13, VAR_11->channel, VAR_11->target, VAR_15);
}
