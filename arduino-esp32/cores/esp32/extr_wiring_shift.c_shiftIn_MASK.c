
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

uint8_t FUNC_2(uint8_t VAR_3, uint8_t VAR_4, uint8_t VAR_5) {
    uint8_t VAR_6 = 0;
    uint8_t VAR_7;

    for(VAR_7 = 0; VAR_7 < 8; ++VAR_7) {

        if(VAR_5 == VAR_2)
            VAR_6 |= FUNC_0(VAR_3) << VAR_7;
        else
            VAR_6 |= FUNC_0(VAR_3) << (7 - VAR_7);
        FUNC_1(VAR_4, VAR_0);
        FUNC_1(VAR_4, VAR_1);
    }
    return VAR_6;
}
