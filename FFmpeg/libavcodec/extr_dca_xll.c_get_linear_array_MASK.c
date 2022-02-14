
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(GetBitContext *VAR_0, int32_t *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;

    if (VAR_3 == 0)
        FUNC_1(VAR_1, 0, sizeof(*VAR_1) * VAR_2);
    else for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        VAR_1[VAR_4] = FUNC_0(VAR_0, VAR_3);
}
