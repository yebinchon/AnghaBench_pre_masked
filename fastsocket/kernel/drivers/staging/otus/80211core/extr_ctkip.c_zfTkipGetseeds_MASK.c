
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;
struct zsTkipSeed {int* ppk; int * tk; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(u16_t VAR_0, u8_t *VAR_1, struct zsTkipSeed *VAR_2)
{
    VAR_1[0] = FUNC_1(VAR_0);
    VAR_1[1] = (FUNC_1(VAR_0) | 0x20) & 0x7f;
    VAR_1[2] = FUNC_2(VAR_0);
    VAR_1[3] = ((VAR_2->ppk[5] ^ FUNC_0(VAR_2->tk[1],VAR_2->tk[0]))>>1) & 0xff;
    VAR_1[4] = VAR_2->ppk[0] & 0xff;
    VAR_1[5] = VAR_2->ppk[0] >> 8;
    VAR_1[6] = VAR_2->ppk[1] & 0xff;
    VAR_1[7] = VAR_2->ppk[1] >> 8;
    VAR_1[8] = VAR_2->ppk[2] & 0xff;
    VAR_1[9] = VAR_2->ppk[2] >> 8;
    VAR_1[10] = VAR_2->ppk[3] & 0xff;
    VAR_1[11] = VAR_2->ppk[3] >> 8;
    VAR_1[12] = VAR_2->ppk[4] & 0xff;
    VAR_1[13] = VAR_2->ppk[4] >> 8;
    VAR_1[14] = VAR_2->ppk[5] & 0xff;
    VAR_1[15] = VAR_2->ppk[5] >> 8;
}
