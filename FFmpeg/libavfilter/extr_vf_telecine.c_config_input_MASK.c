
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int out_cnt; int nb_planes; int * planeheight; int stride; void** frame; void* temp; } ;
typedef TYPE_2__ TelecineContext ;
struct TYPE_11__ {int format; int h; int w; TYPE_1__* dst; } ;
struct TYPE_10__ {int log2_chroma_h; } ;
struct TYPE_8__ {TYPE_2__* priv; } ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ) ;
 void* FUNC_5 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1)
{
    TelecineContext *VAR_2 = VAR_1->dst->priv;
    const AVPixFmtDescriptor *VAR_3 = FUNC_4(VAR_1->format);
    int VAR_4, VAR_5;

    VAR_2->temp = FUNC_5(VAR_1, VAR_1->w, VAR_1->h);
    if (!VAR_2->temp)
        return FUNC_0(VAR_0);
    for (VAR_4 = 0; VAR_4 < VAR_2->out_cnt; VAR_4++) {
        VAR_2->frame[VAR_4] = FUNC_5(VAR_1, VAR_1->w, VAR_1->h);
        if (!VAR_2->frame[VAR_4])
            return FUNC_0(VAR_0);
    }

    if ((VAR_5 = FUNC_2(VAR_2->stride, VAR_1->format, VAR_1->w)) < 0)
        return VAR_5;

    VAR_2->planeheight[1] = VAR_2->planeheight[2] = FUNC_1(VAR_1->h, VAR_3->log2_chroma_h);
    VAR_2->planeheight[0] = VAR_2->planeheight[3] = VAR_1->h;

    VAR_2->nb_planes = FUNC_3(VAR_1->format);

    return 0;
}
