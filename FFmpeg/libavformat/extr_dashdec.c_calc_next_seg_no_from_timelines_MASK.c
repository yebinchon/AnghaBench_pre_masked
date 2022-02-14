
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct representation {size_t n_timelines; TYPE_1__** timelines; } ;
typedef size_t int64_t ;
struct TYPE_2__ {scalar_t__ starttime; size_t duration; size_t repeat; } ;



__attribute__((used)) static int64_t FUNC_0(struct representation *VAR_0, int64_t VAR_1)
{
    int64_t VAR_2 = 0;
    int64_t VAR_3 = 0;
    int64_t VAR_4 = 0;
    int64_t VAR_5 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_0->n_timelines; VAR_2++) {
        if (VAR_0->timelines[VAR_2]->starttime > 0) {
            VAR_5 = VAR_0->timelines[VAR_2]->starttime;
        }
        if (VAR_5 > VAR_1)
            goto finish;

        VAR_5 += VAR_0->timelines[VAR_2]->duration;
        for (VAR_3 = 0; VAR_3 < VAR_0->timelines[VAR_2]->repeat; VAR_3++) {
            VAR_4++;
            if (VAR_5 > VAR_1)
                goto finish;
            VAR_5 += VAR_0->timelines[VAR_2]->duration;
        }
        VAR_4++;
    }

    return -1;

finish:
    return VAR_4;
}
