
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;


 int* VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int,int) ;

void FUNC_5(zdev_t *VAR_1, zbuf_t *VAR_2, u8_t *VAR_3, u16_t VAR_4, u16_t VAR_5, u8_t VAR_6, u8_t* VAR_7, u8_t *VAR_8)
{
    u8_t VAR_9[256],VAR_10[256];
    u16_t VAR_11;
    u16_t VAR_12;
    u16_t VAR_13;
    u8_t VAR_14;
    u8_t VAR_15;
    u32_t VAR_16;
    u16_t VAR_17;
    u32_t VAR_18;
    u8_t VAR_19[32];

    VAR_19[0] = VAR_8[0];
    VAR_19[1] = VAR_8[1];
    VAR_19[2] = VAR_8[2];


    FUNC_0(&VAR_19[3], VAR_7, VAR_6);

    VAR_6 += 3;

    for(VAR_12 = 0; VAR_12 < 256; VAR_12++)
    {
        VAR_9[VAR_12] = (u8_t)VAR_12;
        VAR_10[VAR_12] = VAR_19[VAR_12&(VAR_6-1)];
    }

    VAR_13 = 0;
    for(VAR_12 = 0; VAR_12 < 256; VAR_12++)
    {
        VAR_13 = (VAR_13 + VAR_9[VAR_12] + VAR_10[VAR_12]) ;
        VAR_13&=255 ;


        VAR_14 = VAR_9[VAR_12];
        VAR_9[VAR_12] = VAR_9[VAR_13];
        VAR_9[VAR_13] = VAR_14;
    }

    VAR_12 = VAR_13 = 0;
    VAR_18 = -1;


    for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
    {
        u8_t VAR_20;

        VAR_12++;
        VAR_12 &= 255;
        VAR_13 += VAR_9[VAR_12];
        VAR_13 &= 255;


        VAR_14 = VAR_9[VAR_12];
        VAR_9[VAR_12] = VAR_9[VAR_13];
        VAR_9[VAR_13] = VAR_14;

        VAR_14 += VAR_9[VAR_12];
        VAR_14 &=255;
        VAR_15 = VAR_9[VAR_14];

        VAR_20 = VAR_3[VAR_11];
        VAR_18 = (VAR_18>>8) ^ VAR_0[(VAR_18^VAR_20)&0xff];

        VAR_3[VAR_11] = VAR_20 ^ VAR_15;

    }

    VAR_17 = FUNC_1(VAR_1, VAR_2);

    for (VAR_11 = VAR_5; VAR_11 < VAR_17; VAR_11++)
    {
        u8_t VAR_21;

        VAR_12++;
        VAR_12 &= 255;
        VAR_13 += VAR_9[VAR_12];
        VAR_13 &= 255;


        VAR_14 = VAR_9[VAR_12];
        VAR_9[VAR_12] = VAR_9[VAR_13];
        VAR_9[VAR_13] = VAR_14;

        VAR_14 += VAR_9[VAR_12];
        VAR_14 &=255;
        VAR_15 = VAR_9[VAR_14];

        VAR_21 = FUNC_3(VAR_1, VAR_2, VAR_11);
        VAR_18 = (VAR_18>>8) ^ VAR_0[(VAR_18^VAR_21)&0xff];

        FUNC_4(VAR_1, VAR_2, VAR_11, VAR_21 ^ VAR_15);
    }

    VAR_18 = ~(VAR_18);
    VAR_16 = (u32_t) VAR_18;

    for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
    {
        VAR_12 ++;
        VAR_12 &= 255;
        VAR_13 += VAR_9[VAR_12];
        VAR_13 &= 255;


        VAR_14 = VAR_9[VAR_12];
        VAR_9[VAR_12] = VAR_9[VAR_13];
        VAR_9[VAR_13] = VAR_14;
        VAR_14 += VAR_9[VAR_12];
        VAR_14 &= 255;
        VAR_15 = VAR_9[VAR_14];


        FUNC_4(VAR_1, VAR_2, VAR_17+VAR_11, (u8_t)(VAR_16 ^ VAR_15)&0xff);
        VAR_16 >>= 8;
    }

    FUNC_2(VAR_1, VAR_2, VAR_17+4);
}
