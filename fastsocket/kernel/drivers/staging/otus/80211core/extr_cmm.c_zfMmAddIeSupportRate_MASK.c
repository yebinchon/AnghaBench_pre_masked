
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct TYPE_2__ {int bRate; int bRateBasic; int gRate; int gRateBasic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int,scalar_t__) ;

u16_t FUNC_2(zdev_t* VAR_5, zbuf_t* VAR_6, u16_t VAR_7, u8_t VAR_8, u8_t VAR_9)
{
    u8_t VAR_10 = 0;
    u16_t VAR_11;

    FUNC_0(VAR_5);







    if ( VAR_9 == VAR_0 )
    {
        for (VAR_11=0; VAR_11<4; VAR_11++)
        {
            if ((VAR_2->bRate & (0x1<<VAR_11)) == (0x1<<VAR_11))

            {
                FUNC_1(VAR_5, VAR_6, VAR_7+VAR_10+2,
                                     VAR_3[VAR_11]+((VAR_2->bRateBasic & (0x1<<VAR_11))<<(7-VAR_11)));
                VAR_10++;
            }
        }
    }
    else if ( VAR_9 == VAR_1 )
    {
        for (VAR_11=0; VAR_11<8; VAR_11++)
        {
            if ((VAR_2->gRate & (0x1<<VAR_11)) == (0x1<<VAR_11))

            {
                FUNC_1(VAR_5, VAR_6, VAR_7+VAR_10+2,
                                     VAR_4[VAR_11]+((VAR_2->gRateBasic & (0x1<<VAR_11))<<(7-VAR_11)));
                VAR_10++;
            }
        }
    }

    if (VAR_10 > 0)
    {

        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);


        FUNC_1(VAR_5, VAR_6, VAR_7+1, VAR_10);


        VAR_7 += (2+VAR_10);
    }

    return VAR_7;
}
