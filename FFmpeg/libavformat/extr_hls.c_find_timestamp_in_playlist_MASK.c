
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct playlist {int start_seq_no; int n_segments; TYPE_1__** segments; } ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {scalar_t__ first_timestamp; } ;
struct TYPE_4__ {scalar_t__ duration; } ;
typedef TYPE_2__ HLSContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(HLSContext *VAR_1, struct playlist *VAR_2,
                                      int64_t VAR_3, int *VAR_4)
{
    int VAR_5;
    int64_t VAR_6 = VAR_1->first_timestamp == VAR_0 ?
                  0 : VAR_1->first_timestamp;

    if (VAR_3 < VAR_6) {
        *VAR_4 = VAR_2->start_seq_no;
        return 0;
    }

    for (VAR_5 = 0; VAR_5 < VAR_2->n_segments; VAR_5++) {
        int64_t VAR_7 = VAR_6 + VAR_2->segments[VAR_5]->duration - VAR_3;
        if (VAR_7 > 0) {
            *VAR_4 = VAR_2->start_seq_no + VAR_5;
            return 1;
        }
        VAR_6 += VAR_2->segments[VAR_5]->duration;
    }

    *VAR_4 = VAR_2->start_seq_no + VAR_2->n_segments - 1;

    return 0;
}
