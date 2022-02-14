
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;






char *FUNC_0(uint8_t VAR_0)
{
    char *VAR_1 = ((void*)0);
    switch (VAR_0)
    {
        case 130:
            VAR_1 = "New message";
            break;
        case 129:
            VAR_1 = "Modified message";
            break;
        case 128:
            VAR_1 = "Removed message";
            break;
        default:
            VAR_1 = "unknown EventID";
            break;
    }
    return VAR_1;
}
