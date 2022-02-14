
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int) ;

u16_t FUNC_3(zdev_t* VAR_0, zbuf_t* VAR_1, u16_t* VAR_2, u16_t* VAR_3)
{
    u16_t VAR_4;
    u16_t VAR_5;
    u16_t VAR_6;

    VAR_6 = FUNC_1(VAR_0, VAR_1);
    if (VAR_6 < 14)
    {

        *VAR_3 = 0;
        return 0;
    }


    VAR_5 = (((u16_t)FUNC_2(VAR_0, VAR_1, 12))<<8)
                + FUNC_2(VAR_0, VAR_1, 13);



    if (VAR_5 > 1500)
    {

        VAR_4 = 12;
        VAR_2[0] = 0xaaaa;
        VAR_2[1] = 0x0003;
        if ((VAR_5 ==0x8137) || (VAR_5 == 0x80f3))
        {

            VAR_2[2] = 0xF800;
        }
        else
        {

            VAR_2[2] = 0x0000;
        }
        *VAR_3 = 6;

        if ( VAR_5 == 0x888E )
        {
            FUNC_0(VAR_0, VAR_1, 14);
        }
    }
    else
    {

        VAR_4 = 14;
        *VAR_3 = 0;
    }

    return VAR_4;
}
