
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u8_t ;
typedef int u16_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int* VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;

u16_t FUNC_3(zdev_t* VAR_2, zbuf_t* VAR_3, u8_t VAR_4, u8_t VAR_5)
{
    u8_t VAR_6;
    u16_t VAR_7;
    u16_t VAR_8;
    u16_t VAR_9;
    u8_t VAR_10;
    u8_t VAR_11;


    VAR_6 = (FUNC_2(VAR_2, VAR_3, 0) >> 4);

    if ((VAR_7 = VAR_1[VAR_6]) == 0xff)
    {
        FUNC_1(0);
    }


    VAR_7 += 24;

    VAR_8 = FUNC_0(VAR_2, VAR_3);

    while ((VAR_7+2)<VAR_8)
    {

        if ((VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_7)) == VAR_0)
        {

            if ((VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_7+1))>(VAR_8 - VAR_7))
            {

                return 0xffff;
            }

            if ( VAR_9 == 0 )
            {
                return 0xffff;
            }

            if (((VAR_11 = FUNC_2(VAR_2, VAR_3, VAR_7+2)) == 0x00)
                    && ((VAR_11 = FUNC_2(VAR_2, VAR_3, VAR_7+3)) == 0x50)
                    && ((VAR_11 = FUNC_2(VAR_2, VAR_3, VAR_7+4)) == 0xF2)
                    && ((VAR_11 = FUNC_2(VAR_2, VAR_3, VAR_7+5)) == VAR_4))

            {
                if ( VAR_5 != 0xff )
                {
                    if ( (VAR_11 = FUNC_2(VAR_2, VAR_3, VAR_7+6)) == VAR_5 )
                    {
                        return VAR_7;
                    }
                }
                else
                {
                    return VAR_7;
                }
            }
        }

        if ((VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_7+1)) == 0)
        {
            return 0xffff;
        }
        VAR_7 += (VAR_9+2);
    }
    return 0xffff;
}
