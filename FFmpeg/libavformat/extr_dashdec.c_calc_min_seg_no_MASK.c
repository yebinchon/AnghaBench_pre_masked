
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct representation {int fragment_duration; int fragment_timescale; scalar_t__ first_seq_no; } ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int availability_start_time; int time_shift_buffer_depth; scalar_t__ is_live; } ;
typedef TYPE_1__ DASHContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 () ;

__attribute__((used)) static int64_t FUNC_2(AVFormatContext *VAR_1, struct representation *VAR_2)
{
    DASHContext *VAR_3 = VAR_1->priv_data;
    int64_t VAR_4 = 0;

    if (VAR_3->is_live && VAR_2->fragment_duration) {
        FUNC_0(VAR_1, VAR_0, "in live mode\n");
        VAR_4 = VAR_2->first_seq_no + (((FUNC_1() - VAR_3->availability_start_time) - VAR_3->time_shift_buffer_depth) * VAR_2->fragment_timescale) / VAR_2->fragment_duration;
    } else {
        VAR_4 = VAR_2->first_seq_no;
    }
    return VAR_4;
}
