
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {int origin; int * axis; } ;
typedef TYPE_1__ orientation_t ;


 float FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,float,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5 (vec3_t VAR_0, orientation_t *VAR_1, orientation_t *VAR_2, vec3_t VAR_3) {
 int VAR_4;
 vec3_t VAR_5;
 vec3_t VAR_6;
 float VAR_7;

 FUNC_4( VAR_0, VAR_1->origin, VAR_5 );

 FUNC_2( VAR_6 );
 for ( VAR_4 = 0 ; VAR_4 < 3 ; VAR_4++ ) {
  VAR_7 = FUNC_0(VAR_5, VAR_1->axis[VAR_4]);
  FUNC_3( VAR_6, VAR_7, VAR_2->axis[VAR_4], VAR_6 );
 }

 FUNC_1( VAR_6, VAR_2->origin, VAR_3 );
}
