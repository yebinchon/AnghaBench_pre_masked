
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__** outputs; TYPE_2__* priv; } ;
struct TYPE_9__ {int channels; int channel_layout; int sample_rate; int sample_fmt; int pix_fmt; } ;
struct TYPE_8__ {int type; } ;
typedef TYPE_2__ BufferSourceContext ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_1)
{
    BufferSourceContext *VAR_2 = VAR_1->priv;
    AVFilterChannelLayouts *VAR_3 = ((void*)0);
    AVFilterFormats *VAR_4 = ((void*)0);
    AVFilterFormats *VAR_5 = ((void*)0);
    int VAR_6;

    switch (VAR_1->outputs[0]->type) {
    case 128:
        if ((VAR_6 = FUNC_3 (&VAR_4, VAR_2->pix_fmt)) < 0 ||
            (VAR_6 = FUNC_5 (VAR_1 , VAR_4 )) < 0)
            return VAR_6;
        break;
    case 129:
        if ((VAR_6 = FUNC_3 (&VAR_4 , VAR_2->sample_fmt )) < 0 ||
            (VAR_6 = FUNC_5 (VAR_1 , VAR_4 )) < 0 ||
            (VAR_6 = FUNC_3 (&VAR_5, VAR_2->sample_rate)) < 0 ||
            (VAR_6 = FUNC_6 (VAR_1 , VAR_5 )) < 0)
            return VAR_6;

        if ((VAR_6 = FUNC_2(&VAR_3,
                              VAR_2->channel_layout ? VAR_2->channel_layout :
                              FUNC_1(VAR_2->channels))) < 0)
            return VAR_6;
        if ((VAR_6 = FUNC_4(VAR_1, VAR_3)) < 0)
            return VAR_6;
        break;
    default:
        return FUNC_0(VAR_0);
    }

    return 0;
}
