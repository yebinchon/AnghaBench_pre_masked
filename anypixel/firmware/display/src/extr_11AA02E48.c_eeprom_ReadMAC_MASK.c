
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int) ;

bool FUNC_2(uint8_t *VAR_0) {
    int VAR_1;
    bool VAR_2;
    for(VAR_1 = 0; VAR_1 < 10; VAR_1++) {
        VAR_2 = FUNC_0(VAR_0, 0xFA, 6);
        if(VAR_2)
            break;
        FUNC_1(1000000);
    }
    if(!VAR_2) {
        for(VAR_1 = 0; VAR_1 < 6; VAR_1++)
            VAR_0[VAR_1] = 0xFF;
    }
    return VAR_2;
}
