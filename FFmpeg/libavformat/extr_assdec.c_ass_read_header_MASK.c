
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_11__ ;


typedef void* int64_t ;
struct TYPE_23__ {int keep_duplicates; } ;
struct TYPE_29__ {TYPE_11__ q; } ;
struct TYPE_28__ {int len; int * str; } ;
struct TYPE_27__ {int pb; TYPE_5__* priv_data; } ;
struct TYPE_26__ {int duration; void* pts; void* pos; } ;
struct TYPE_25__ {TYPE_14__* codecpar; } ;
struct TYPE_24__ {int codec_id; int codec_type; } ;
typedef int FFTextReader ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVBPrint ;
typedef TYPE_5__ ASSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (TYPE_4__*,char*,int *) ;
 TYPE_1__* FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_1__*,int,int,int) ;
 int FUNC_6 (TYPE_14__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_11__*) ;
 TYPE_2__* FUNC_8 (TYPE_11__*,int *,int ,int ) ;
 int FUNC_9 (TYPE_3__*,int *,int ) ;
 void* FUNC_10 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_11 (TYPE_5__*,TYPE_4__*,int *,void**,int*) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_5)
{
    ASSContext *VAR_6 = VAR_5->priv_data;
    AVBPrint VAR_7, VAR_8, VAR_9;
    int VAR_10 = 0;
    AVStream *VAR_11;
    FFTextReader VAR_12;
    FUNC_9(VAR_5, &VAR_12, VAR_5->pb);

    VAR_11 = FUNC_4(VAR_5, ((void*)0));
    if (!VAR_11)
        return FUNC_0(VAR_4);
    FUNC_5(VAR_11, 64, 1, 100);
    VAR_11->codecpar->codec_type = VAR_0;
    VAR_11->codecpar->codec_id = VAR_2;

    FUNC_2(&VAR_7, 0, VAR_1);
    FUNC_2(&VAR_8, 0, VAR_1);
    FUNC_2(&VAR_9, 0, VAR_1);

    VAR_6->q.keep_duplicates = 1;

    for (;;) {
        int64_t VAR_13 = FUNC_10(&VAR_8, &VAR_12);
        int64_t VAR_14 = VAR_3;
        int VAR_15 = -1;
        AVPacket *VAR_16;

        if (!VAR_8.str[0])
            break;

        if (FUNC_11(VAR_6, &VAR_9, VAR_8.str, &VAR_14, &VAR_15) < 0) {
            FUNC_3(&VAR_7, "%s", VAR_8.str);
            continue;
        }
        VAR_16 = FUNC_8(&VAR_6->q, VAR_9.str, VAR_9.len, 0);
        if (!VAR_16) {
            VAR_10 = FUNC_0(VAR_4);
            goto end;
        }
        VAR_16->pos = VAR_13;
        VAR_16->pts = VAR_14;
        VAR_16->duration = VAR_15;
    }

    VAR_10 = FUNC_6(VAR_11->codecpar, &VAR_7);
    if (VAR_10 < 0)
        goto end;

    FUNC_7(VAR_5, &VAR_6->q);

end:
    FUNC_1(&VAR_7, ((void*)0));
    FUNC_1(&VAR_8, ((void*)0));
    FUNC_1(&VAR_9, ((void*)0));
    return VAR_10;
}
