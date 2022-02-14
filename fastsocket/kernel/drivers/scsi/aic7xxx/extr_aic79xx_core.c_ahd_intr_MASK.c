
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int pause; int flags; int bugs; size_t cmdcmplt_bucket; int features; int (* bus_intr ) (struct ahd_softc*) ;int cmdcmplt_total; int * cmdcmplt_counts; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (struct ahd_softc*) ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*,int) ;
 int FUNC_4 (struct ahd_softc*,int) ;
 scalar_t__ FUNC_5 (struct ahd_softc*,int ) ;
 scalar_t__ FUNC_6 (struct ahd_softc*) ;
 int FUNC_7 (struct ahd_softc*,int ,int ) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*,int ) ;
 int FUNC_10 (struct ahd_softc*) ;

int
FUNC_11(struct ahd_softc *VAR_18)
{
 u_int VAR_19;

 if ((VAR_18->pause & VAR_9) == 0) {






  return (0);
 }







 if ((VAR_18->flags & VAR_0) == 0
  && (FUNC_0(VAR_18) != 0))
  VAR_19 = VAR_6;
 else
  VAR_19 = FUNC_5(VAR_18, VAR_10);

 if ((VAR_19 & VAR_11) == 0)
  return (0);

 if (VAR_19 & VAR_6) {
  FUNC_7(VAR_18, VAR_5, VAR_4);
  if ((VAR_18->bugs & VAR_1) != 0) {
   if (FUNC_6(VAR_18)) {





    if (FUNC_5(VAR_18, VAR_16) != VAR_12)
     VAR_19 |= VAR_15;
   }
  } else {
   FUNC_1(VAR_18);
  }
  FUNC_8(VAR_18);
  VAR_18->cmdcmplt_counts[VAR_18->cmdcmplt_bucket]++;
  VAR_18->cmdcmplt_total++;




 }





 if (VAR_19 == 0xFF && (VAR_18->features & VAR_2) != 0) {

 } else if (VAR_19 & VAR_8) {
  FUNC_2(VAR_18);
 } else if ((VAR_19 & (VAR_13|VAR_17)) != 0) {
  VAR_18->bus_intr(VAR_18);
 } else {

  if ((VAR_19 & VAR_15) != 0)
   FUNC_4(VAR_18, VAR_19);

  if ((VAR_19 & VAR_14) != 0)
   FUNC_3(VAR_18, VAR_19);
 }
 return (1);
}
