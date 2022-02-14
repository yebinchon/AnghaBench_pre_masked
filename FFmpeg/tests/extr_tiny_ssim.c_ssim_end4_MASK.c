
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,int,int,int) ;

__attribute__((used)) static float FUNC_1( int VAR_0[5][4], int VAR_1[5][4], int VAR_2 )
{
    float VAR_3 = 0.0;
    int VAR_4;

    for( VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
        VAR_3 += FUNC_0( VAR_0[VAR_4][0] + VAR_0[VAR_4+1][0] + VAR_1[VAR_4][0] + VAR_1[VAR_4+1][0],
                           VAR_0[VAR_4][1] + VAR_0[VAR_4+1][1] + VAR_1[VAR_4][1] + VAR_1[VAR_4+1][1],
                           VAR_0[VAR_4][2] + VAR_0[VAR_4+1][2] + VAR_1[VAR_4][2] + VAR_1[VAR_4+1][2],
                           VAR_0[VAR_4][3] + VAR_0[VAR_4+1][3] + VAR_1[VAR_4][3] + VAR_1[VAR_4+1][3] );
    return VAR_3;
}
