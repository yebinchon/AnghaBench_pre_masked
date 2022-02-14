
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned long) ;

void FUNC_1(void)
{
    static int VAR_2;
    unsigned short *VAR_3 = (unsigned short *)0x5;
    volatile int VAR_4 = 0;
    int VAR_5 = 0;

    if (VAR_2++ > 2) {
        return;
    }
    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
        VAR_4++;
        if(VAR_5 == 2) {
            FUNC_1();
            break;
        }
    }

    if(VAR_1 & VAR_0) {
        FUNC_0("Write to unaligned address 0x%lx.\n", (unsigned long)VAR_3);
        *VAR_3 = 0xDEAD;
    }
}
