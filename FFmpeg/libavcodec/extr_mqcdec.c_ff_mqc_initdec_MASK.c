
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int raw; int* bp; int c; int a; } ;
typedef TYPE_1__ MqcState ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(MqcState *VAR_0, uint8_t *VAR_1, int VAR_2, int VAR_3)
{
    VAR_0->raw = VAR_2;
    if (VAR_3)
        FUNC_1(VAR_0);
    VAR_0->bp = VAR_1;
    VAR_0->c = (*VAR_0->bp ^ 0xff) << 16;
    FUNC_0(VAR_0);
    VAR_0->c = VAR_0->c << 7;
    VAR_0->a = 0x8000;
}
