
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, AVIOContext *VAR_1)
{


    uint32_t VAR_2 = FUNC_1(VAR_1);

    int VAR_3 = !!(VAR_2 & 0x01);
    int VAR_4 = !!(VAR_2 & 0x02);
    int VAR_5 = !!(VAR_2 & 0x04);
    int VAR_6 = !!(VAR_2 & 0x08);
    int VAR_7 = !!(VAR_2 & 0x10);
    int VAR_8 = !!(VAR_2 & 0x20);
    int VAR_9 = (VAR_2 >> 6) & 7;



    VAR_2 = 0;

    VAR_2 |= VAR_3 << 15;
    VAR_2 |= VAR_4 << 14;
    VAR_2 |= VAR_5 << 13;
    VAR_2 |= VAR_6 << 12;
    VAR_2 |= VAR_7 << 11;
    VAR_2 |= VAR_8 << 10;
    VAR_2 |= VAR_9 << 7;

    FUNC_0(VAR_0, VAR_2);
}
