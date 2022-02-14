
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {int planenum; int * shaderInfo; } ;
typedef TYPE_1__ side_t ;
typedef int shaderInfo_t ;
struct TYPE_5__ {size_t numsides; TYPE_1__* sides; } ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2( vec3_t VAR_1, vec3_t VAR_2, vec3_t VAR_3, shaderInfo_t *VAR_4 ) {
 side_t *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_0->sides[ VAR_0->numsides ];
 FUNC_1( VAR_5, 0, sizeof( *VAR_5 ) );
 VAR_0->numsides++;

 VAR_5->shaderInfo = VAR_4;


 VAR_6 = FUNC_0( VAR_1, VAR_2, VAR_3 );
 VAR_5->planenum = VAR_6;
}
