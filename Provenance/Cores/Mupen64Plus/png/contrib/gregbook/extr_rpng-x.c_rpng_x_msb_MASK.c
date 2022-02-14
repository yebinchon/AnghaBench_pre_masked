
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulg ;



__attribute__((used)) static int FUNC_0(ulg VAR_0)
{
    int VAR_1;

    for (VAR_1 = 31; VAR_1 >= 0; --VAR_1) {
        if (VAR_0 & 0x80000000L)
            break;
        VAR_0 <<= 1;
    }
    return VAR_1;
}
