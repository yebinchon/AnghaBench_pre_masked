
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ps; } ;
struct TYPE_5__ {int frametime; } ;
struct TYPE_4__ {scalar_t__* velocity; int gravity; scalar_t__ pm_time; int pm_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1( void ) {


 FUNC_0( VAR_3 );

 VAR_1->ps->velocity[2] -= VAR_1->ps->gravity * VAR_2.frametime;
 if (VAR_1->ps->velocity[2] < 0) {

  VAR_1->ps->pm_flags &= ~VAR_0;
  VAR_1->ps->pm_time = 0;
 }
}
