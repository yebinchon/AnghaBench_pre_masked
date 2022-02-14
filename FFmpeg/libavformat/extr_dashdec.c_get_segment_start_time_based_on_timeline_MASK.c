
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct representation {size_t n_timelines; TYPE_1__** timelines; } ;
typedef size_t int64_t ;
struct TYPE_2__ {scalar_t__ starttime; size_t duration; int repeat; } ;



__attribute__((used)) static int64_t FUNC_0(struct representation *VAR_0, int64_t VAR_1)
{
    int64_t VAR_2 = 0;
    int64_t VAR_3 = 0;
    int64_t VAR_4 = 0;
    int64_t VAR_5 = 0;

    if (VAR_0->n_timelines) {
        for (VAR_3 = 0; VAR_3 < VAR_0->n_timelines; VAR_3++) {
            if (VAR_0->timelines[VAR_3]->starttime > 0) {
                VAR_2 = VAR_0->timelines[VAR_3]->starttime;
            }
            if (VAR_5 == VAR_1)
                goto finish;

            VAR_2 += VAR_0->timelines[VAR_3]->duration;

            if (VAR_0->timelines[VAR_3]->repeat == -1) {
                VAR_2 = VAR_0->timelines[VAR_3]->duration * VAR_1;
                goto finish;
            }

            for (VAR_4 = 0; VAR_4 < VAR_0->timelines[VAR_3]->repeat; VAR_4++) {
                VAR_5++;
                if (VAR_5 == VAR_1)
                    goto finish;
                VAR_2 += VAR_0->timelines[VAR_3]->duration;
            }
            VAR_5++;
        }
    }
finish:
    return VAR_2;
}
