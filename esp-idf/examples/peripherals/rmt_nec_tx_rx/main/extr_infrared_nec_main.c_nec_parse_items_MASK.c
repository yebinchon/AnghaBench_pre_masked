
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int rmt_item32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(rmt_item32_t* VAR_1, int VAR_2, uint16_t* VAR_3, uint16_t* VAR_4)
{
    int VAR_5 = VAR_2;
    if(VAR_5 < VAR_0) {
        return -1;
    }
    int VAR_6 = 0, VAR_7 = 0;
    if(!FUNC_2(VAR_1++)) {
        return -1;
    }
    uint16_t VAR_8 = 0;
    for(VAR_7 = 0; VAR_7 < 16; VAR_7++) {
        if(FUNC_0(VAR_1)) {
            VAR_8 |= (1 << VAR_7);
        } else if(FUNC_1(VAR_1)) {
            VAR_8 |= (0 << VAR_7);
        } else {
            return -1;
        }
        VAR_1++;
        VAR_6++;
    }
    uint16_t VAR_9 = 0;
    for(VAR_7 = 0; VAR_7 < 16; VAR_7++) {
        if(FUNC_0(VAR_1)) {
            VAR_9 |= (1 << VAR_7);
        } else if(FUNC_1(VAR_1)) {
            VAR_9 |= (0 << VAR_7);
        } else {
            return -1;
        }
        VAR_1++;
        VAR_6++;
    }
    *VAR_3 = VAR_8;
    *VAR_4 = VAR_9;
    return VAR_6;
}
