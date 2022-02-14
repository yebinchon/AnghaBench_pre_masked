
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_0, unsigned int VAR_1,
                           const unsigned int *VAR_2, int32_t *VAR_3)
{
    unsigned int VAR_4 = 0;

    while (VAR_0 < VAR_1)
        VAR_4 += VAR_2[VAR_0++];

    if (VAR_4)
        FUNC_0(VAR_3, 0, sizeof(*VAR_3) * VAR_4);
}
