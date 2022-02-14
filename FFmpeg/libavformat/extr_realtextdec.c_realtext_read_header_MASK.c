
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_23__ {int str; scalar_t__ len; } ;
struct TYPE_22__ {int pb; TYPE_2__* priv_data; } ;
struct TYPE_21__ {int pts; int duration; scalar_t__ pos; } ;
struct TYPE_20__ {TYPE_1__* codecpar; } ;
struct TYPE_19__ {int q; } ;
struct TYPE_18__ {scalar_t__ extradata_size; scalar_t__ extradata; int codec_id; int codec_type; } ;
typedef TYPE_2__ RealTextContext ;
typedef int FFTextReader ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,int *) ;
 int FUNC_3 (TYPE_6__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 TYPE_3__* FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (TYPE_3__*,int,int,int) ;
 int FUNC_8 (int *,TYPE_6__*,char*) ;
 char* FUNC_9 (int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_5__*,int *) ;
 TYPE_4__* FUNC_12 (int *,int ,scalar_t__,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_5__*,int *,int ) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (char const*) ;

__attribute__((used)) static int FUNC_17(AVFormatContext *VAR_5)
{
    RealTextContext *VAR_6 = VAR_5->priv_data;
    AVStream *VAR_7 = FUNC_6(VAR_5, ((void*)0));
    AVBPrint VAR_8;
    char VAR_9 = 0;
    int VAR_10 = 0, VAR_11 = FUNC_16("60");
    FFTextReader VAR_12;
    FUNC_14(VAR_5, &VAR_12, VAR_5->pb);

    if (!VAR_7)
        return FUNC_0(VAR_4);
    FUNC_7(VAR_7, 64, 1, 100);
    VAR_7->codecpar->codec_type = VAR_1;
    VAR_7->codecpar->codec_id = VAR_3;

    FUNC_3(&VAR_8, 0, VAR_2);

    while (!FUNC_13(&VAR_12)) {
        AVPacket *VAR_13;
        const int64_t VAR_14 = FUNC_15(&VAR_12) - (VAR_9 != 0);
        int VAR_15 = FUNC_8(&VAR_12, &VAR_8, &VAR_9);

        if (VAR_15 == 0)
            break;

        if (!FUNC_5(VAR_8.str, "<window", 7)) {

            const char *VAR_16 = FUNC_9(VAR_8.str, "duration");

            if (VAR_7->codecpar->extradata) {
                VAR_10 = VAR_0;
                goto end;
            }
            if (VAR_16)
                VAR_11 = FUNC_16(VAR_16);
            VAR_7->codecpar->extradata = FUNC_4(VAR_8.str);
            if (!VAR_7->codecpar->extradata) {
                VAR_10 = FUNC_0(VAR_4);
                goto end;
            }
            VAR_7->codecpar->extradata_size = VAR_8.len + 1;
        } else {


            int VAR_17 = !FUNC_5(VAR_8.str, "<time", 5) ? 0 : 1;
            VAR_13 = FUNC_12(&VAR_6->q, VAR_8.str, VAR_8.len, VAR_17);
            if (!VAR_13) {
                VAR_10 = FUNC_0(VAR_4);
                goto end;
            }
            if (!VAR_17) {
                const char *VAR_18 = FUNC_9(VAR_8.str, "begin");
                const char *VAR_19 = FUNC_9(VAR_8.str, "end");

                VAR_13->pos = VAR_14;
                VAR_13->pts = VAR_18 ? FUNC_16(VAR_18) : 0;
                VAR_13->duration = VAR_19 ? (FUNC_16(VAR_19) - VAR_13->pts) : VAR_11;
            }
        }
        FUNC_1(&VAR_8);
    }
    FUNC_11(VAR_5, &VAR_6->q);

end:
    FUNC_2(&VAR_8, ((void*)0));
    if (VAR_10 < 0)
        FUNC_10(&VAR_6->q);
    return VAR_10;
}
