
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INTFLOAT ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(INTFLOAT (*VAR_0)[2], INTFLOAT (*VAR_1)[2], INTFLOAT *VAR_2,
                                 int VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_0[VAR_4][0] = FUNC_0(VAR_1[VAR_4][0], VAR_2[VAR_4]);
        VAR_0[VAR_4][1] = FUNC_0(VAR_1[VAR_4][1], VAR_2[VAR_4]);
    }
}
