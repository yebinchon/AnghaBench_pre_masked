
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int metric_length; } ;
struct TYPE_5__ {int flags; scalar_t__ buffer; int* diffs; int breaks; struct TYPE_5__* next; } ;
typedef TYPE_1__ PullupField ;
typedef TYPE_2__ PullupContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(PullupContext *VAR_3, PullupField *VAR_4)
{
    PullupField *VAR_5 = VAR_4->next;
    PullupField *VAR_6 = VAR_5->next;
    PullupField *VAR_7 = VAR_6->next;
    int VAR_8, VAR_9, VAR_10 = 0, VAR_11 = 0;

    if (VAR_4->flags & VAR_2)
        return;

    VAR_4->flags |= VAR_2;


    if (VAR_4->buffer == VAR_6->buffer && VAR_5->buffer != VAR_7->buffer) {
        VAR_6->breaks |= VAR_1;
        return;
    }

    if (VAR_4->buffer != VAR_6->buffer && VAR_5->buffer == VAR_7->buffer) {
        VAR_5->breaks |= VAR_0;
        return;
    }

    for (VAR_8 = 0; VAR_8 < VAR_3->metric_length; VAR_8++) {
        VAR_9 = VAR_6->diffs[VAR_8] - VAR_7->diffs[VAR_8];

        if ( VAR_9 > VAR_10)
            VAR_10 = VAR_9;
        if (-VAR_9 > VAR_11)
            VAR_11 = -VAR_9;
    }


    if (VAR_10 + VAR_11 < 128)
        return;
    if (VAR_10 > 4 * VAR_11)
        VAR_5->breaks |= VAR_0;
    if (VAR_11 > 4 * VAR_10)
        VAR_6->breaks |= VAR_1;
}
