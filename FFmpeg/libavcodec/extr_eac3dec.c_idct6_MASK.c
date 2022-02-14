
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(int VAR_3[6])
{
    int VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

    VAR_9 = VAR_3[1] - VAR_3[3] - VAR_3[5];

    VAR_7 = ( VAR_3[2] * VAR_0) >> 23;
    VAR_4 = ( VAR_3[4] * VAR_1) >> 23;
    VAR_8 = ((VAR_3[1] + VAR_3[5]) * VAR_2) >> 23;

    VAR_5 = VAR_3[0] + (VAR_4 >> 1);
    VAR_6 = VAR_3[0] - VAR_4;

    VAR_4 = VAR_5;
    VAR_5 = VAR_4 + VAR_7;
    VAR_7 = VAR_4 - VAR_7;

    VAR_4 = VAR_8;
    VAR_8 = VAR_4 + VAR_3[1] + VAR_3[3];
    VAR_10 = VAR_4 + VAR_3[5] - VAR_3[3];

    VAR_3[0] = VAR_5 + VAR_8;
    VAR_3[1] = VAR_6 + VAR_9;
    VAR_3[2] = VAR_7 + VAR_10;
    VAR_3[3] = VAR_7 - VAR_10;
    VAR_3[4] = VAR_6 - VAR_9;
    VAR_3[5] = VAR_5 - VAR_8;
}
