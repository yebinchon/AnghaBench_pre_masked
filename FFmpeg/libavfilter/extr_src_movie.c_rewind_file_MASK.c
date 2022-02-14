
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {scalar_t__ start_time; } ;
struct TYPE_9__ {int nb_outputs; TYPE_2__* priv; } ;
struct TYPE_8__ {int loop_count; scalar_t__ eof; TYPE_1__* st; TYPE_5__* format_ctx; int seek_point; } ;
struct TYPE_7__ {scalar_t__ done; int codec_ctx; } ;
typedef TYPE_2__ MovieContext ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_5__*,int,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_3)
{
    MovieContext *VAR_4 = VAR_3->priv;
    int64_t VAR_5 = VAR_4->seek_point;
    int VAR_6, VAR_7;

    if (VAR_4->format_ctx->start_time != VAR_2)
        VAR_5 += VAR_4->format_ctx->start_time;
    VAR_6 = FUNC_2(VAR_4->format_ctx, -1, VAR_5, VAR_0);
    if (VAR_6 < 0) {
        FUNC_1(VAR_3, VAR_1, "Unable to loop: %s\n", FUNC_0(VAR_6));
        VAR_4->loop_count = 1;
        return VAR_6;
    }

    for (VAR_7 = 0; VAR_7 < VAR_3->nb_outputs; VAR_7++) {
        FUNC_3(VAR_4->st[VAR_7].codec_ctx);
        VAR_4->st[VAR_7].done = 0;
    }
    VAR_4->eof = 0;
    return 0;
}
