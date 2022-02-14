
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int*,int,int) ;
 int FUNC_1 (int *,int *) ;
 int* VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;

u16_t FUNC_4(zdev_t* VAR_5, zbuf_t* VAR_6, u8_t VAR_7)
{
    u8_t VAR_8;
    u16_t VAR_9;
    u16_t VAR_10;
    u16_t VAR_11;
    u8_t VAR_12, VAR_13=0;
    u8_t VAR_14[4] = {0x00, 0x50, 0xf2, 0x01};
    u8_t VAR_15[3] = {0x00,0x90,0x4C};
    u8_t VAR_16 = 0;


    VAR_8 = (FUNC_3(VAR_5, VAR_6, 0) >> 4);
    if ((VAR_9 = VAR_4[VAR_8]) == 0xff)
    {
        FUNC_2(0);
    }


    VAR_9 += 24;



    if ((VAR_7 == VAR_1) ||
        (VAR_7 == VAR_0))
    {
        VAR_13 = VAR_7;
        VAR_7 = VAR_3;
        VAR_16 = 1;
    }


    VAR_10 = FUNC_1(VAR_5, VAR_6);

    while ((VAR_9+2)<VAR_10)
    {

        if ((VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_9)) == VAR_7)
        {

            if ((VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_9+1))>(VAR_10 - VAR_9))
            {

                return 0xffff;
            }

            if ( VAR_11 == 0 && VAR_7 != VAR_2)
            {

                return 0xffff;
            }

            if ( VAR_7 == VAR_3 )
            {

                if ( (VAR_16 == 0) && FUNC_0(VAR_5, VAR_6, VAR_14, VAR_9+2, 4) )
                {
                    return VAR_9;
                }




                if ((VAR_16 == 1) && ( FUNC_0(VAR_5, VAR_6, VAR_15, VAR_9+2, 3) ))
                {
                    if ( FUNC_3(VAR_5, VAR_6, VAR_9+5) == VAR_13 )
                    {
                        return VAR_9 + 5;
                    }
                }

            }
            else
            {
                return VAR_9;
            }
        }


        VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_9+1);







        VAR_9 += (VAR_11+2);
    }
    return 0xffff;
}
