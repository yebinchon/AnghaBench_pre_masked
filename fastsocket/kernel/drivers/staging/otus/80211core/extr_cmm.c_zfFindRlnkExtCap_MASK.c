
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u8_t ;
typedef int u16_t ;


 int FUNC_0 (int *,int *) ;
 int* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;

u16_t FUNC_3(zdev_t* VAR_1, zbuf_t* VAR_2)
{
    u8_t VAR_3;
    u16_t VAR_4;
    u16_t VAR_5;
    u16_t VAR_6;
    u8_t VAR_7;
    u8_t VAR_8;


    VAR_3 = (FUNC_2(VAR_1, VAR_2, 0) >> 4);

    if ((VAR_4 = VAR_0[VAR_3]) == 0xff)
    {
        FUNC_1(0);
    }


    VAR_4 += 24;

    VAR_5 = FUNC_0(VAR_1, VAR_2);


    while((VAR_4+2) < VAR_5)
    {

        if ((VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_4)) == 0x7F)
        {

            if ((VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_4+1)) > (VAR_5 - VAR_4))
            {

                return 0xffff;
            }

            if ( VAR_6 == 0 )
            {
                return 0xffff;
            }

            if ((VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_4+2)) == 0x01)

            {
                return VAR_4;
            }
        }


        if ((VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_4+1)) == 0)
        {
            return 0xffff;
        }

        VAR_4 += (VAR_6+2);
    }

    return 0xffff;
}
