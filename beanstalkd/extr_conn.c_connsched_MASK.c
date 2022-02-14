
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int in_conns; TYPE_1__* srv; scalar_t__ tickat; int tickpos; } ;
struct TYPE_6__ {int conns; } ;
typedef TYPE_2__ Conn ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(Conn *VAR_0)
{
    if (VAR_0->in_conns) {
        FUNC_2(&VAR_0->srv->conns, VAR_0->tickpos);
        VAR_0->in_conns = 0;
    }
    VAR_0->tickat = FUNC_0(VAR_0);
    if (VAR_0->tickat) {
        FUNC_1(&VAR_0->srv->conns, VAR_0);
        VAR_0->in_conns = 1;
    }
}
