
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int*,int,int) ;
 int FUNC_1 (int *,int *) ;
 int* VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;

u16_t FUNC_5(zdev_t* VAR_2, zbuf_t* VAR_3, u8_t VAR_4)
{
    u8_t VAR_5;
    u16_t VAR_6;
    u16_t VAR_7;
    u16_t VAR_8;
    u8_t VAR_9;
    u8_t VAR_10;
    u8_t VAR_11[6] = {0x00,0x03,0x7f,0x01, 0x01, 0x00};

    FUNC_3(VAR_2);


    VAR_5 = (FUNC_4(VAR_2, VAR_3, 0) >> 4);
    if ((VAR_6 = VAR_1[VAR_5]) == 0xff)
    {
        FUNC_2(0);
    }


    VAR_6 += 24;

    VAR_7 = FUNC_1(VAR_2, VAR_3);

    while ((VAR_6+2)<VAR_7)
    {

        if ((VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_6)) == VAR_0)
        {

            if ((VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_6+1))>(VAR_7 - VAR_6))
            {

                return 0xffff;
            }

            if ( VAR_8 == 0 )
            {
                return 0xffff;
            }

            if (FUNC_0(VAR_2, VAR_3, VAR_11, VAR_6+2, 6) && ( FUNC_4(VAR_2, VAR_3, VAR_6+1) >= 6))
            {

                VAR_10= FUNC_4(VAR_2, VAR_3, VAR_6+8);
                if ((VAR_10 & 0x01) || (VAR_10 & 0x02) || (VAR_10 & 0x04))
                {
                    return VAR_6;
                }
            }
        }


        VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_6+1);







        VAR_6 += (VAR_8+2);
    }
    return 0xffff;
}
