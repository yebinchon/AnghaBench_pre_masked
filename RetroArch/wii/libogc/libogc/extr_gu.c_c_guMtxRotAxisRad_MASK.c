
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float x; float y; float z; } ;
typedef TYPE_1__ guVector ;
typedef float f32 ;
typedef float** Mtx ;


 int FUNC_0 (TYPE_1__*) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;

void FUNC_3(Mtx VAR_0,guVector *VAR_1,f32 VAR_2)
{
 f32 VAR_3,VAR_4;
 f32 VAR_5;
 f32 VAR_6,VAR_7,VAR_8;
 f32 VAR_9,VAR_10,VAR_11;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = 1.0f-VAR_4;

 FUNC_0(VAR_1);

 VAR_6 = VAR_1->x;
 VAR_7 = VAR_1->y;
 VAR_8 = VAR_1->z;

 VAR_9 = VAR_6*VAR_6;
 VAR_10 = VAR_7*VAR_7;
 VAR_11 = VAR_8*VAR_8;

    VAR_0[0][0] = ( VAR_5 * VAR_9 ) + ( VAR_4 );
    VAR_0[0][1] = ( VAR_5 * VAR_6 * VAR_7 ) - ( VAR_3 * VAR_8 );
    VAR_0[0][2] = ( VAR_5 * VAR_6 * VAR_8 ) + ( VAR_3 * VAR_7 );
    VAR_0[0][3] = 0.0f;

    VAR_0[1][0] = ( VAR_5 * VAR_6 * VAR_7 ) + ( VAR_3 * VAR_8 );
    VAR_0[1][1] = ( VAR_5 * VAR_10 ) + ( VAR_4 );
    VAR_0[1][2] = ( VAR_5 * VAR_7 * VAR_8 ) - ( VAR_3 * VAR_6 );
    VAR_0[1][3] = 0.0f;

    VAR_0[2][0] = ( VAR_5 * VAR_6 * VAR_8 ) - ( VAR_3 * VAR_7 );
    VAR_0[2][1] = ( VAR_5 * VAR_7 * VAR_8 ) + ( VAR_3 * VAR_6 );
    VAR_0[2][2] = ( VAR_5 * VAR_11 ) + ( VAR_4 );
    VAR_0[2][3] = 0.0f;

}
