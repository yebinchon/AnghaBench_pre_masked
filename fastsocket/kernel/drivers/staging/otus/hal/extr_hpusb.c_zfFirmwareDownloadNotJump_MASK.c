
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int,int ,int *,int) ;
 int FUNC_1 (int ,char*) ;

u16_t FUNC_2(zdev_t* VAR_3, u32_t* VAR_4, u32_t VAR_5, u32_t VAR_6)
{
    u16_t VAR_7 = VAR_2;
    u32_t VAR_8 = VAR_6;
    u8_t *VAR_9, *VAR_10;
    u32_t VAR_11;

    VAR_9 = (u8_t*) VAR_4;
    VAR_10 = VAR_9;

    while (VAR_5 > 0)
    {
        u32_t VAR_12 = (VAR_5 > 4096) ? 4096 : VAR_5;

        VAR_11 = FUNC_0(VAR_3, VAR_0,
                                     (u16_t) (VAR_8 >> 8),
                                     0, VAR_9, VAR_12);

        if (VAR_11 != VAR_2)
        {
            FUNC_1(VAR_1, "FIRMWARE_DOWNLOAD failed");
            VAR_7 = 1;
            goto exit;
        }

        VAR_5 -= VAR_12;
        VAR_9 += VAR_12;
        VAR_8 += VAR_12;

        VAR_11 = 0;
    }

exit:

    return VAR_7;

}
