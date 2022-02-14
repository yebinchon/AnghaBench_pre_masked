
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int metric_length; } ;
struct TYPE_11__ {int flags; scalar_t__ buffer; int affinity; int* vars; int* combs; TYPE_3__* next; TYPE_2__* prev; } ;
struct TYPE_10__ {int flags; int* vars; int* combs; TYPE_1__* next; scalar_t__ affinity; } ;
struct TYPE_9__ {int* vars; } ;
struct TYPE_8__ {scalar_t__ buffer; int affinity; int flags; } ;
typedef TYPE_4__ PullupField ;
typedef TYPE_5__ PullupContext ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(PullupContext *VAR_1, PullupField *VAR_2)
{
    int VAR_3, VAR_4 = 0, VAR_5 = 0, VAR_6;

    if (VAR_2->flags & VAR_0)
        return;

    VAR_2->flags |= VAR_0;

    if (VAR_2->buffer == VAR_2->next->next->buffer) {
        VAR_2->affinity = 1;
        VAR_2->next->affinity = 0;
        VAR_2->next->next->affinity = -1;
        VAR_2->next->flags |= VAR_0;
        VAR_2->next->next->flags |= VAR_0;
        return;
    }

    for (VAR_3 = 0; VAR_3 < VAR_1->metric_length; VAR_3++) {
        int VAR_7 = VAR_2->vars[VAR_3];
        int VAR_8 = VAR_2->prev->vars[VAR_3];
        int VAR_9 = VAR_2->next->vars[VAR_3];
        int VAR_10 = VAR_2-> combs[VAR_3] - 2*(VAR_7 < VAR_8 ? VAR_7 : VAR_8);
        int VAR_11 = VAR_2->next->combs[VAR_3] - 2*(VAR_7 < VAR_9 ? VAR_7 : VAR_9);

        VAR_10 = FUNC_0(VAR_10, 0);
        VAR_11 = FUNC_0(VAR_11, 0);
        VAR_6 = VAR_10 - VAR_11;

        if ( VAR_6 > VAR_4)
            VAR_4 = VAR_6;
        if (-VAR_6 > VAR_5)
            VAR_5 = -VAR_6;
    }

    if (VAR_4 + VAR_5 < 64)
        return;

    if (VAR_5 > 6 * VAR_4)
        VAR_2->affinity = -1;
    else if (VAR_4 > 6 * VAR_5)
        VAR_2->affinity = 1;
}
