
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ahc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ahc_softc *VAR_3, int *VAR_4,
       int *VAR_5, int *VAR_6,
       int *VAR_7)
{
 uint8_t VAR_8;
 FUNC_1(VAR_3, 0);






 VAR_8 = FUNC_0(VAR_3);
 *VAR_4 = (VAR_8 & VAR_1) ? 0 : 1;
 *VAR_5 = (VAR_8 & VAR_2) ? 0 : 1;





 FUNC_1(VAR_3, VAR_0);






 VAR_8 = FUNC_0(VAR_3);
 *VAR_6 = (VAR_8 & VAR_1) ? 0 : 1;
 *VAR_7 = (VAR_8 & VAR_2) ? 1 : 0;
}
