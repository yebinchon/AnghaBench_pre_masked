
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {float value; } ;
struct TYPE_6__ {float zFar; int* projectionMatrix; } ;
struct TYPE_5__ {float fov_y; float fov_x; } ;
struct TYPE_7__ {TYPE_2__ viewParms; TYPE_1__ refdef; } ;


 float VAR_0 ;
 int FUNC_0 () ;
 TYPE_4__* VAR_1 ;
 float FUNC_1 (float) ;
 TYPE_3__ VAR_2 ;

void FUNC_2( void ) {
 float VAR_3, VAR_4, VAR_5, VAR_6;
 float VAR_7, VAR_8, VAR_9;
 float VAR_10, VAR_11;


 FUNC_0();




 VAR_10 = VAR_1->value;
 VAR_11 = VAR_2.viewParms.zFar;

 VAR_6 = VAR_10 * FUNC_1( VAR_2.refdef.fov_y * VAR_0 / 360.0f );
 VAR_5 = -VAR_6;

 VAR_4 = VAR_10 * FUNC_1( VAR_2.refdef.fov_x * VAR_0 / 360.0f );
 VAR_3 = -VAR_4;

 VAR_7 = VAR_4 - VAR_3;
 VAR_8 = VAR_6 - VAR_5;
 VAR_9 = VAR_11 - VAR_10;

 VAR_2.viewParms.projectionMatrix[0] = 2 * VAR_10 / VAR_7;
 VAR_2.viewParms.projectionMatrix[4] = 0;
 VAR_2.viewParms.projectionMatrix[8] = ( VAR_4 + VAR_3 ) / VAR_7;
 VAR_2.viewParms.projectionMatrix[12] = 0;

 VAR_2.viewParms.projectionMatrix[1] = 0;
 VAR_2.viewParms.projectionMatrix[5] = 2 * VAR_10 / VAR_8;
 VAR_2.viewParms.projectionMatrix[9] = ( VAR_6 + VAR_5 ) / VAR_8;
 VAR_2.viewParms.projectionMatrix[13] = 0;

 VAR_2.viewParms.projectionMatrix[2] = 0;
 VAR_2.viewParms.projectionMatrix[6] = 0;
 VAR_2.viewParms.projectionMatrix[10] = -( VAR_11 + VAR_10 ) / VAR_9;
 VAR_2.viewParms.projectionMatrix[14] = -2 * VAR_11 * VAR_10 / VAR_9;

 VAR_2.viewParms.projectionMatrix[3] = 0;
 VAR_2.viewParms.projectionMatrix[7] = 0;
 VAR_2.viewParms.projectionMatrix[11] = -1;
 VAR_2.viewParms.projectionMatrix[15] = 0;
}
