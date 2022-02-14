
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;


typedef scalar_t__ int64_t ;
struct TYPE_25__ {int str; int len; } ;
struct TYPE_24__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_23__ {int duration; int pts; scalar_t__ pos; } ;
struct TYPE_22__ {TYPE_11__* codecpar; } ;
struct TYPE_21__ {int q; } ;
struct TYPE_20__ {int codec_id; int codec_type; } ;
typedef TYPE_1__ SAMIContext ;
typedef int FFTextReader ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;
 int FUNC_4 (TYPE_5__*,char*,int ) ;
 int FUNC_5 (int ,char*,int) ;
 TYPE_2__* FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_2__*,int,int,int) ;
 int FUNC_8 (TYPE_11__*,TYPE_5__*) ;
 int FUNC_9 (int *,TYPE_5__*,char*) ;
 char* FUNC_10 (int ,char*) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 TYPE_3__* FUNC_12 (int *,int ,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_4__*,int *,int ) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_17(AVFormatContext *VAR_4)
{
    SAMIContext *VAR_5 = VAR_4->priv_data;
    AVStream *VAR_6 = FUNC_6(VAR_4, ((void*)0));
    AVBPrint VAR_7, VAR_8;
    char VAR_9 = 0;
    int VAR_10 = 0, VAR_11 = 0;
    FFTextReader VAR_12;
    FUNC_14(VAR_4, &VAR_12, VAR_4->pb);

    if (!VAR_6)
        return FUNC_0(VAR_3);
    FUNC_7(VAR_6, 64, 1, 1000);
    VAR_6->codecpar->codec_type = VAR_0;
    VAR_6->codecpar->codec_id = VAR_2;

    FUNC_3(&VAR_7, 0, VAR_1);
    FUNC_3(&VAR_8, 0, VAR_1);

    while (!FUNC_13(&VAR_12)) {
        AVPacket *VAR_13;
        const int64_t VAR_14 = FUNC_15(&VAR_12) - (VAR_9 != 0);
        int VAR_15, VAR_16, VAR_17 = FUNC_9(&VAR_12, &VAR_7, &VAR_9);

        if (VAR_17 == 0)
            break;

        VAR_16 = !FUNC_5(VAR_7.str, "</BODY", 6);
        if (VAR_16) {
             FUNC_1(&VAR_7);
             break;
        }

        VAR_15 = !FUNC_5(VAR_7.str, "<SYNC", 5);
        if (VAR_15)
            VAR_11 = 1;

        if (!VAR_11) {
            FUNC_4(&VAR_8, "%s", VAR_7.str);
        } else {
            VAR_13 = FUNC_12(&VAR_5->q, VAR_7.str, VAR_7.len, !VAR_15);
            if (!VAR_13) {
                VAR_10 = FUNC_0(VAR_3);
                goto end;
            }
            if (VAR_15) {
                const char *VAR_18 = FUNC_10(VAR_7.str, "Start");
                VAR_13->pos = VAR_14;
                VAR_13->pts = VAR_18 ? FUNC_16(VAR_18, ((void*)0), 10) : 0;
                VAR_13->duration = -1;
            }
        }
        FUNC_1(&VAR_7);
    }

    VAR_10 = FUNC_8(VAR_6->codecpar, &VAR_8);
    if (VAR_10 < 0)
        goto end;

    FUNC_11(VAR_4, &VAR_5->q);

end:
    FUNC_2(&VAR_7, ((void*)0));
    return VAR_10;
}
