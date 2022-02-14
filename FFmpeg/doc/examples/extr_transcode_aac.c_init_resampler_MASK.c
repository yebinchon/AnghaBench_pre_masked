
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sample_rate; int sample_fmt; int channels; } ;
typedef int SwrContext ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int * FUNC_4 (int *,int ,int ,scalar_t__,int ,int ,scalar_t__,int ,int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_2,
                          AVCodecContext *VAR_3,
                          SwrContext **VAR_4)
{
        int VAR_5;
        *VAR_4 = FUNC_4(((void*)0),
                                              FUNC_2(VAR_3->channels),
                                              VAR_3->sample_fmt,
                                              VAR_3->sample_rate,
                                              FUNC_2(VAR_2->channels),
                                              VAR_2->sample_fmt,
                                              VAR_2->sample_rate,
                                              0, ((void*)0));
        if (!*VAR_4) {
            FUNC_3(VAR_1, "Could not allocate resample context\n");
            return FUNC_0(VAR_0);
        }





        FUNC_1(VAR_3->sample_rate == VAR_2->sample_rate);


        if ((VAR_5 = FUNC_6(*VAR_4)) < 0) {
            FUNC_3(VAR_1, "Could not open resample context\n");
            FUNC_5(VAR_4);
            return VAR_5;
        }
    return 0;
}
