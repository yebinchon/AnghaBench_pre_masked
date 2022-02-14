
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (int *) ;

int FUNC_1(AVIOContext *VAR_0)
{
    int VAR_1 = 0;
    int VAR_2 = 4;
    while (VAR_2--) {
        int VAR_3 = FUNC_0(VAR_0);
        VAR_1 = (VAR_1 << 7) | (VAR_3 & 0x7f);
        if (!(VAR_3 & 0x80))
            break;
    }
    return VAR_1;
}
