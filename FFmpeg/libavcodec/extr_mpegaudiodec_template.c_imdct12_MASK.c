
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SUINTFLOAT ;
typedef int INTFLOAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(INTFLOAT *VAR_4, SUINTFLOAT *VAR_5)
{
    SUINTFLOAT VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    VAR_6 = VAR_5[0*3];
    VAR_7 = VAR_5[1*3] + VAR_5[0*3];
    VAR_8 = VAR_5[2*3] + VAR_5[1*3];
    VAR_9 = VAR_5[3*3] + VAR_5[2*3];
    VAR_10 = VAR_5[4*3] + VAR_5[3*3];
    VAR_11 = VAR_5[5*3] + VAR_5[4*3];
    VAR_11 += VAR_9;
    VAR_9 += VAR_7;

    VAR_8 = FUNC_0(VAR_8, VAR_0, 2);
    VAR_9 = FUNC_0(VAR_9, VAR_0, 4);

    VAR_12 = VAR_6 - VAR_10;
    VAR_13 = FUNC_0(VAR_7 - VAR_11, VAR_1, 2);

    VAR_4[ 7] =
    VAR_4[10] = VAR_12 + VAR_13;
    VAR_4[ 1] =
    VAR_4[ 4] = VAR_12 - VAR_13;

    VAR_6 += FUNC_1(VAR_10, 1);
    VAR_10 = VAR_6 + VAR_8;
    VAR_11 += 2*VAR_7;
    VAR_7 = FUNC_0(VAR_11 + VAR_9, VAR_2, 1);
    VAR_4[ 8] =
    VAR_4[ 9] = VAR_10 + VAR_7;
    VAR_4[ 2] =
    VAR_4[ 3] = VAR_10 - VAR_7;

    VAR_6 -= VAR_8;
    VAR_11 = FUNC_0(VAR_11 - VAR_9, VAR_3, 2);
    VAR_4[ 0] =
    VAR_4[ 5] = VAR_6 - VAR_11;
    VAR_4[ 6] =
    VAR_4[11] = VAR_6 + VAR_11;
}
