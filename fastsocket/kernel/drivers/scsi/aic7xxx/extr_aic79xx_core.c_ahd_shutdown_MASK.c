
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int stat_timer; int reset_timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct ahd_softc *VAR_2;

 VAR_2 = (struct ahd_softc *)VAR_1;




 FUNC_1(&VAR_2->reset_timer);
 FUNC_1(&VAR_2->stat_timer);


 FUNC_0(VAR_2, VAR_0);
}
