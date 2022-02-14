
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(int VAR_0)
{
    const char *VAR_1;

    switch (VAR_0 >> 8)
    {
    case 128:
        VAR_1 = "W";
        break;
    case 129:
        VAR_1 = "F";
        break;
    default:
        VAR_1 = "U";
        break;
    }

    return VAR_1;
}
