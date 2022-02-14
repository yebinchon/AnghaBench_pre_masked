
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVFrame ;


 int FUNC_0 (int *,int,int,int*,int) ;

__attribute__((used)) static void FUNC_1(AVFrame *VAR_0, int VAR_1, int VAR_2,
                         int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    uint8_t VAR_8[16];
    int VAR_9, VAR_10;
    for(VAR_9 = 0x80, VAR_10 = 0; VAR_9; VAR_9 >>= 1, VAR_10++) {
        if(VAR_3 & VAR_9)
            VAR_8[VAR_10] = VAR_6;
        else
            VAR_8[VAR_10] = VAR_5;
    }

    for(VAR_9 = 0x80, VAR_10 = 8; VAR_9; VAR_9 >>= 1, VAR_10++) {
        if(VAR_4 & VAR_9)
            VAR_8[VAR_10] = VAR_6;
        else
            VAR_8[VAR_10] = VAR_5;
    }

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_8, VAR_7);
}
