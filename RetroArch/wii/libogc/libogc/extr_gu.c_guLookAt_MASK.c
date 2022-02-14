
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int x; int y; int z; } ;
typedef TYPE_1__ guVector ;
typedef int** Mtx ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(Mtx VAR_0,guVector *VAR_1,guVector *VAR_2,guVector *VAR_3)
{
 guVector VAR_4,VAR_5,VAR_6;

 VAR_4.x = VAR_1->x - VAR_3->x;
 VAR_4.y = VAR_1->y - VAR_3->y;
 VAR_4.z = VAR_1->z - VAR_3->z;
 FUNC_1(&VAR_4);

 FUNC_0(VAR_2,&VAR_4,&VAR_5);
 FUNC_1(&VAR_5);

 FUNC_0(&VAR_4,&VAR_5,&VAR_6);

    VAR_0[0][0] = VAR_5.x;
    VAR_0[0][1] = VAR_5.y;
    VAR_0[0][2] = VAR_5.z;
    VAR_0[0][3] = -( VAR_1->x * VAR_5.x + VAR_1->y * VAR_5.y + VAR_1->z * VAR_5.z );

    VAR_0[1][0] = VAR_6.x;
    VAR_0[1][1] = VAR_6.y;
    VAR_0[1][2] = VAR_6.z;
    VAR_0[1][3] = -( VAR_1->x * VAR_6.x + VAR_1->y * VAR_6.y + VAR_1->z * VAR_6.z );

    VAR_0[2][0] = VAR_4.x;
    VAR_0[2][1] = VAR_4.y;
    VAR_0[2][2] = VAR_4.z;
    VAR_0[2][3] = -( VAR_1->x * VAR_4.x + VAR_1->y * VAR_4.y + VAR_1->z * VAR_4.z );
}
