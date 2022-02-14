
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef size_t u8_t ;
typedef int u32_t ;
struct zsMulticastAddr {int* addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_2, u8_t VAR_3, u8_t* VAR_4, u8_t VAR_5)
{
    struct zsMulticastAddr* VAR_6 = (struct zsMulticastAddr*) VAR_4;
    u8_t VAR_7;
    u32_t VAR_8;
    u32_t VAR_9, VAR_10;

    VAR_9 = 0x80000000;
    VAR_10 = 0;

    if ( VAR_5 )
    {
        VAR_9 = VAR_10 = ~0;
    }
    else
    {
        for(VAR_7=0; VAR_7<VAR_3; VAR_7++)
        {
            VAR_8 = VAR_6[VAR_7].addr[5] >> 2;

            if ( VAR_8 < 32 )
            {
                VAR_10 |= (1 << VAR_8);
            }
            else
            {
                VAR_9 |= (1 << (VAR_8-32));
            }
        }
    }

    FUNC_0(VAR_2, VAR_1,
                            VAR_10);
    FUNC_0(VAR_2, VAR_0,
                            VAR_9);
    FUNC_1(VAR_2);
    return;
}
