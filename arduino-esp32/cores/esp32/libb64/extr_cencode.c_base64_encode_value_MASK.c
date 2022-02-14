
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char FUNC_0(char VAR_0)
{
    static const char* VAR_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    if (VAR_0 > 63) {
        return '=';
    }
    return VAR_1[(int)VAR_0];
}
