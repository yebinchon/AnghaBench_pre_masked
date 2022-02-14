
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int rmt_item32_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(int VAR_1, rmt_item32_t* VAR_2, int VAR_3, uint16_t VAR_4, uint16_t VAR_5)
{
    int VAR_6 = 0, VAR_7 = 0;
    if(VAR_3 < VAR_0) {
        return -1;
    }
    FUNC_3(VAR_2++);
    VAR_6++;
    for(VAR_7 = 0; VAR_7 < 16; VAR_7++) {
        if(VAR_4 & 0x1) {
            FUNC_0(VAR_2);
        } else {
            FUNC_1(VAR_2);
        }
        VAR_2++;
        VAR_6++;
        VAR_4 >>= 1;
    }
    for(VAR_7 = 0; VAR_7 < 16; VAR_7++) {
        if(VAR_5 & 0x1) {
            FUNC_0(VAR_2);
        } else {
            FUNC_1(VAR_2);
        }
        VAR_2++;
        VAR_6++;
        VAR_5 >>= 1;
    }
    FUNC_2(VAR_2);
    VAR_6++;
    return VAR_6;
}
