
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(int16_t *VAR_0)
{
    int VAR_1 = 0, VAR_2;

    for (VAR_2 = 0; VAR_2 < 64; VAR_2++)
        VAR_1 += FUNC_0(VAR_0[VAR_2]);
    return VAR_1;
}
