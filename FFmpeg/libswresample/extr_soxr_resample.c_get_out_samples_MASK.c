
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SwrContext {double in_sample_rate; scalar_t__ delayed_samples_fixup; scalar_t__ flushed; scalar_t__ resample; scalar_t__ out_sample_rate; } ;
typedef int soxr_t ;
typedef int int64_t ;


 double FUNC_0 (int ) ;

__attribute__((used)) static int64_t FUNC_1(struct SwrContext *VAR_0, int VAR_1){
    double VAR_2 = (double)VAR_0->out_sample_rate / VAR_0->in_sample_rate * VAR_1;
    double VAR_3 = FUNC_0((soxr_t)VAR_0->resample);

    if (VAR_0->flushed)
        VAR_3 += VAR_0->delayed_samples_fixup;

    return (int64_t)(VAR_2 + VAR_3 + 1 + .5);
}
