
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct ahd_softc {int dummy; } ;
struct TYPE_5__ {int * function; scalar_t__ expires; scalar_t__ data; } ;
typedef TYPE_1__ ahd_timer_t ;
typedef int ahd_linux_callback_t ;
typedef int ahd_callback_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(ahd_timer_t *VAR_2, int VAR_3, ahd_callback_t *VAR_4, void *VAR_5)
{
 struct ahd_softc *VAR_6;

 VAR_6 = (struct ahd_softc *)VAR_5;
 FUNC_1(VAR_2);
 VAR_2->data = (u_long)VAR_5;
 VAR_2->expires = VAR_1 + (VAR_3 * VAR_0)/1000000;
 VAR_2->function = (ahd_linux_callback_t*)VAR_4;
 FUNC_0(VAR_2);
}
