
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* bp; scalar_t__ c; } ;
typedef TYPE_1__ MqcState ;



__attribute__((used)) static void FUNC_0(MqcState *VAR_0)
{
    if (*VAR_0->bp == 0xff) {
        if (*(VAR_0->bp + 1) > 0x8f)
            VAR_0->c++;
        else {
            VAR_0->bp++;
            VAR_0->c += 2 + 0xfe00 - (*VAR_0->bp << 9);
        }
    } else {
        VAR_0->bp++;
        VAR_0->c += 1 + 0xff00 - (*VAR_0->bp << 8);
    }
}
