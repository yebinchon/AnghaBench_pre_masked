
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* data; } ;
struct TYPE_7__ {TYPE_3__* data; } ;
struct TYPE_9__ {int waiting_conns; TYPE_2__ delay; TYPE_1__ ready; } ;
typedef TYPE_3__ Tube ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(Tube *VAR_1)
{
    FUNC_2(&VAR_0, VAR_1);
    FUNC_0(VAR_1->ready.data);
    FUNC_0(VAR_1->delay.data);
    FUNC_1(&VAR_1->waiting_conns);
    FUNC_0(VAR_1);
}
