
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int index; int addr0; int addr1; int addr2; } ;
typedef TYPE_1__ camentry_t ;



__attribute__((used)) static void FUNC_0(camentry_t * VAR_0, int *VAR_1, char *VAR_2)
{
 camentry_t *VAR_3 = VAR_0 + (*VAR_1);
 u8 *VAR_4 = (u8 *) VAR_2;

 VAR_3->index = *VAR_1;
 VAR_3->addr0 = (((u16) VAR_4[1]) << 8) | VAR_4[0];
 VAR_3->addr1 = (((u16) VAR_4[3]) << 8) | VAR_4[2];
 VAR_3->addr2 = (((u16) VAR_4[5]) << 8) | VAR_4[4];
 (*VAR_1)++;
}
