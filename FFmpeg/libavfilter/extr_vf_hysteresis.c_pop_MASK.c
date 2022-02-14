
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* xy; int index; } ;
typedef TYPE_1__ HysteresisContext ;



__attribute__((used)) static void FUNC_0(HysteresisContext *VAR_0, int *VAR_1, int *VAR_2)
{
    uint32_t VAR_3 = VAR_0->xy[VAR_0->index--];

    *VAR_1 = VAR_3 >> 16;
    *VAR_2 = VAR_3 & 0x0000FFFF;
}
