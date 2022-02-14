
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {int normal; int dist; } ;
typedef TYPE_1__ plane_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4( plane_t *VAR_0, plane_t *VAR_1, vec3_t VAR_2, vec3_t VAR_3 ) {
 vec3_t VAR_4;


 FUNC_3( VAR_2, VAR_3, VAR_4 );
 FUNC_0( VAR_1->normal, VAR_4, VAR_0->normal );
 FUNC_2( VAR_0->normal, VAR_0->normal );
 VAR_0->dist = FUNC_1( VAR_2, VAR_0->normal );
}
