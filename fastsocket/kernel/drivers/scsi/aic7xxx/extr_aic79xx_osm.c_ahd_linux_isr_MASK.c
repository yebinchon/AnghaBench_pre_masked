
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ahd_softc {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,int *) ;
 int FUNC_3 (struct ahd_softc*,int *) ;

irqreturn_t
FUNC_4(int VAR_0, void *VAR_1)
{
 struct ahd_softc *VAR_2;
 u_long VAR_3;
 int VAR_4;

 VAR_2 = (struct ahd_softc *) VAR_1;
 FUNC_2(VAR_2, &VAR_3);
 VAR_4 = FUNC_1(VAR_2);
 FUNC_3(VAR_2, &VAR_3);
 return FUNC_0(VAR_4);
}
