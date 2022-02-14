
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* low_nibble; int srcptr; } ;
typedef TYPE_1__ YopDecContext ;



__attribute__((used)) static uint8_t FUNC_0(YopDecContext *VAR_0)
{
    int VAR_1;

    if (VAR_0->low_nibble) {
        VAR_1 = *VAR_0->low_nibble & 0xf;
        VAR_0->low_nibble = ((void*)0);
    }else {
        VAR_0->low_nibble = VAR_0->srcptr++;
        VAR_1 = *VAR_0->low_nibble >> 4;
    }
    return VAR_1;
}
