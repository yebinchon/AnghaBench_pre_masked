
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;







char *FUNC_0(uint16_t VAR_0)
{
    char *VAR_1 = ((void*)0);
    switch (VAR_0) {
        case 128:
            VAR_1 = "Unknown_command";
            break;
        case 130:
            VAR_1 = "Invalid_command";
            break;
        case 129:
            VAR_1 = "Invalid_parameter";
            break;
        case 131:
            VAR_1 = "Action_failed";
            break;
        default:
            VAR_1 = "unknown_failed";
            break;
    }
    return VAR_1;

}
