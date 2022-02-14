
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_5__ {int a; int c; scalar_t__ raw; } ;
typedef TYPE_1__ MqcState ;


 int FUNC_0 (TYPE_1__*,size_t*,int) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(MqcState *VAR_1, uint8_t *VAR_2)
{
    if (VAR_1->raw)
        return FUNC_1(VAR_1);
    VAR_1->a -= VAR_0[*VAR_2];
    if ((VAR_1->c >> 16) < VAR_1->a) {
        if (VAR_1->a & 0x8000)
            return *VAR_2 & 1;
        else
            return FUNC_0(VAR_1, VAR_2, 0);
    } else {
        VAR_1->c -= VAR_1->a << 16;
        return FUNC_0(VAR_1, VAR_2, 1);
    }
}
