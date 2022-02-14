
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_2__ {int bRate; int bRateBasic; int gRate; int gRateBasic; } ;


 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t* VAR_3, u8_t* VAR_4)
{
    u8_t VAR_5=0, VAR_6=0, VAR_7=0, VAR_8=0;
    u8_t VAR_9 = VAR_4[1];
    u8_t VAR_10, VAR_11;

    FUNC_0(VAR_3);

    for(VAR_10=2; VAR_10<VAR_9+2; VAR_10++)
    {
        for(VAR_11=0; VAR_11<4; VAR_11++)
        {
            if ( (VAR_4[VAR_10] & 0x7f) == VAR_1[VAR_11] )
            {
                VAR_5 |= (1 << VAR_11);
                if ( VAR_4[VAR_10] & 0x80 )
                {
                    VAR_6 |= (1 << VAR_11);
                }
            }
        }

        if ( VAR_11 == 4 )
        {
            for(VAR_11=0; VAR_11<8; VAR_11++)
            {
                if ( (VAR_4[VAR_10] & 0x7f) == VAR_2[VAR_11] )
                {
                    VAR_7 |= (1 << VAR_11);
                    if ( VAR_4[VAR_10] & 0x80 )
                    {
                        VAR_8 |= (1 << VAR_11);
                    }
                }
            }
        }
    }


    VAR_0->bRate |= VAR_5;
    VAR_0->bRateBasic |= VAR_6;
    VAR_0->gRate |= VAR_7;
    VAR_0->gRateBasic |= VAR_8;
}
