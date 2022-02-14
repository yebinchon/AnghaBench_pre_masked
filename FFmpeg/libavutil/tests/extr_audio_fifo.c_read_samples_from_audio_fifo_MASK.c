
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int channels; int nb_buffers; int sample_size; int sample_fmt; int nb_samples; } ;
typedef TYPE_1__ AVAudioFifo ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,void**,int) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,void**) ;

__attribute__((used)) static int FUNC_6(AVAudioFifo* VAR_0, void ***VAR_1, int VAR_2)
{
    int VAR_3;
    int VAR_4 = FUNC_1(VAR_2, VAR_0->nb_samples);
    int VAR_5 = !FUNC_4(VAR_0->sample_fmt)
                         ? VAR_4 : VAR_0->channels * VAR_4;
    void **VAR_6 = FUNC_3(VAR_0->nb_buffers, sizeof(void*));
    if (!VAR_6)
        FUNC_0("failed to allocate memory!");
    if (*VAR_1)
        FUNC_5(VAR_0, *VAR_1);
    *VAR_1 = VAR_6;

    for (VAR_3 = 0; VAR_3 < VAR_0->nb_buffers; ++VAR_3){
        VAR_6[VAR_3] = FUNC_3(VAR_5, VAR_0->sample_size);
        if (!VAR_6[VAR_3])
            FUNC_0("failed to allocate memory!");
    }

    return FUNC_2(VAR_0, *VAR_1, VAR_2);
}
