
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int FUNC_0 (float) ;
 float FUNC_1 (float,float) ;

__attribute__((used)) static void FUNC_2(int16_t* VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    float VAR_7, VAR_8;

    VAR_7 = FUNC_1((float)VAR_2 / VAR_1, 1.0f / VAR_3);
    VAR_8 = VAR_1;
    VAR_5 = VAR_1;

    for (VAR_4 = 0; VAR_4 < VAR_3-1; VAR_4++) {
        VAR_8 *= VAR_7;
        VAR_6 = FUNC_0(VAR_8);
        VAR_0[VAR_4] = VAR_6 - VAR_5;
        VAR_5 = VAR_6;
    }
    VAR_0[VAR_3-1] = VAR_2 - VAR_5;
}
