
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int GetByteContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(GetByteContext *VAR_0, uint32_t *VAR_1, int VAR_2)
{
    int VAR_3;

    VAR_2 = FUNC_0(VAR_2, FUNC_2(VAR_0) / 3);
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        *VAR_1++ = 0xFF000000 | FUNC_1(VAR_0);
    if (VAR_2 < 256)
        FUNC_3(VAR_1, 0, (256 - VAR_2) * sizeof(*VAR_1));
}
