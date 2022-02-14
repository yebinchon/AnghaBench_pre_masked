
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ahc_softc {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct ahc_softc*,scalar_t__) ;
 int FUNC_3 (struct ahc_softc*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct ahc_softc *VAR_4, u_int VAR_5, u_int VAR_6)
{
 u_int VAR_7;

 if ((VAR_4->flags & VAR_0) != 0) {
  u_int VAR_8;

  VAR_8 = FUNC_2(VAR_4, VAR_2);
  FUNC_3(VAR_4, VAR_2, FUNC_0(VAR_5));
  FUNC_3(VAR_4, VAR_3 + FUNC_1(VAR_5), VAR_6);
  FUNC_3(VAR_4, VAR_2, VAR_8);
 } else {
  VAR_7 = FUNC_1(VAR_5);
  FUNC_3(VAR_4, VAR_1 + VAR_7, VAR_6);
 }
}
