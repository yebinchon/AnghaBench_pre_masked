
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef void* u32_t ;
typedef int u16_t ;
struct zsTkipSeed {int iv16; void* iv32; int tk; int ta; } ;


 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (void*,struct zsTkipSeed*) ;
 int FUNC_2 (int*,int) ;

void FUNC_3(u8_t* VAR_0, u8_t* VAR_1, struct zsTkipSeed* VAR_2, u8_t* VAR_3)
{
    u16_t VAR_4;
    u32_t VAR_5;
    u16_t VAR_6;


    FUNC_2((u8_t*) VAR_2, sizeof(struct zsTkipSeed));

    FUNC_0(VAR_2->ta, VAR_1, 6);
    FUNC_0(VAR_2->tk, VAR_0, 16);

    VAR_4 = *VAR_3++;
    VAR_4 += *VAR_3<<8;
    VAR_3++;

    VAR_5=0;

    for(VAR_6=0; VAR_6<4; VAR_6++)
    {
        VAR_5 += *VAR_3<<(VAR_6*8);
        *VAR_3++;
    }

    VAR_2->iv32 = VAR_5+1;
    FUNC_1(VAR_5, VAR_2);

    VAR_2->iv16 = VAR_4;
    VAR_2->iv32 = VAR_5;
}
