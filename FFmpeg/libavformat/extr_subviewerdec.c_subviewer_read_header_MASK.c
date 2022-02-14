
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int value ;
typedef int line ;
typedef int key ;
typedef void* int64_t ;
struct TYPE_16__ {int extradata; int codec_id; int codec_type; } ;
struct TYPE_15__ {int pb; int metadata; TYPE_1__* priv_data; } ;
struct TYPE_14__ {int duration; void* pts; void* pos; } ;
struct TYPE_13__ {TYPE_8__* codecpar; } ;
struct TYPE_12__ {int q; } ;
typedef TYPE_1__ SubViewerContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *,char*,char*,int ) ;
 char FUNC_5 (char) ;
 TYPE_2__* FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int ) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*,int,int,int) ;
 int FUNC_12 (TYPE_8__*,int *) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (TYPE_4__*,int *) ;
 TYPE_3__* FUNC_15 (int *,char*,int,int) ;
 int FUNC_16 (int ,int) ;
 scalar_t__ FUNC_17 (char*,void**,int*) ;
 size_t FUNC_18 (char*,char*) ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (char*,char*,int) ;
 scalar_t__ FUNC_21 (char*,char*) ;

__attribute__((used)) static int FUNC_22(AVFormatContext *VAR_6)
{
    SubViewerContext *VAR_7 = VAR_6->priv_data;
    AVStream *VAR_8 = FUNC_6(VAR_6, ((void*)0));
    AVBPrint VAR_9;
    int VAR_10 = 0, VAR_11 = 1;
    int64_t VAR_12 = VAR_3;
    int VAR_13 = -1;
    AVPacket *VAR_14 = ((void*)0);

    if (!VAR_8)
        return FUNC_0(VAR_4);
    VAR_10 = FUNC_16(VAR_6->pb, 3);
    if (VAR_10 < 0)
        return VAR_10;
    if (FUNC_8(VAR_6->pb) != 0xefbbbf)
        FUNC_9(VAR_6->pb, -3, VAR_5);
    FUNC_11(VAR_8, 64, 1, 100);
    VAR_8->codecpar->codec_type = VAR_0;
    VAR_8->codecpar->codec_id = VAR_2;

    FUNC_2(&VAR_9, 0, VAR_1);

    while (!FUNC_7(VAR_6->pb)) {
        char VAR_15[2048];
        int64_t VAR_16 = 0;
        int VAR_17 = FUNC_13(VAR_6->pb, VAR_15, sizeof(VAR_15));

        if (!VAR_17)
            break;

        VAR_15[FUNC_18(VAR_15, "\r\n")] = 0;

        if (VAR_15[0] == '[' && FUNC_20(VAR_15, "[br]", 4)) {


            if (FUNC_21(VAR_15, "[COLF]") || FUNC_21(VAR_15, "[SIZE]") ||
                FUNC_21(VAR_15, "[FONT]") || FUNC_21(VAR_15, "[STYLE]"))
                continue;

            if (!VAR_8->codecpar->extradata) {
                FUNC_3(&VAR_9, "%s\n", VAR_15);
                if (!FUNC_20(VAR_15, "[END INFORMATION]", 17) || !FUNC_20(VAR_15, "[SUBTITLE]", 10)) {

                    VAR_10 = FUNC_12(VAR_8->codecpar, &VAR_9);
                    if (VAR_10 < 0)
                        goto end;
                } else if (FUNC_20(VAR_15, "[INFORMATION]", 13)) {

                    int VAR_18, VAR_19 = 0;
                    char VAR_20[32], VAR_21[128];

                    for (VAR_18 = 1; VAR_18 < sizeof(VAR_20) - 1 && VAR_15[VAR_18] && VAR_15[VAR_18] != ']'; VAR_18++)
                        VAR_20[VAR_18 - 1] = FUNC_5(VAR_15[VAR_18]);
                    VAR_20[VAR_18 - 1] = 0;

                    if (VAR_15[VAR_18] == ']')
                        VAR_18++;
                    while (VAR_15[VAR_18] == ' ')
                        VAR_18++;
                    while (VAR_19 < sizeof(VAR_21) - 1 && VAR_15[VAR_18] && VAR_15[VAR_18] != ']')
                        VAR_21[VAR_19++] = VAR_15[VAR_18++];
                    VAR_21[VAR_19] = 0;

                    FUNC_4(&VAR_6->metadata, VAR_20, VAR_21, 0);
                }
            }
        } else if (FUNC_17(VAR_15, &VAR_12, &VAR_13) >= 0) {
            VAR_11 = 1;
            VAR_16 = FUNC_10(VAR_6->pb);
        } else if (*VAR_15) {
            if (!VAR_11) {
                VAR_14 = FUNC_15(&VAR_7->q, "\n", 1, 1);
                if (!VAR_14) {
                    VAR_10 = FUNC_0(VAR_4);
                    goto end;
                }
            }
            VAR_14 = FUNC_15(&VAR_7->q, VAR_15, FUNC_19(VAR_15), !VAR_11);
            if (!VAR_14) {
                VAR_10 = FUNC_0(VAR_4);
                goto end;
            }
            if (VAR_11) {
                VAR_14->pos = VAR_16;
                VAR_14->pts = VAR_12;
                VAR_14->duration = VAR_13;
            }
            VAR_11 = 0;
        }
    }

    FUNC_14(VAR_6, &VAR_7->q);

end:
    FUNC_1(&VAR_9, ((void*)0));
    return VAR_10;
}
