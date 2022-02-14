
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* clientinfo; } ;
struct TYPE_3__ {void* powerups; void* curWeapon; void* armor; void* health; void* location; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_2( void ) {
 int VAR_3;
 int VAR_4;

 VAR_1 = FUNC_1( FUNC_0( 1 ) );

 for ( VAR_3 = 0 ; VAR_3 < VAR_1 ; VAR_3++ ) {
  VAR_4 = FUNC_1( FUNC_0( VAR_3 * 6 + 2 ) );

  VAR_2[VAR_3] = VAR_4;

  VAR_0.clientinfo[ VAR_4 ].location = FUNC_1( FUNC_0( VAR_3 * 6 + 3 ) );
  VAR_0.clientinfo[ VAR_4 ].health = FUNC_1( FUNC_0( VAR_3 * 6 + 4 ) );
  VAR_0.clientinfo[ VAR_4 ].armor = FUNC_1( FUNC_0( VAR_3 * 6 + 5 ) );
  VAR_0.clientinfo[ VAR_4 ].curWeapon = FUNC_1( FUNC_0( VAR_3 * 6 + 6 ) );
  VAR_0.clientinfo[ VAR_4 ].powerups = FUNC_1( FUNC_0( VAR_3 * 6 + 7 ) );
 }
}
