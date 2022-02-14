
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ duration; int nb_frame; int pts; int (* fill_picture_fn ) (TYPE_4__*,TYPE_2__*) ;scalar_t__ draw_once; int sar; int h; int w; TYPE_2__* picref; scalar_t__ draw_once_reset; int time_base; } ;
typedef TYPE_1__ TestSourceContext ;
struct TYPE_18__ {TYPE_1__* priv; } ;
struct TYPE_17__ {TYPE_4__* src; } ;
struct TYPE_16__ {int key_frame; int sample_aspect_ratio; int pict_type; scalar_t__ interlaced_frame; int pts; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 void* FUNC_5 (TYPE_3__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_4)
{
    TestSourceContext *VAR_5 = VAR_4->src->priv;
    AVFrame *VAR_6;

    if (VAR_5->duration >= 0 &&
        FUNC_3(VAR_5->pts, VAR_5->time_base, VAR_2) >= VAR_5->duration)
        return VAR_0;

    if (VAR_5->draw_once) {
        if (VAR_5->draw_once_reset) {
            FUNC_2(&VAR_5->picref);
            VAR_5->draw_once_reset = 0;
        }
        if (!VAR_5->picref) {
            VAR_5->picref =
                FUNC_5(VAR_4, VAR_5->w, VAR_5->h);
            if (!VAR_5->picref)
                return FUNC_0(VAR_3);
            VAR_5->fill_picture_fn(VAR_4->src, VAR_5->picref);
        }
        VAR_6 = FUNC_1(VAR_5->picref);
    } else
        VAR_6 = FUNC_5(VAR_4, VAR_5->w, VAR_5->h);

    if (!VAR_6)
        return FUNC_0(VAR_3);
    VAR_6->pts = VAR_5->pts;
    VAR_6->key_frame = 1;
    VAR_6->interlaced_frame = 0;
    VAR_6->pict_type = VAR_1;
    VAR_6->sample_aspect_ratio = VAR_5->sar;
    if (!VAR_5->draw_once)
        VAR_5->fill_picture_fn(VAR_4->src, VAR_6);

    VAR_5->pts++;
    VAR_5->nb_frame++;

    return FUNC_4(VAR_4, VAR_6);
}
