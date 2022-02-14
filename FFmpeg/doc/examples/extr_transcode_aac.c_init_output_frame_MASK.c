
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int sample_rate; int sample_fmt; int channel_layout; } ;
struct TYPE_8__ {int nb_samples; int sample_rate; int format; int channel_layout; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(AVFrame **VAR_2,
                             AVCodecContext *VAR_3,
                             int VAR_4)
{
    int VAR_5;


    if (!(*VAR_2 = FUNC_1())) {
        FUNC_4(VAR_1, "Could not allocate output frame\n");
        return VAR_0;
    }






    (*VAR_2)->nb_samples = VAR_4;
    (*VAR_2)->channel_layout = VAR_3->channel_layout;
    (*VAR_2)->format = VAR_3->sample_fmt;
    (*VAR_2)->sample_rate = VAR_3->sample_rate;



    if ((VAR_5 = FUNC_3(*VAR_2, 0)) < 0) {
        FUNC_4(VAR_1, "Could not allocate output frame samples (error '%s')\n",
                FUNC_0(VAR_5));
        FUNC_2(VAR_2);
        return VAR_5;
    }

    return 0;
}
