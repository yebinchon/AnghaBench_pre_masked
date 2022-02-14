
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct ahd_softc {int bugs; int pause; int features; int dev_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ahd_softc*,int ) ;
 int FUNC_4 (struct ahd_softc*,int ,int ) ;
 char* FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*,int ,int) ;
 int FUNC_7 (struct ahd_softc*) ;
 int FUNC_8 (int ,scalar_t__,int) ;
 int FUNC_9 (int ,scalar_t__,int,int) ;
 int FUNC_10 (struct ahd_softc*,int ,int ) ;
 int FUNC_11 (struct ahd_softc*) ;
 int FUNC_12 (char*,char*) ;

int
FUNC_13(struct ahd_softc *VAR_15, int VAR_16)
{
 u_int VAR_17;
 int VAR_18;
 uint32_t VAR_19;






 FUNC_7(VAR_15);
 FUNC_11(VAR_15);
 FUNC_10(VAR_15, VAR_0, VAR_0);
 VAR_17 = FUNC_3(VAR_15, VAR_14);

 VAR_19 = FUNC_8(VAR_15->dev_softc, VAR_9, 2);
 if ((VAR_15->bugs & VAR_1) != 0) {
  uint32_t VAR_20;
  VAR_20 = VAR_19 & ~(VAR_7|VAR_8);
  FUNC_9(VAR_15->dev_softc, VAR_9,
         VAR_20, 2);
 }
 FUNC_6(VAR_15, VAR_5, VAR_3 | VAR_15->pause);







 VAR_18 = 1000;
 do {
  FUNC_2(1000);
 } while (--VAR_18 && !(FUNC_3(VAR_15, VAR_5) & VAR_4));

 if (VAR_18 == 0) {
  FUNC_12("%s: WARNING - Failed chip reset!  "
         "Trying to initialize anyway.\n", FUNC_5(VAR_15));
 }
 FUNC_6(VAR_15, VAR_5, VAR_15->pause);

 if ((VAR_15->bugs & VAR_1) != 0) {




  FUNC_9(VAR_15->dev_softc, VAR_10 + 1,
         0xFF, 1);
  FUNC_9(VAR_15->dev_softc, VAR_9,
         VAR_19, 2);
 }







 FUNC_4(VAR_15, VAR_0, VAR_0);
 FUNC_6(VAR_15, VAR_6,
   FUNC_0(VAR_15, VAR_0, VAR_0));
 FUNC_6(VAR_15, VAR_14, VAR_17|VAR_13);
 FUNC_6(VAR_15, VAR_14, VAR_17);


 VAR_15->features &= ~VAR_2;
 if ((FUNC_3(VAR_15, VAR_11) & VAR_12) != 0)
  VAR_15->features |= VAR_2;





 if (VAR_16 != 0)
  FUNC_1(VAR_15);

 return (0);
}
