
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct ahd_softc {int dev_softc; } ;
typedef int ahd_mode_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ahd_softc*) ;
 int FUNC_1 (struct ahd_softc*,int) ;
 char* FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*,int,int) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (struct ahd_softc*,int) ;
 int FUNC_6 (int ,scalar_t__,int,int) ;
 int FUNC_7 (struct ahd_softc*,int ) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*,int ,int ) ;
 int FUNC_10 (struct ahd_softc*) ;
 int * VAR_8 ;
 char** VAR_9 ;
 int FUNC_11 (char const*,char*,...) ;

__attribute__((used)) static void
FUNC_12(struct ahd_softc *VAR_10)
{
 uint8_t VAR_11[8];
 ahd_mode_state VAR_12;
 u_int VAR_13;
 u_int VAR_14;
 u_int VAR_15;
 u_int VAR_16;

 VAR_14 = FUNC_1(VAR_10, VAR_4);

 if ((VAR_14 & VAR_7) != 0)
  FUNC_5(VAR_10, VAR_14);

 if ((VAR_14 & VAR_5) == 0)
  return;

 FUNC_11("%s: PCI error Interrupt\n", FUNC_2(VAR_10));
 VAR_12 = FUNC_8(VAR_10);
 FUNC_0(VAR_10);
 FUNC_9(VAR_10, VAR_0, VAR_0);
 for (VAR_15 = 0, VAR_16 = VAR_3; VAR_15 < 8; VAR_15++, VAR_16++) {

  if (VAR_15 == 5)
   continue;
  VAR_11[VAR_15] = FUNC_1(VAR_10, VAR_16);

  FUNC_3(VAR_10, VAR_16, VAR_11[VAR_15]);
 }

 for (VAR_15 = 0; VAR_15 < 8; VAR_15++) {
  u_int VAR_17;

  if (VAR_15 == 5)
   continue;

  for (VAR_17 = 0; VAR_17 < 8; VAR_17++) {

   if ((VAR_11[VAR_15] & (0x1 << VAR_17)) != 0) {
    static const char *VAR_18;

    VAR_18 = VAR_9[VAR_17];
    if (VAR_15 == 7 && VAR_17 == 3)
     VAR_18 = "%s: Signaled Target Abort\n";
    FUNC_11(VAR_18, FUNC_2(VAR_10), VAR_8[VAR_15]);
   }
  }
 }
 VAR_13 = FUNC_4(VAR_10->dev_softc,
       VAR_6 + 1, 1);
 FUNC_6(VAR_10->dev_softc, VAR_6 + 1,
        VAR_13, 1);
 FUNC_7(VAR_10, VAR_12);
 FUNC_3(VAR_10, VAR_1, VAR_2);
 FUNC_10(VAR_10);
}
