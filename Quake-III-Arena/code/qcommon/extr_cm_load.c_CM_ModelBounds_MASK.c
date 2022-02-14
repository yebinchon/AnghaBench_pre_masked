
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_3__ {int maxs; int mins; } ;
typedef TYPE_1__ cmodel_t ;
typedef int clipHandle_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2( clipHandle_t VAR_0, vec3_t VAR_1, vec3_t VAR_2 ) {
 cmodel_t *VAR_3;

 VAR_3 = FUNC_0( VAR_0 );
 FUNC_1( VAR_3->mins, VAR_1 );
 FUNC_1( VAR_3->maxs, VAR_2 );
}
