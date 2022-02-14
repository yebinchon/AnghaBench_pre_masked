
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1, int VAR_2,
                                   int VAR_3, int VAR_4, int VAR_5,
                                   int *VAR_6, int *VAR_7)
{
    int VAR_8 = VAR_2 + 1;
    int VAR_9 = (VAR_1 + VAR_4) * VAR_8 + VAR_0 + VAR_3;
    if (VAR_9 < VAR_5 || VAR_9 % VAR_8 == VAR_8 - 1)
        return 0;
    *VAR_7 = VAR_9 / VAR_8;
    *VAR_6 = VAR_9 % VAR_8;
    return 1;
}
