
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct representation {int n_fragments; int first_seq_no; int n_timelines; int fragment_timescale; int fragment_duration; TYPE_1__** timelines; } ;
typedef int int64_t ;
struct TYPE_5__ {int period_duration; int availability_start_time; int media_presentation_duration; scalar_t__ is_live; } ;
struct TYPE_4__ {int repeat; int duration; } ;
typedef TYPE_2__ DASHContext ;


 int FUNC_0 () ;

__attribute__((used)) static int64_t FUNC_1(struct representation *VAR_0, DASHContext *VAR_1)
{
    int64_t VAR_2 = 0;

    if (VAR_0->n_fragments) {
        VAR_2 = VAR_0->first_seq_no + VAR_0->n_fragments - 1;
    } else if (VAR_0->n_timelines) {
        int VAR_3 = 0;
        VAR_2 = VAR_0->first_seq_no + VAR_0->n_timelines - 1;
        for (VAR_3 = 0; VAR_3 < VAR_0->n_timelines; VAR_3++) {
            if (VAR_0->timelines[VAR_3]->repeat == -1) {
                int VAR_4 = VAR_0->timelines[VAR_3]->duration / VAR_0->fragment_timescale;
                VAR_2 = VAR_1->period_duration / VAR_4;
            } else {
                VAR_2 += VAR_0->timelines[VAR_3]->repeat;
            }
        }
    } else if (VAR_1->is_live && VAR_0->fragment_duration) {
        VAR_2 = VAR_0->first_seq_no + (((FUNC_0() - VAR_1->availability_start_time)) * VAR_0->fragment_timescale) / VAR_0->fragment_duration;
    } else if (VAR_0->fragment_duration) {
        VAR_2 = VAR_0->first_seq_no + (VAR_1->media_presentation_duration * VAR_0->fragment_timescale) / VAR_0->fragment_duration;
    }

    return VAR_2;
}
