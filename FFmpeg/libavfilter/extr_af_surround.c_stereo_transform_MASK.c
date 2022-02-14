
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float,int ) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float FUNC_1 (float,float) ;
 float FUNC_2 (float,int,int) ;
 float FUNC_3 (float) ;
 float FUNC_4 (float) ;
 float FUNC_5 (float,float) ;
 float FUNC_6 (float) ;

__attribute__((used)) static void FUNC_7(float *VAR_3, float *VAR_4, float VAR_5)
{
    float VAR_6, VAR_7, VAR_8;

    if (VAR_5 == 90.f)
        return;

    VAR_6 = VAR_5 * VAR_0 / 180.f;
    VAR_7 = FUNC_5(*VAR_3, *VAR_4);
    VAR_8 = FUNC_1(*VAR_3, *VAR_4);

    if (FUNC_4(VAR_8) <= VAR_2)
        VAR_8 *= VAR_6 / VAR_1;
    else
        VAR_8 = VAR_0 + 2 * (-2 * VAR_0 + VAR_6) * (VAR_0 - FUNC_4(VAR_8)) * FUNC_0(VAR_8, 0) / (3 * VAR_0);

    *VAR_3 = FUNC_2(FUNC_6(VAR_8) * VAR_7, -1, 1);
    *VAR_4 = FUNC_2(FUNC_3(VAR_8) * VAR_7, -1, 1);
}
