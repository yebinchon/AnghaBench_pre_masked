
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

void FUNC_0(int VAR_1, int VAR_2) {
    int VAR_3 = (VAR_1 * 3) / 2;
    if(VAR_1 & 1) {

        VAR_0[VAR_3] &= 0xF0;
        VAR_0[VAR_3] |= ((VAR_2 >> 8) & 0x0F);
        VAR_0[VAR_3+1] = VAR_2 & 0xFF;
    } else {
        VAR_0[VAR_3] = (VAR_2 >> 4) & 0xFF;
        VAR_0[VAR_3+1] &= 0x0F;
        VAR_0[VAR_3+1] |= (VAR_2 << 4) & 0xF0;
    }
}
