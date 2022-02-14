
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SwrContext {double out_sample_rate; scalar_t__ delayed_samples_fixup; scalar_t__ flushed; scalar_t__ resample; } ;
typedef int soxr_t ;
typedef double int64_t ;


 double FUNC_0 (int ) ;

__attribute__((used)) static int64_t FUNC_1(struct SwrContext *VAR_0, int64_t VAR_1){
    double VAR_2 = FUNC_0((soxr_t)VAR_0->resample);
    double VAR_3;

    if (VAR_0->flushed)
        VAR_2 += VAR_0->delayed_samples_fixup;

    VAR_3 = VAR_2 / VAR_0->out_sample_rate;

    return (int64_t)(VAR_3 * VAR_1 + .5);
}
