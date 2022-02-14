
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SwrContext {scalar_t__ resample; scalar_t__ delayed_samples_fixup; } ;
typedef int soxr_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,float*,int ,size_t*,float*,int ,size_t*) ;

__attribute__((used)) static int FUNC_2(struct SwrContext *VAR_0){
    VAR_0->delayed_samples_fixup = FUNC_0((soxr_t)VAR_0->resample);

    FUNC_1((soxr_t)VAR_0->resample, ((void*)0), 0, ((void*)0), ((void*)0), 0, ((void*)0));

    {
        float VAR_1;
        size_t VAR_2, VAR_3;
        FUNC_1((soxr_t)VAR_0->resample, &VAR_1, 0, &VAR_2, &VAR_1, 0, &VAR_3);
        VAR_0->delayed_samples_fixup -= FUNC_0((soxr_t)VAR_0->resample);
    }

    return 0;
}
