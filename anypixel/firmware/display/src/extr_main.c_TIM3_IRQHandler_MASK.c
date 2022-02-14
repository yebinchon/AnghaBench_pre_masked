
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 void** VAR_7 ;

void FUNC_3(void) {
    static uint16_t VAR_8 = 0;
    static uint16_t VAR_9, VAR_10;
    if(FUNC_2(VAR_4, VAR_5) == VAR_3) {
        VAR_7[VAR_6++ % 32] = FUNC_1(VAR_4);

        FUNC_0(VAR_4, VAR_5);
        if(VAR_8 == 0) {
            VAR_9 = FUNC_1(VAR_4);
            VAR_8 = 1;
        }
        else if(VAR_8 == 1) {
            VAR_10 = FUNC_1(VAR_4);
            if(VAR_10 < VAR_9)
                VAR_0 = (0xFFFF - VAR_9) - VAR_10;
            else
                VAR_0 = VAR_10 - VAR_9;
            VAR_8 = 0;
        }
        VAR_1 = VAR_2;
    }
}
