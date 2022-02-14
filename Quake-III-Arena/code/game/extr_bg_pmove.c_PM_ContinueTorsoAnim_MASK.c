
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ps; } ;
struct TYPE_3__ {int torsoAnim; scalar_t__ torsoTimer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_1( int VAR_2 ) {
 if ( ( VAR_1->ps->torsoAnim & ~VAR_0 ) == VAR_2 ) {
  return;
 }
 if ( VAR_1->ps->torsoTimer > 0 ) {
  return;
 }
 FUNC_0( VAR_2 );
}
