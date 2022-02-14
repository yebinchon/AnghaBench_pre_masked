
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
typedef int int64_t ;
struct TYPE_16__ {int pb; TYPE_2__* priv_data; } ;
struct TYPE_15__ {int duration; int pts; int pos; } ;
struct TYPE_14__ {TYPE_1__* codecpar; } ;
struct TYPE_13__ {int q; } ;
struct TYPE_12__ {int codec_id; int codec_type; } ;
typedef TYPE_2__ SubViewer1Context ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int,int,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 TYPE_4__* FUNC_7 (int *,char*,int,int ) ;
 int FUNC_8 (char*,char*,int*,...) ;
 size_t FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_3)
{
    int VAR_4 = 0;
    AVPacket *VAR_5 = ((void*)0);
    SubViewer1Context *VAR_6 = VAR_3->priv_data;
    AVStream *VAR_7 = FUNC_1(VAR_3, ((void*)0));

    if (!VAR_7)
        return FUNC_0(VAR_2);
    FUNC_4(VAR_7, 64, 1, 1);
    VAR_7->codecpar->codec_type = VAR_0;
    VAR_7->codecpar->codec_id = VAR_1;

    while (!FUNC_2(VAR_3->pb)) {
        char VAR_8[4096];
        int VAR_9 = FUNC_5(VAR_3->pb, VAR_8, sizeof(VAR_8));
        int VAR_10, VAR_11, VAR_12;

        if (!VAR_9)
            break;

        if (!FUNC_10(VAR_8, "[DELAY]", 7)) {
            FUNC_5(VAR_3->pb, VAR_8, sizeof(VAR_8));
            FUNC_8(VAR_8, "%d", &VAR_4);
        }

        if (FUNC_8(VAR_8, "[%d:%d:%d]", &VAR_10, &VAR_11, &VAR_12) == 3) {
            const int64_t VAR_13 = FUNC_3(VAR_3->pb);
            int64_t VAR_14 = VAR_10*3600LL + VAR_11*60LL + VAR_12 + VAR_4;

            VAR_9 = FUNC_5(VAR_3->pb, VAR_8, sizeof(VAR_8));
            VAR_8[FUNC_9(VAR_8, "\r\n")] = 0;
            if (!*VAR_8) {
                if (VAR_5)
                    VAR_5->duration = VAR_14 - VAR_5->pts;
            } else {
                VAR_5 = FUNC_7(&VAR_6->q, VAR_8, VAR_9, 0);
                if (!VAR_5)
                    return FUNC_0(VAR_2);
                VAR_5->pos = VAR_13;
                VAR_5->pts = VAR_14;
                VAR_5->duration = -1;
            }
        }
    }

    FUNC_6(VAR_3, &VAR_6->q);
    return 0;
}
