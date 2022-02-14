
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int line ;
typedef scalar_t__ int64_t ;
struct TYPE_16__ {int pb; TYPE_2__* priv_data; } ;
struct TYPE_15__ {scalar_t__ pos; int duration; scalar_t__ pts; } ;
struct TYPE_14__ {TYPE_1__* codecpar; } ;
struct TYPE_13__ {int q; } ;
struct TYPE_12__ {int codec_id; int codec_type; } ;
typedef TYPE_2__ PJSContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int,int,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 TYPE_4__* FUNC_7 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_8 (char**,int*) ;
 size_t FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_4)
{
    PJSContext *VAR_5 = VAR_4->priv_data;
    AVStream *VAR_6 = FUNC_1(VAR_4, ((void*)0));
    int VAR_7 = 0;

    if (!VAR_6)
        return FUNC_0(VAR_3);
    FUNC_4(VAR_6, 64, 1, 10);
    VAR_6->codecpar->codec_type = VAR_0;
    VAR_6->codecpar->codec_id = VAR_1;

    while (!FUNC_2(VAR_4->pb)) {
        char VAR_8[4096];
        char *VAR_9 = VAR_8;
        const int64_t VAR_10 = FUNC_3(VAR_4->pb);
        int VAR_11 = FUNC_5(VAR_4->pb, VAR_8, sizeof(VAR_8));
        int64_t VAR_12;
        int VAR_13;

        if (!VAR_11)
            break;

        VAR_8[FUNC_9(VAR_8, "\r\n")] = 0;

        VAR_12 = FUNC_8(&VAR_9, &VAR_13);
        if (VAR_12 != VAR_2) {
            AVPacket *VAR_14;

            VAR_9[FUNC_9(VAR_9, "\"")] = 0;
            VAR_14 = FUNC_7(&VAR_5->q, VAR_9, FUNC_10(VAR_9), 0);
            if (!VAR_14)
                return FUNC_0(VAR_3);
            VAR_14->pos = VAR_10;
            VAR_14->pts = VAR_12;
            VAR_14->duration = VAR_13;
        }
    }

    FUNC_6(VAR_4, &VAR_5->q);
    return VAR_7;
}
