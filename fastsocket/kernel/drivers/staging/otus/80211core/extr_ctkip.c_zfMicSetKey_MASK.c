
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct zsMicVar {void* k1; void* k0; } ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (struct zsMicVar*) ;

void FUNC_2(u8_t* VAR_0, struct zsMicVar* VAR_1)
{
    VAR_1->k0 = FUNC_0(VAR_0);
    VAR_1->k1 = FUNC_0(VAR_0+4);
    FUNC_1(VAR_1);
}
