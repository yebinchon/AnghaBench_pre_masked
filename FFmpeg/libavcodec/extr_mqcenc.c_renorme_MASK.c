
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int ct; scalar_t__ c; } ;
typedef TYPE_1__ MqcState ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(MqcState *VAR_0)
{
    do{
        VAR_0->a += VAR_0->a;
        VAR_0->c += VAR_0->c;
        if (!--VAR_0->ct)
            FUNC_0(VAR_0);
    } while (!(VAR_0->a & 0x8000));
}
