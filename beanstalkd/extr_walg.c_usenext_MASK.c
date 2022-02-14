
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* cur; } ;
typedef TYPE_1__ Wal ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ File ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(Wal *VAR_0)
{
    File *VAR_1;

    VAR_1 = VAR_0->cur;
    if (!VAR_1->next) {
        FUNC_1("there is no next wal file");
        return 0;
    }

    VAR_0->cur = VAR_1->next;
    FUNC_0(VAR_1);
    return 1;
}
