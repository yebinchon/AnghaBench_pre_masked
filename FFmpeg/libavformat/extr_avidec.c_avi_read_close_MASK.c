
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int pb; } ;
struct TYPE_10__ {int nb_streams; TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_9__ {int dv_demux; } ;
struct TYPE_8__ {int sub_pkt; int sub_buffer; TYPE_6__* sub_ctx; } ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVIStream ;
typedef TYPE_3__ AVIContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_6__**) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0)
{
    int VAR_1;
    AVIContext *VAR_2 = VAR_0->priv_data;

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_streams; VAR_1++) {
        AVStream *VAR_3 = VAR_0->streams[VAR_1];
        AVIStream *VAR_4 = VAR_3->priv_data;
        if (VAR_4) {
            if (VAR_4->sub_ctx) {
                FUNC_0(&VAR_4->sub_ctx->pb);
                FUNC_2(&VAR_4->sub_ctx);
            }
            FUNC_0(&VAR_4->sub_buffer);
            FUNC_1(&VAR_4->sub_pkt);
        }
    }

    FUNC_0(&VAR_2->dv_demux);

    return 0;
}
