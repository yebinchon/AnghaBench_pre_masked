
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sample_rate; int format; int channel_layout; } ;
typedef int SwrContext ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(SwrContext *VAR_2, const AVFrame *VAR_3, const AVFrame *VAR_4)
{
    FUNC_3(VAR_2);

    if (VAR_4) {
        if (FUNC_2(VAR_2, "icl", VAR_4->channel_layout, 0) < 0)
            goto fail;
        if (FUNC_2(VAR_2, "isf", VAR_4->format, 0) < 0)
            goto fail;
        if (FUNC_2(VAR_2, "isr", VAR_4->sample_rate, 0) < 0)
            goto fail;
    }

    if (VAR_3) {
        if (FUNC_2(VAR_2, "ocl", VAR_3->channel_layout, 0) < 0)
            goto fail;
        if (FUNC_2(VAR_2, "osf", VAR_3->format, 0) < 0)
            goto fail;
        if (FUNC_2(VAR_2, "osr", VAR_3->sample_rate, 0) < 0)
            goto fail;
    }

    return 0;
fail:
    FUNC_1(VAR_2, VAR_0, "Failed to set option\n");
    return FUNC_0(VAR_1);
}
