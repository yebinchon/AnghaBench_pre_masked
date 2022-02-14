
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_14__ {TYPE_8__* frame; TYPE_2__** output_element; TYPE_3__*** che; } ;
struct TYPE_13__ {int channels; TYPE_5__* priv_data; } ;
struct TYPE_12__ {TYPE_1__* ch; } ;
struct TYPE_11__ {int * ret; } ;
struct TYPE_10__ {int ret_buf; int ret; } ;
typedef int INTFLOAT ;
typedef TYPE_3__ ChannelElement ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ AACContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_8__*,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1)
{
    AACContext *VAR_2 = VAR_1->priv_data;
    int VAR_3, VAR_4, VAR_5, VAR_6;


    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
            ChannelElement *VAR_7 = VAR_2->che[VAR_3][VAR_4];
            if (VAR_7) {
                VAR_7->ch[0].ret = VAR_7->ch[0].ret_buf;
                VAR_7->ch[1].ret = VAR_7->ch[1].ret_buf;
            }
        }
    }


    FUNC_0(VAR_2->frame);
    if (!VAR_1->channels)
        return 1;

    VAR_2->frame->nb_samples = 2048;
    if ((VAR_6 = FUNC_1(VAR_1, VAR_2->frame, 0)) < 0)
        return VAR_6;


    for (VAR_5 = 0; VAR_5 < VAR_1->channels; VAR_5++) {
        if (VAR_2->output_element[VAR_5])
            VAR_2->output_element[VAR_5]->ret = (INTFLOAT *)VAR_2->frame->extended_data[VAR_5];
    }

    return 0;
}
