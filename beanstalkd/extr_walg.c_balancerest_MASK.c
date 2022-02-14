
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* tail; } ;
typedef TYPE_1__ Wal ;
struct TYPE_9__ {int resv; int free; struct TYPE_9__* next; } ;
typedef int Jobrec ;
typedef TYPE_2__ File ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(Wal *VAR_0, File *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    static const int VAR_6 = sizeof(int) + sizeof(Jobrec);

    if (!VAR_1) return 1;

    VAR_3 = VAR_1->resv - VAR_2;
    VAR_5 = VAR_3 % VAR_6;
    if (VAR_5 == 0) return FUNC_3(VAR_0, VAR_1->next, 0);

    VAR_4 = VAR_6 - VAR_5;
    if (VAR_0->tail->resv >= VAR_4 && VAR_1->free >= VAR_4) {
        FUNC_0(VAR_1, VAR_0->tail, VAR_4);
        return FUNC_3(VAR_0, VAR_1->next, 0);
    }

    if (FUNC_1(VAR_0, VAR_5) != VAR_5) {
        FUNC_2("needfree");
        return 0;
    }
    FUNC_0(VAR_0->tail, VAR_1, VAR_5);
    return FUNC_3(VAR_0, VAR_1->next, 0);
}
