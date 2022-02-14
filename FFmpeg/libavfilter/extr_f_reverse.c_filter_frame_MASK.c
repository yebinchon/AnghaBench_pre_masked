
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {TYPE_4__* dst; } ;
struct TYPE_9__ {struct TYPE_9__* pts; } ;
struct TYPE_8__ {int nb_frames; int pts_size; int frames_size; TYPE_2__** pts; TYPE_2__** frames; } ;
typedef TYPE_1__ ReverseContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (TYPE_2__**,int*,int) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    ReverseContext *VAR_4 = VAR_3->priv;
    void *VAR_5;

    if (VAR_4->nb_frames + 1 > VAR_4->pts_size / sizeof(*(VAR_4->pts))) {
        VAR_5 = FUNC_1(VAR_4->pts, &VAR_4->pts_size, VAR_4->pts_size * 2);
        if (!VAR_5)
            return FUNC_0(VAR_0);
        VAR_4->pts = VAR_5;
    }

    if (VAR_4->nb_frames + 1 > VAR_4->frames_size / sizeof(*(VAR_4->frames))) {
        VAR_5 = FUNC_1(VAR_4->frames, &VAR_4->frames_size, VAR_4->frames_size * 2);
        if (!VAR_5)
            return FUNC_0(VAR_0);
        VAR_4->frames = VAR_5;
    }

    VAR_4->frames[VAR_4->nb_frames] = VAR_2;
    VAR_4->pts[VAR_4->nb_frames] = VAR_2->pts;
    VAR_4->nb_frames++;

    return 0;
}
