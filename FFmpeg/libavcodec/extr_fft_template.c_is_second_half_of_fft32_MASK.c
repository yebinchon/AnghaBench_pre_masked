
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1)
{
    if (VAR_1 <= 32)
        return VAR_0 >= 16;
    else if (VAR_0 < VAR_1/2)
        return FUNC_0(VAR_0, VAR_1/2);
    else if (VAR_0 < 3*VAR_1/4)
        return FUNC_0(VAR_0 - VAR_1/2, VAR_1/4);
    else
        return FUNC_0(VAR_0 - 3*VAR_1/4, VAR_1/4);
}
