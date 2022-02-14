
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_6__ {int origin; int angles; } ;
struct TYPE_7__ {TYPE_1__ s; scalar_t__ target; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_8__ {int intermission_angle; int intermission_origin; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *,int ,char*) ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;

void FUNC_7( void ) {
 gentity_t *VAR_3, *VAR_4;
 vec3_t VAR_5;


 VAR_3 = FUNC_1 (((void*)0), FUNC_0(VAR_0), "info_player_intermission");
 if ( !VAR_3 ) {
  FUNC_3 ( VAR_2, VAR_1.intermission_origin, VAR_1.intermission_angle );
 } else {
  FUNC_4 (VAR_3->s.origin, VAR_1.intermission_origin);
  FUNC_4 (VAR_3->s.angles, VAR_1.intermission_angle);

  if ( VAR_3->target ) {
   VAR_4 = FUNC_2( VAR_3->target );
   if ( VAR_4 ) {
    FUNC_5( VAR_4->s.origin, VAR_1.intermission_origin, VAR_5 );
    FUNC_6( VAR_5, VAR_1.intermission_angle );
   }
  }
 }

}
