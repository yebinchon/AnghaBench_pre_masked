
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ remap_point; int ch_map_info; int out_fifo; } ;
struct TYPE_11__ {scalar_t__ allocated_samples; scalar_t__ nb_samples; int name; } ;
typedef TYPE_1__ AudioData ;
typedef TYPE_2__ AVAudioResampleContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,char*,...) ;
 int FUNC_2 (int ,TYPE_1__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_4 (int ,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(AVAudioResampleContext *VAR_2,
                                  AudioData *VAR_3, AudioData *VAR_4)
{
    int VAR_5;

    if (!VAR_3 || FUNC_0(VAR_2->out_fifo) > 0 ||
        (VAR_4 && VAR_3->allocated_samples < VAR_4->nb_samples)) {
        if (VAR_4) {



            FUNC_1(VAR_2, VAR_0, "[FIFO] add %s to out_fifo\n", VAR_4->name);
            VAR_5 = FUNC_2(VAR_2->out_fifo, VAR_4, 0,
                                            VAR_4->nb_samples);
            if (VAR_5 < 0)
                return VAR_5;
        }



        if (VAR_3 && VAR_3->allocated_samples > 0) {
            FUNC_1(VAR_2, VAR_0, "[FIFO] read from out_fifo to output\n");
            FUNC_1(VAR_2, VAR_0, "[end conversion]\n");
            return FUNC_4(VAR_2->out_fifo, VAR_3,
                                                VAR_3->allocated_samples);
        }
    } else if (VAR_4) {


        FUNC_1(VAR_2, VAR_0, "[copy] %s to output\n", VAR_4->name);
        VAR_3->nb_samples = 0;
        VAR_5 = FUNC_3(VAR_3, VAR_4,
                                 VAR_2->remap_point == VAR_1 ?
                                 &VAR_2->ch_map_info : ((void*)0));
        if (VAR_5 < 0)
            return VAR_5;
        FUNC_1(VAR_2, VAR_0, "[end conversion]\n");
        return VAR_3->nb_samples;
    }
    FUNC_1(VAR_2, VAR_0, "[end conversion]\n");
    return 0;
}
