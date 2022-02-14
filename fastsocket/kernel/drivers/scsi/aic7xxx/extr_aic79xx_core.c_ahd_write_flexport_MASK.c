
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int dummy; } ;


 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,int ,int) ;
 int FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (char*) ;

int
FUNC_5(struct ahd_softc *VAR_5, u_int VAR_6, u_int VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_5, VAR_0, VAR_0);
 if (VAR_6 > 7)
  FUNC_4("ahd_write_flexport: address out of range");
 FUNC_2(VAR_5, VAR_1, VAR_3|(VAR_6 << 3));
 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8 != 0)
  return (VAR_8);
 FUNC_2(VAR_5, VAR_2, VAR_7);
 FUNC_1(VAR_5);
 FUNC_2(VAR_5, VAR_1, VAR_4|VAR_3|(VAR_6 << 3));
 FUNC_1(VAR_5);
 FUNC_2(VAR_5, VAR_1, VAR_3|(VAR_6 << 3));
 FUNC_1(VAR_5);
 FUNC_2(VAR_5, VAR_1, 0);
 FUNC_1(VAR_5);
 return (0);
}
