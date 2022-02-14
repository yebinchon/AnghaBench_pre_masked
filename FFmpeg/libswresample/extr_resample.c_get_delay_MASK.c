
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SwrContext {int in_buffer_count; int in_sample_rate; TYPE_1__* resample; } ;
typedef int int64_t ;
struct TYPE_2__ {int filter_length; int phase_count; int src_incr; scalar_t__ frac; scalar_t__ index; } ;
typedef TYPE_1__ ResampleContext ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int64_t FUNC_1(struct SwrContext *VAR_0, int64_t VAR_1){
    ResampleContext *VAR_2 = VAR_0->resample;
    int64_t VAR_3 = VAR_0->in_buffer_count - (VAR_2->filter_length-1)/2;
    VAR_3 *= VAR_2->phase_count;
    VAR_3 -= VAR_2->index;
    VAR_3 *= VAR_2->src_incr;
    VAR_3 -= VAR_2->frac;
    return FUNC_0(VAR_3, VAR_1, VAR_0->in_sample_rate*(int64_t)VAR_2->src_incr * VAR_2->phase_count);
}
