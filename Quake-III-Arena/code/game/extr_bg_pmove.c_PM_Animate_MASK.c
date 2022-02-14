
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buttons; } ;
struct TYPE_6__ {TYPE_2__* ps; TYPE_1__ cmd; } ;
struct TYPE_5__ {int torsoTimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_3__* VAR_16 ;

__attribute__((used)) static void FUNC_2( void ) {
 if ( VAR_16->cmd.buttons & VAR_2 ) {
  if ( VAR_16->ps->torsoTimer == 0 ) {
   FUNC_1( VAR_11 );
   VAR_16->ps->torsoTimer = VAR_8;
   FUNC_0( VAR_7 );
  }
 }
}
