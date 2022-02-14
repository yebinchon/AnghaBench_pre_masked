
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct scb {int dummy; } ;
struct ahc_softc {TYPE_1__* scb_data; } ;
struct TYPE_2__ {scalar_t__ numscbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ahc_softc*) ;
 scalar_t__ FUNC_1 (struct ahc_softc*,int ) ;
 struct scb* FUNC_2 (struct ahc_softc*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ahc_softc*,struct scb*,int,char,int,scalar_t__,int ) ;
 int FUNC_4 (struct ahc_softc*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct ahc_softc*,scalar_t__,scalar_t__) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__) ;

int
FUNC_8(struct ahc_softc *VAR_6, int VAR_7, char VAR_8,
       int VAR_9, u_int VAR_10, int VAR_11, int VAR_12,
       int VAR_13)
{
 struct scb *VAR_14;
 u_int VAR_15;
 u_int VAR_16;
 u_int VAR_17;
 u_int VAR_18;

 VAR_17 = 0;
 VAR_15 = FUNC_1(VAR_6, VAR_0);
 VAR_16 = VAR_3;

 if (VAR_13) {

  VAR_18 = FUNC_1(VAR_6, VAR_2);
 } else

  VAR_18 = VAR_3;

 while (VAR_15 != VAR_3) {
  u_int VAR_19;

  FUNC_4(VAR_6, VAR_2, VAR_15);
  VAR_19 = FUNC_1(VAR_6, VAR_5);
  if (VAR_19 >= VAR_6->scb_data->numscbs) {
   FUNC_7("Disconnected List inconsistency. "
          "SCB index == %d, yet numscbs == %d.",
          VAR_19, VAR_6->scb_data->numscbs);
   FUNC_0(VAR_6);
   FUNC_6("for safety");
  }

  if (VAR_15 == VAR_16) {
   FUNC_6("Disconnected List Loop. "
         "cur SCBPTR == %x, prev SCBPTR == %x.",
         VAR_15, VAR_16);
  }
  VAR_14 = FUNC_2(VAR_6, VAR_19);
  if (FUNC_3(VAR_6, VAR_14, VAR_7, VAR_8, VAR_9,
      VAR_10, VAR_1)) {
   VAR_17++;
   if (VAR_12) {
    VAR_15 =
        FUNC_5(VAR_6, VAR_16, VAR_15);
   } else {
    VAR_16 = VAR_15;
    VAR_15 = FUNC_1(VAR_6, VAR_4);
   }
   if (VAR_11)
    break;
  } else {
   VAR_16 = VAR_15;
   VAR_15 = FUNC_1(VAR_6, VAR_4);
  }
 }
 if (VAR_13)
  FUNC_4(VAR_6, VAR_2, VAR_18);
 return (VAR_17);
}
