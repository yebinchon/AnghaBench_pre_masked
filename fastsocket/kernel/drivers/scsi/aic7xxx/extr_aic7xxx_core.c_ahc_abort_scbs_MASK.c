
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct scb {int flags; } ;
struct ahc_softc {int flags; int pending_scbs; TYPE_1__* scb_data; } ;
typedef int role_t ;
typedef scalar_t__ cam_status ;
struct TYPE_2__ {int maxhscbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct scb* FUNC_1 (int *) ;
 struct scb* FUNC_2 (struct scb*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct ahc_softc*) ;
 int FUNC_4 (struct ahc_softc*,struct scb*) ;
 int FUNC_5 (struct scb*) ;
 int FUNC_6 (struct ahc_softc*) ;
 scalar_t__ FUNC_7 (struct scb*) ;
 scalar_t__ FUNC_8 (struct ahc_softc*,int ) ;
 scalar_t__ FUNC_9 (struct ahc_softc*,scalar_t__) ;
 struct scb* FUNC_10 (struct ahc_softc*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct ahc_softc*,struct scb*,int,char,int,scalar_t__,int ) ;
 int FUNC_12 (struct ahc_softc*,int ,scalar_t__) ;
 int FUNC_13 (struct ahc_softc*,int,char,int,scalar_t__,int ,int ) ;
 int FUNC_14 (struct ahc_softc*) ;
 int FUNC_15 (struct ahc_softc*,int,char,int,scalar_t__,int ,int ,int ) ;
 int FUNC_16 (struct ahc_softc*,int,char,int,scalar_t__,int ,int ,int ) ;
 int FUNC_17 (struct scb*,int ) ;
 int FUNC_18 (struct ahc_softc*,scalar_t__) ;
 int VAR_15 ;
 int FUNC_19 (char*) ;

__attribute__((used)) static int
FUNC_20(struct ahc_softc *VAR_16, int VAR_17, char VAR_18,
        int VAR_19, u_int VAR_20, role_t VAR_21, uint32_t VAR_22)
{
 struct scb *VAR_23;
 struct scb *VAR_24;
 u_int VAR_25;
 int VAR_26, VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;

 int VAR_31;





 FUNC_6(VAR_16);


 VAR_25 = FUNC_8(VAR_16, VAR_9);

 VAR_31 = FUNC_16(VAR_16, VAR_17, VAR_18, VAR_19, VAR_11,
       VAR_21, VAR_3, VAR_13);




 VAR_26 = 0;
 VAR_28 = 16;
 if (VAR_17 != VAR_6) {
  VAR_26 = VAR_17;
  if (VAR_18 == 'B')
   VAR_26 += 8;
  VAR_28 = VAR_26 + 1;
 }

 if (VAR_19 == VAR_2) {







  VAR_29 = 0;
  VAR_30 = 1;
  if ((VAR_16->flags & VAR_1) != 0)
   VAR_30 = VAR_0;
 } else {
  VAR_29 = VAR_19;
  VAR_30 = VAR_19 + 1;
 }

 if (VAR_21 != VAR_8) {
  for (;VAR_26 < VAR_28; VAR_26++) {
   for (VAR_27 = VAR_29;VAR_27 < VAR_30; VAR_27++) {
    u_int VAR_32;
    u_int VAR_33;

    VAR_33 = FUNC_0(VAR_26 << 4, VAR_27);
    VAR_32 = FUNC_9(VAR_16, VAR_33);
    VAR_23 = FUNC_10(VAR_16, VAR_32);
    if (VAR_23 == ((void*)0)
     || FUNC_11(VAR_16, VAR_23, VAR_17, VAR_18,
        VAR_19, VAR_20, VAR_21) == 0)
     continue;
    FUNC_18(VAR_16, FUNC_0(VAR_26 << 4, VAR_27));
   }
  }







  FUNC_15(VAR_16, VAR_17, VAR_18, VAR_19, VAR_20,
                          VAR_7, VAR_14,
                       VAR_7);
 }
 for (VAR_26 = 0; VAR_26 < VAR_16->scb_data->maxhscbs; VAR_26++) {
  u_int VAR_34;

  FUNC_12(VAR_16, VAR_9, VAR_26);
  VAR_34 = FUNC_8(VAR_16, VAR_12);
  VAR_23 = FUNC_10(VAR_16, VAR_34);
  if ((VAR_23 == ((void*)0) && VAR_34 != VAR_11)
   || (VAR_23 != ((void*)0)
    && FUNC_11(VAR_16, VAR_23, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21)))
   FUNC_3(VAR_16);
 }







 VAR_24 = FUNC_1(&VAR_16->pending_scbs);
 while (VAR_24 != ((void*)0)) {
  VAR_23 = VAR_24;
  VAR_24 = FUNC_2(VAR_23, VAR_15);
  if (FUNC_11(VAR_16, VAR_23, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21)) {
   cam_status VAR_35;

   VAR_35 = FUNC_7(VAR_23);
   if (VAR_35 == VAR_5)
    FUNC_17(VAR_23, VAR_22);
   if (FUNC_7(VAR_23) != VAR_4)
    FUNC_5(VAR_23);
   if ((VAR_23->flags & VAR_10) == 0)
    FUNC_19("Inactive SCB on pending list\n");
   FUNC_4(VAR_16, VAR_23);
   VAR_31++;
  }
 }
 FUNC_12(VAR_16, VAR_9, VAR_25);
 FUNC_13(VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);
 FUNC_14(VAR_16);
 return VAR_31;
}
