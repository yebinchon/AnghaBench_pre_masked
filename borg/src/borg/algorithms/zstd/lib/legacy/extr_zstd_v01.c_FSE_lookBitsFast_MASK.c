
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int const bitContainer; int const bitsConsumed; } ;
typedef TYPE_1__ FSE_DStream_t ;



__attribute__((used)) static size_t FUNC_0(FSE_DStream_t* VAR_0, U32 VAR_1)
{
    const U32 VAR_2 = sizeof(VAR_0->bitContainer)*8 - 1;
    return (VAR_0->bitContainer << (VAR_0->bitsConsumed & VAR_2)) >> (((VAR_2+1)-VAR_1) & VAR_2);
}
