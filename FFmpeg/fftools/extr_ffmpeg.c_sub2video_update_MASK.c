
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int8_t ;
typedef int int64_t ;
struct TYPE_14__ {int* linesize; int height; int width; int ** data; } ;
struct TYPE_13__ {long long start_display_time; long long end_display_time; int num_rects; int * rects; scalar_t__ pts; } ;
struct TYPE_11__ {int end_pts; TYPE_5__* frame; } ;
struct TYPE_12__ {TYPE_2__ sub2video; int dec_ctx; TYPE_1__* st; } ;
struct TYPE_10__ {int time_base; } ;
typedef TYPE_3__ InputStream ;
typedef TYPE_4__ AVSubtitle ;
typedef TYPE_5__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int *,int,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;

void FUNC_5(InputStream *VAR_3, AVSubtitle *VAR_4)
{
    AVFrame *VAR_5 = VAR_3->sub2video.frame;
    int8_t *VAR_6;
    int VAR_7;
    int VAR_8, VAR_9;
    int64_t VAR_10, VAR_11;

    if (!VAR_5)
        return;
    if (VAR_4) {
        VAR_10 = FUNC_1(VAR_4->pts + VAR_4->start_display_time * 1000LL,
                                 VAR_1, VAR_3->st->time_base);
        VAR_11 = FUNC_1(VAR_4->pts + VAR_4->end_display_time * 1000LL,
                                 VAR_1, VAR_3->st->time_base);
        VAR_8 = VAR_4->num_rects;
    } else {
        VAR_10 = VAR_3->sub2video.end_pts;
        VAR_11 = VAR_2;
        VAR_8 = 0;
    }
    if (FUNC_3(VAR_3) < 0) {
        FUNC_0(VAR_3->dec_ctx, VAR_0,
               "Impossible to get a blank canvas.\n");
        return;
    }
    VAR_6 = VAR_5->data [0];
    VAR_7 = VAR_5->linesize[0];
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        FUNC_2(VAR_6, VAR_7, VAR_5->width, VAR_5->height, VAR_4->rects[VAR_9]);
    FUNC_4(VAR_3, VAR_10);
    VAR_3->sub2video.end_pts = VAR_11;
}
