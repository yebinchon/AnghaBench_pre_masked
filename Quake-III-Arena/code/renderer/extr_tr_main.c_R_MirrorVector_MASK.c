
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {int * axis; } ;
typedef TYPE_1__ orientation_t ;


 float FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,float,int ,int ) ;

void FUNC_3 (vec3_t VAR_0, orientation_t *VAR_1, orientation_t *VAR_2, vec3_t VAR_3) {
 int VAR_4;
 float VAR_5;

 FUNC_1( VAR_3 );
 for ( VAR_4 = 0 ; VAR_4 < 3 ; VAR_4++ ) {
  VAR_5 = FUNC_0(VAR_0, VAR_1->axis[VAR_4]);
  FUNC_2( VAR_3, VAR_5, VAR_2->axis[VAR_4], VAR_3 );
 }
}
