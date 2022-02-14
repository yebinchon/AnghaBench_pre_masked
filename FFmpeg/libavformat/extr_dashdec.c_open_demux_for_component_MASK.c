
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct representation {TYPE_1__* ctx; scalar_t__ last_seq_no; int cur_seq_no; TYPE_4__* parent; } ;
struct TYPE_14__ {int priv_data; } ;
struct TYPE_12__ {int den; int num; } ;
struct TYPE_13__ {int id; TYPE_2__ time_base; int pts_wrap_bits; int codecpar; } ;
struct TYPE_11__ {int nb_streams; TYPE_3__** streams; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*,struct representation*) ;
 scalar_t__ FUNC_5 (struct representation*,int ) ;
 int FUNC_6 (TYPE_4__*,struct representation*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_1, struct representation *VAR_2)
{
    int VAR_3 = 0;
    int VAR_4;

    VAR_2->parent = VAR_1;
    VAR_2->cur_seq_no = FUNC_4(VAR_1, VAR_2);

    if (!VAR_2->last_seq_no) {
        VAR_2->last_seq_no = FUNC_5(VAR_2, VAR_1->priv_data);
    }

    VAR_3 = FUNC_6(VAR_1, VAR_2);
    if (VAR_3 < 0) {
        goto fail;
    }
    for (VAR_4 = 0; VAR_4 < VAR_2->ctx->nb_streams; VAR_4++) {
        AVStream *VAR_5 = FUNC_2(VAR_1, ((void*)0));
        AVStream *VAR_6 = VAR_2->ctx->streams[VAR_4];
        if (!VAR_5) {
            VAR_3 = FUNC_0(VAR_0);
            goto fail;
        }
        VAR_5->id = VAR_4;
        FUNC_1(VAR_5->codecpar, VAR_6->codecpar);
        FUNC_3(VAR_5, VAR_6->pts_wrap_bits, VAR_6->time_base.num, VAR_6->time_base.den);
    }

    return 0;
fail:
    return VAR_3;
}
