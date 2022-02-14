
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahc_softc*,int ) ;
 int FUNC_1 (struct ahc_softc*,int ,int) ;

int
FUNC_2(struct ahc_softc *VAR_3) {
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {

  FUNC_1(VAR_3, VAR_1, VAR_4);
  FUNC_1(VAR_3, VAR_2, VAR_4);
  if (FUNC_0(VAR_3, VAR_2) != VAR_4)
   break;
  FUNC_1(VAR_3, VAR_1, 0);
  if (FUNC_0(VAR_3, VAR_2) != 0)
   break;
 }
 return (VAR_4);
}
