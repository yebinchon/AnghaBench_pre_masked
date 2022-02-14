
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int index; scalar_t__ table; scalar_t__ fingerprint; TYPE_4__* d; scalar_t__ safe; } ;
typedef TYPE_1__ dictIterator ;
struct TYPE_6__ {int iterators; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(dictIterator *VAR_0)
{
    if (!(VAR_0->index == -1 && VAR_0->table == 0)) {
        if (VAR_0->safe)
            VAR_0->d->iterators--;
        else
            FUNC_0(VAR_0->fingerprint == FUNC_1(VAR_0->d));
    }
    FUNC_2(VAR_0);
}
