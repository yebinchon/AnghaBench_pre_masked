
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;
struct zsTkipSeed {int* ppk; int* ttak; int iv16; int iv16tmp; int * tk; } ;


 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;

u8_t FUNC_3(u16_t VAR_0, struct zsTkipSeed* VAR_1)
{
    u16_t VAR_2;

    VAR_2 = VAR_0;


    VAR_1->ppk[0] = VAR_1->ttak[0];
    VAR_1->ppk[1] = VAR_1->ttak[1];
    VAR_1->ppk[2] = VAR_1->ttak[2];
    VAR_1->ppk[3] = VAR_1->ttak[3];
    VAR_1->ppk[4] = VAR_1->ttak[4];
    VAR_1->ppk[5] = (VAR_1->ttak[4] + VAR_2) & 0xffff;


    VAR_1->ppk[0] = VAR_1->ppk[0]
                + FUNC_1(VAR_1->ppk[5] ^ FUNC_0(VAR_1->tk[1],VAR_1->tk[0]));
    VAR_1->ppk[1] = VAR_1->ppk[1]
                + FUNC_1(VAR_1->ppk[0] ^ FUNC_0(VAR_1->tk[3],VAR_1->tk[2]));
    VAR_1->ppk[2] = VAR_1->ppk[2]
                + FUNC_1(VAR_1->ppk[1] ^ FUNC_0(VAR_1->tk[5],VAR_1->tk[4]));
    VAR_1->ppk[3] = VAR_1->ppk[3]
                + FUNC_1(VAR_1->ppk[2] ^ FUNC_0(VAR_1->tk[7],VAR_1->tk[6]));
    VAR_1->ppk[4] = VAR_1->ppk[4]
                + FUNC_1(VAR_1->ppk[3] ^ FUNC_0(VAR_1->tk[9],VAR_1->tk[8]));
    VAR_1->ppk[5] = VAR_1->ppk[5]
                + FUNC_1(VAR_1->ppk[4] ^ FUNC_0(VAR_1->tk[11],VAR_1->tk[10]));

    VAR_1->ppk[0] = VAR_1->ppk[0]
                + FUNC_2(VAR_1->ppk[5] ^ FUNC_0(VAR_1->tk[13],VAR_1->tk[12]));
    VAR_1->ppk[1] = VAR_1->ppk[1]
                + FUNC_2(VAR_1->ppk[0] ^ FUNC_0(VAR_1->tk[15],VAR_1->tk[14]));
    VAR_1->ppk[2] = VAR_1->ppk[2] + FUNC_2(VAR_1->ppk[1]);
    VAR_1->ppk[3] = VAR_1->ppk[3] + FUNC_2(VAR_1->ppk[2]);
    VAR_1->ppk[4] = VAR_1->ppk[4] + FUNC_2(VAR_1->ppk[3]);
    VAR_1->ppk[5] = VAR_1->ppk[5] + FUNC_2(VAR_1->ppk[4]);

    if (VAR_0 == 0)
    {
        if (VAR_1->iv16 == 0xffff)
        {
            VAR_1->iv16tmp=0;
            return 1;
        }
        else
            return 0;
    }
    else if (VAR_0 == (VAR_1->iv16+1))
    {
        VAR_1->iv16tmp = VAR_0;
        return 1;
    }
    else
        return 0;
}
