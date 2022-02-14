
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int dummy; } ;
typedef int ahd_mode_state ;
typedef int ahd_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void
FUNC_0(struct ahd_softc *VAR_4, ahd_mode_state VAR_5,
         ahd_mode *VAR_6, ahd_mode *VAR_7)
{
 *VAR_6 = (VAR_5 & VAR_2) >> VAR_3;
 *VAR_7 = (VAR_5 & VAR_0) >> VAR_1;
}
