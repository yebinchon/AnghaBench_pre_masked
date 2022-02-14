
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ id; int need_parsing; int codecpar; } ;
struct TYPE_10__ {TYPE_5__** streams; TYPE_3__* priv_data; } ;
struct TYPE_9__ {TYPE_2__* asf_ctx; } ;
struct TYPE_8__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_7__ {scalar_t__ id; int need_parsing; int codecpar; } ;
typedef TYPE_3__ RTSPState ;
typedef int PayloadContext ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ FUNC_0 (char const*,char*,char const**) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_5__*,int,int,int) ;
 scalar_t__ FUNC_3 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0, int VAR_1,
                                 PayloadContext *VAR_2, const char *VAR_3)
{
    if (VAR_1 < 0)
        return 0;
    if (FUNC_0(VAR_3, "stream:", &VAR_3)) {
        RTSPState *VAR_4 = VAR_0->priv_data;

        VAR_0->streams[VAR_1]->id = FUNC_3(VAR_3, ((void*)0), 10);

        if (VAR_4->asf_ctx) {
            int VAR_5;

            for (VAR_5 = 0; VAR_5 < VAR_4->asf_ctx->nb_streams; VAR_5++) {
                if (VAR_0->streams[VAR_1]->id == VAR_4->asf_ctx->streams[VAR_5]->id) {
                    FUNC_1(VAR_0->streams[VAR_1]->codecpar,
                                            VAR_4->asf_ctx->streams[VAR_5]->codecpar);
                    VAR_0->streams[VAR_1]->need_parsing =
                        VAR_4->asf_ctx->streams[VAR_5]->need_parsing;
                    FUNC_2(VAR_0->streams[VAR_1], 32, 1, 1000);
                }
           }
        }
    }

    return 0;
}
