
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int,int) ;

u16_t FUNC_4(zdev_t *VAR_3, zbuf_t *VAR_4, u16_t VAR_5, u8_t VAR_6, u8_t* VAR_7, u8_t *VAR_8)
{
    u8_t VAR_9[256];
    u8_t VAR_10[256];
    u16_t VAR_11;
    u16_t VAR_12;
    u16_t VAR_13;
    u32_t VAR_14;
    u32_t *VAR_15;
    u32_t VAR_16;
    u8_t VAR_17;
    u8_t VAR_18;
    u16_t VAR_19;
    u8_t VAR_20[32];


    VAR_20[0] = VAR_8[0];
    VAR_20[1] = VAR_8[1];
    VAR_20[2] = VAR_8[2];


    FUNC_0(&VAR_20[3], VAR_7, VAR_6);

    VAR_6 += 3;

    for(VAR_12 = 0; VAR_12 < 256; VAR_12++)
    {
        VAR_9[VAR_12] = (u8_t)VAR_12;
        VAR_10[VAR_12] = VAR_20[VAR_12&(VAR_6-1)];
    }

    VAR_13 = 0;
    for(VAR_12 = 0; VAR_12 < 256; VAR_12++)
    {
        VAR_13 = (VAR_13 + VAR_9[VAR_12] + VAR_10[VAR_12]);
        VAR_13&=255 ;


        VAR_17 = VAR_9[VAR_12];
        VAR_9[VAR_12] = VAR_9[VAR_13];
        VAR_9[VAR_13] = VAR_17;
    }

    VAR_12 = VAR_13 = 0;

    VAR_19 = FUNC_1(VAR_3, VAR_4);

    for (VAR_11 = VAR_5; VAR_11 < VAR_19; VAR_11++)
    {
        u8_t VAR_21;

        VAR_12++;
        VAR_12 &= 255;
        VAR_13 += VAR_9[VAR_12];
        VAR_13 &= 255;


        VAR_17 = VAR_9[VAR_12];
        VAR_9[VAR_12] = VAR_9[VAR_13];
        VAR_9[VAR_13] = VAR_17;

        VAR_17 += VAR_9[VAR_12];
        VAR_17 &=255;
        VAR_18 = VAR_9[VAR_17];

        VAR_21 = FUNC_2(VAR_3, VAR_4, VAR_11);

        FUNC_3(VAR_3, VAR_4, VAR_11, VAR_21 ^ VAR_18);
    }

    VAR_15 = &VAR_14;
    *VAR_15 = -1;

    for (VAR_11 = VAR_5; VAR_11 < VAR_19 - 4; VAR_11++)
    {
        u8_t VAR_22;

        VAR_22 = FUNC_2(VAR_3, VAR_4, VAR_11);
        *VAR_15 = (*VAR_15>>8) ^ VAR_2[(*VAR_15^VAR_22)&0xff];
    }

    *VAR_15 = ~*VAR_15;

    VAR_16 = (FUNC_2(VAR_3, VAR_4, VAR_19-4) |
         FUNC_2(VAR_3, VAR_4, VAR_19-3) << 8 |
         FUNC_2(VAR_3, VAR_4, VAR_19-2) << 16 |
         FUNC_2(VAR_3, VAR_4, VAR_19-1) << 24);

    if (*VAR_15 != VAR_16)
    {
        return VAR_0;
    }

    return VAR_1;
}
