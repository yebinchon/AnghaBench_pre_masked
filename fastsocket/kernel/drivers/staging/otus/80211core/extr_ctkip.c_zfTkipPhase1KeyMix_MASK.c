
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsTkipSeed {int iv32; int* ttak; int* ta; int iv32tmp; int * tk; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

u8_t FUNC_2(u32_t VAR_0, struct zsTkipSeed* VAR_1)
{
    u16_t VAR_2;
    u16_t VAR_3;
    u16_t VAR_4, VAR_5;







    VAR_2 = (u16_t) ((VAR_0 >> 16) & 0xffff);
    VAR_3 = (u16_t) (VAR_0 & 0xffff);


    VAR_1->ttak[0] = VAR_3;
    VAR_1->ttak[1] = VAR_2;
    VAR_1->ttak[2] = (u16_t) (VAR_1->ta[0] + (VAR_1->ta[1] <<8));
    VAR_1->ttak[3] = (u16_t) (VAR_1->ta[2] + (VAR_1->ta[3] <<8));
    VAR_1->ttak[4] = (u16_t) (VAR_1->ta[4] + (VAR_1->ta[5] <<8));


    for (VAR_4=0; VAR_4<8; VAR_4++)
    {
        VAR_5 = 2*(VAR_4 & 1);
        VAR_1->ttak[0] =(VAR_1->ttak[0] + FUNC_1(VAR_1->ttak[4]
                         ^ FUNC_0(VAR_1->tk[1+VAR_5], VAR_1->tk[VAR_5])))
                        & 0xffff;
        VAR_1->ttak[1] =(VAR_1->ttak[1] + FUNC_1(VAR_1->ttak[0]
                         ^ FUNC_0(VAR_1->tk[5+VAR_5], VAR_1->tk[4+VAR_5] )))
                        & 0xffff;
        VAR_1->ttak[2] =(VAR_1->ttak[2] + FUNC_1(VAR_1->ttak[1]
                         ^ FUNC_0(VAR_1->tk[9+VAR_5], VAR_1->tk[8+VAR_5] )))
                        & 0xffff;
        VAR_1->ttak[3] =(VAR_1->ttak[3] + FUNC_1(VAR_1->ttak[2]
                         ^ FUNC_0(VAR_1->tk[13+VAR_5], VAR_1->tk[12+VAR_5])))
                        & 0xffff;
        VAR_1->ttak[4] =(VAR_1->ttak[4] + FUNC_1(VAR_1->ttak[3]
                         ^ FUNC_0(VAR_1->tk[1+VAR_5], VAR_1->tk[VAR_5] )))
                        & 0xffff;
        VAR_1->ttak[4] =(VAR_1->ttak[4] + VAR_4) & 0xffff;
    }

    if ( VAR_0 == (VAR_1->iv32+1) )
    {
        VAR_1->iv32tmp = VAR_0;
        return 1;
    }

    return 0;
}
