
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
struct TYPE_2__ {int tick; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_1, u8_t *VAR_2, u8_t *VAR_3)
{

    u32_t VAR_4;

    FUNC_1(VAR_1);

    VAR_4 = VAR_0->tick;






    FUNC_0(VAR_3, VAR_2, 6);
    VAR_3[0] ^= (u8_t)(VAR_4 & 0xff);
    VAR_3[0] &= ~0x01;
    VAR_3[0] |= 0x02;

    VAR_4 >>= 8;
    VAR_3[1] ^= (u8_t)(VAR_4 & 0xff);

    VAR_4 >>= 8;
    VAR_3[2] ^= (u8_t)(VAR_4 & 0xff);

    VAR_4 >>= 8;
    VAR_3[3] ^= (u8_t)(VAR_4 & 0xff);
}
