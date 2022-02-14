
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(const uint8_t *VAR_0, int VAR_1)
{
    int VAR_2= VAR_0[5]&0x1f;
    const uint8_t *VAR_3= VAR_0+6;
    if (!VAR_2)
        return 0;
    while(VAR_2--){
        int VAR_4= FUNC_0(VAR_3) + 2;
        if(VAR_4 > VAR_1 - (VAR_3-VAR_0) || (VAR_3[2] & 0x9F) != 7)
            return 0;
        VAR_3 += VAR_4;
    }
    VAR_2 = *(VAR_3++);
    if(!VAR_2)
        return 0;
    while(VAR_2--){
        int VAR_5= FUNC_0(VAR_3) + 2;
        if(VAR_5 > VAR_1 - (VAR_3-VAR_0) || (VAR_3[2] & 0x9F) != 8)
            return 0;
        VAR_3 += VAR_5;
    }
    return 1;
}
