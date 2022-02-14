
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int c; } ;
typedef TYPE_1__ MqcState ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(MqcState *VAR_0) {
    int VAR_1 = !(VAR_0->c & 0x40000000);
    if (!(VAR_0->c & 0xff)) {
        VAR_0->c -= 0x100;
        FUNC_0(VAR_0);
    }
    VAR_0->c += VAR_0->c;
    return VAR_1;
}
