
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int rmt_item32_t ;


 int FUNC_0 (int,int *,int,int,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(int VAR_0, uint16_t VAR_1, uint16_t VAR_2, int VAR_3, rmt_item32_t* VAR_4, int VAR_5)
{
    while(1) {
        int VAR_6 = FUNC_0(VAR_0, VAR_4 + VAR_5, VAR_3 - VAR_5, ((~VAR_2) << 8) | VAR_2, VAR_1);
        FUNC_1("cmd :%d\n", VAR_1);
        if(VAR_6 < 0) {
            break;
        }
        VAR_1++;
        VAR_2++;
        VAR_5 += VAR_6;
    }
}
