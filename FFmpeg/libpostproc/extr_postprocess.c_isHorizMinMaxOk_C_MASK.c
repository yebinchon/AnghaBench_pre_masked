
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static inline int FUNC_0(const uint8_t VAR_0[], int VAR_1, int VAR_2)
{
    int VAR_3;
    for(VAR_3=0; VAR_3<2; VAR_3++){
        if((unsigned)(VAR_0[0] - VAR_0[5] + 2*VAR_2) > 4*VAR_2) return 0;
        VAR_0 += VAR_1;
        if((unsigned)(VAR_0[2] - VAR_0[7] + 2*VAR_2) > 4*VAR_2) return 0;
        VAR_0 += VAR_1;
        if((unsigned)(VAR_0[4] - VAR_0[1] + 2*VAR_2) > 4*VAR_2) return 0;
        VAR_0 += VAR_1;
        if((unsigned)(VAR_0[6] - VAR_0[3] + 2*VAR_2) > 4*VAR_2) return 0;
        VAR_0 += VAR_1;
    }
    return 1;
}
