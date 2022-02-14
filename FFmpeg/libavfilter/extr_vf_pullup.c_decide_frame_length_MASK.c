
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ strict_breaks; int strict_pairs; int last; TYPE_2__* first; } ;
struct TYPE_12__ {int affinity; int breaks; TYPE_1__* prev; struct TYPE_12__* next; } ;
struct TYPE_11__ {int breaks; } ;
typedef TYPE_2__ PullupField ;
typedef TYPE_3__ PullupContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(PullupContext *VAR_2)
{
    PullupField *VAR_3 = VAR_2->first;
    PullupField *VAR_4 = VAR_3->next;
    PullupField *VAR_5 = VAR_4->next;
    PullupField *VAR_6;
    int VAR_7, VAR_8, VAR_9;

    if (FUNC_3(VAR_2->first, VAR_2->last) < 4)
        return 0;

    VAR_6 = VAR_2->first;
    VAR_9 = FUNC_3(VAR_6, VAR_2->last);
    for (VAR_7 = 0; VAR_7 < VAR_9 - 1; VAR_7++) {
        if (VAR_7 < VAR_9 - 3)
            FUNC_1(VAR_2, VAR_6);

        FUNC_0(VAR_2, VAR_6);

        VAR_6 = VAR_6->next;
    }

    if (VAR_3->affinity == -1)
        return 1;

    VAR_8 = FUNC_2(VAR_3, 3);

    if (VAR_8 == 1 && VAR_2->strict_breaks < 0)
        VAR_8 = 0;

    switch (VAR_8) {
    case 1:
        return 1 + (VAR_2->strict_breaks < 1 && VAR_3->affinity == 1 && VAR_4->affinity == -1);
    case 2:

        if (VAR_2->strict_pairs
            && (VAR_3->prev->breaks & VAR_1) && (VAR_5->breaks & VAR_0)
            && (VAR_3->affinity != 1 || VAR_4->affinity != -1) )
            return 1;
        return 1 + (VAR_4->affinity != 1);
    case 3:
        return 2 + (VAR_5->affinity != 1);
    default:

        if (VAR_4->affinity == 1)
            return 1;
        else if (VAR_4->affinity == -1)
            return 2;
        else if (VAR_5->affinity == -1) {
            return (VAR_3->affinity == 1) ? 3 : 1;
        } else {
            return 2;
        }
    }
}
