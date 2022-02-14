
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mpc_uint32_t ;
struct TYPE_3__ {int __r1; int __r2; } ;
typedef TYPE_1__ mpc_decoder ;


 int* VAR_0 ;

mpc_uint32_t
FUNC_0(mpc_decoder* VAR_1)
{

    mpc_uint32_t VAR_2, VAR_3, VAR_4, VAR_5;

    VAR_4 = VAR_2 = VAR_1->__r1; VAR_5 = VAR_3 = VAR_1->__r2;
    VAR_2 &= 0xF5; VAR_3 >>= 25;
    VAR_2 = VAR_0[VAR_2]; VAR_3 &= 0x63;
    VAR_2 <<= 31; VAR_3 = VAR_0[VAR_3];

    return (VAR_1->__r1 = (VAR_4 >> 1) | VAR_2 ) ^ (VAR_1->__r2 = (VAR_5 + VAR_5) | VAR_3 );




}
