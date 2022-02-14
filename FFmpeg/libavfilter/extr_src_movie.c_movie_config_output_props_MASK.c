
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int codec_type; int height; int width; } ;
struct TYPE_13__ {TYPE_3__* priv; } ;
struct TYPE_12__ {int frame_rate; int h; int w; int time_base; TYPE_5__* src; } ;
struct TYPE_11__ {TYPE_2__* st; } ;
struct TYPE_10__ {TYPE_1__* st; } ;
struct TYPE_9__ {int r_frame_rate; int time_base; TYPE_6__* codecpar; } ;
typedef TYPE_2__ MovieStream ;
typedef TYPE_3__ MovieContext ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;
typedef TYPE_6__ AVCodecParameters ;




 unsigned int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->src;
    MovieContext *VAR_2 = VAR_1->priv;
    unsigned VAR_3 = FUNC_0(VAR_0);
    MovieStream *VAR_4 = &VAR_2->st[VAR_3];
    AVCodecParameters *VAR_5 = VAR_4->st->codecpar;

    VAR_0->time_base = VAR_4->st->time_base;

    switch (VAR_5->codec_type) {
    case 128:
        VAR_0->w = VAR_5->width;
        VAR_0->h = VAR_5->height;
        VAR_0->frame_rate = VAR_4->st->r_frame_rate;
        break;
    case 129:
        break;
    }

    return 0;
}
