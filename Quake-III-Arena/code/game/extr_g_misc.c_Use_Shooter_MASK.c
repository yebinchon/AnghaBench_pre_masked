
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_14__ {int weapon; int origin; } ;
struct TYPE_15__ {float random; TYPE_3__ s; int movedir; TYPE_2__* enemy; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_12__ {int currentOrigin; } ;
struct TYPE_13__ {TYPE_1__ r; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,float,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;



 float FUNC_7 () ;
 int FUNC_8 (TYPE_4__*,int ,int ) ;
 int FUNC_9 (TYPE_4__*,int ,int ) ;
 int FUNC_10 (TYPE_4__*,int ,int ) ;

void FUNC_11( gentity_t *VAR_1, gentity_t *VAR_2, gentity_t *VAR_3 ) {
 vec3_t VAR_4;
 float VAR_5;
 vec3_t VAR_6, VAR_7;


 if ( VAR_1->enemy ) {
  FUNC_6( VAR_1->enemy->r.currentOrigin, VAR_1->s.origin, VAR_4 );
  FUNC_5( VAR_4 );
 } else {
  FUNC_3( VAR_1->movedir, VAR_4 );
 }


 FUNC_2( VAR_6, VAR_4 );
 FUNC_0( VAR_6, VAR_4, VAR_7 );

 VAR_5 = FUNC_7() * VAR_1->random;
 FUNC_4( VAR_4, VAR_5, VAR_6, VAR_4 );

 VAR_5 = FUNC_7() * VAR_1->random;
 FUNC_4( VAR_4, VAR_5, VAR_7, VAR_4 );

 FUNC_5( VAR_4 );

 switch ( VAR_1->s.weapon ) {
 case 130:
  FUNC_8( VAR_1, VAR_1->s.origin, VAR_4 );
  break;
 case 128:
  FUNC_10( VAR_1, VAR_1->s.origin, VAR_4 );
  break;
 case 129:
  FUNC_9( VAR_1, VAR_1->s.origin, VAR_4 );
  break;
 }

 FUNC_1( VAR_1, VAR_0, 0 );
}
