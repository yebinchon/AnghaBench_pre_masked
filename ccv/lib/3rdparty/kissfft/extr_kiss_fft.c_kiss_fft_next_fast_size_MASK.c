
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0)
{
    while(1) {
        int VAR_1=VAR_0;
        while ( (VAR_1%2) == 0 ) VAR_1/=2;
        while ( (VAR_1%3) == 0 ) VAR_1/=3;
        while ( (VAR_1%5) == 0 ) VAR_1/=5;
        if (VAR_1<=1)
            break;
        VAR_0++;
    }
    return VAR_0;
}
