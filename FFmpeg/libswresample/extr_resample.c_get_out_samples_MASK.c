
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SwrContext {int in_buffer_count; scalar_t__ in_sample_rate; int out_sample_rate; TYPE_1__* resample; } ;
typedef int int64_t ;
struct TYPE_2__ {int phase_count; int ideal_dst_incr; int dst_incr; scalar_t__ compensation_distance; scalar_t__ index; } ;
typedef TYPE_1__ ResampleContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 (int,int ,int,int ) ;

__attribute__((used)) static int64_t FUNC_3(struct SwrContext *VAR_3, int VAR_4) {
    ResampleContext *VAR_5 = VAR_3->resample;



    int64_t VAR_6 = VAR_3->in_buffer_count + 2LL + VAR_4;
    VAR_6 *= VAR_5->phase_count;
    VAR_6 -= VAR_5->index;
    VAR_6 = FUNC_2(VAR_6, VAR_3->out_sample_rate, ((int64_t)VAR_3->in_sample_rate) * VAR_5->phase_count, VAR_0) + 2;

    if (VAR_5->compensation_distance) {
        if (VAR_6 > VAR_2)
            return FUNC_0(VAR_1);

        VAR_6 = FUNC_1(VAR_6, (VAR_6 * VAR_5->ideal_dst_incr - 1) / VAR_5->dst_incr + 1);
    }
    return VAR_6;
}
