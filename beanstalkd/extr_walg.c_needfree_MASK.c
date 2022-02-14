
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* tail; } ;
typedef TYPE_2__ Wal ;
struct TYPE_5__ {int free; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(Wal *VAR_0, int VAR_1)
{
    if (VAR_0->tail->free >= VAR_1) return VAR_1;
    if (FUNC_0(VAR_0)) return VAR_1;
    return 0;
}
