
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* priv_data; } ;
struct TYPE_11__ {scalar_t__ height; scalar_t__ width; int context_initialized; } ;
struct TYPE_10__ {int si; int next_pts; int last_pts; int cur_pts; TYPE_2__ s; } ;
typedef TYPE_1__ RV34DecContext ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ const AVCodecContext ;


 int FUNC_0 (TYPE_3__ const*,TYPE_3__ const*) ;
 int FUNC_1 (TYPE_2__* const) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(AVCodecContext *VAR_0, const AVCodecContext *VAR_1)
{
    RV34DecContext *VAR_2 = VAR_0->priv_data, *VAR_3 = VAR_1->priv_data;
    MpegEncContext * const VAR_4 = &VAR_2->s, * const VAR_5 = &VAR_3->s;
    int VAR_6;

    if (VAR_0 == VAR_1 || !VAR_5->context_initialized)
        return 0;

    if (VAR_4->height != VAR_5->height || VAR_4->width != VAR_5->width) {
        VAR_4->height = VAR_5->height;
        VAR_4->width = VAR_5->width;
        if ((VAR_6 = FUNC_1(VAR_4)) < 0)
            return VAR_6;
        if ((VAR_6 = FUNC_3(VAR_2)) < 0)
            return VAR_6;
    }

    VAR_2->cur_pts = VAR_3->cur_pts;
    VAR_2->last_pts = VAR_3->last_pts;
    VAR_2->next_pts = VAR_3->next_pts;

    FUNC_2(&VAR_2->si, 0, sizeof(VAR_2->si));



    if (!VAR_5->context_initialized)
        return 0;

    return FUNC_0(VAR_0, VAR_1);
}
