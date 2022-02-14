
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int a; int* bp; int* bpstart; int ct; scalar_t__ c; } ;
typedef TYPE_1__ MqcState ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(MqcState *VAR_0, uint8_t *VAR_1)
{
    FUNC_0(VAR_0);
    VAR_0->a = 0x8000;
    VAR_0->c = 0;
    VAR_0->bp = VAR_1-1;
    VAR_0->bpstart = VAR_1;
    VAR_0->ct = 12 + (*VAR_0->bp == 0xff);
}
