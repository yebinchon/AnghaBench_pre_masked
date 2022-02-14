
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct event_info {int pos; } ;
typedef int ptrdiff_t ;
typedef int line ;
typedef int int64_t ;
struct TYPE_20__ {int len; } ;
struct TYPE_19__ {int pb; TYPE_2__* priv_data; } ;
struct TYPE_18__ {TYPE_1__* codecpar; } ;
struct TYPE_17__ {int q; } ;
struct TYPE_16__ {int codec_id; int codec_type; } ;
typedef TYPE_2__ SRTContext ;
typedef int FFTextReader ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_5__*,char*,struct event_info*,int) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;
 int FUNC_4 (TYPE_5__*,char*,char*) ;
 TYPE_3__* FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_3__*,int,int,int) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_4__*,int *,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char*,struct event_info*) ;
 int FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*,char**,int) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_4)
{
    SRTContext *VAR_5 = VAR_4->priv_data;
    AVBPrint VAR_6;
    AVStream *VAR_7 = FUNC_5(VAR_4, ((void*)0));
    int VAR_8 = 0;
    char VAR_9[4096], VAR_10[4096];
    int VAR_11 = 0;
    struct event_info VAR_12;
    FFTextReader VAR_13;
    FUNC_10(VAR_4, &VAR_13, VAR_4->pb);

    if (!VAR_7)
        return FUNC_0(VAR_3);
    FUNC_6(VAR_7, 64, 1, 1000);
    VAR_7->codecpar->codec_type = VAR_0;
    VAR_7->codecpar->codec_id = VAR_2;

    FUNC_3(&VAR_6, 0, VAR_1);

    VAR_10[0] = 0;

    while (!FUNC_9(&VAR_13)) {
        struct event_info VAR_14;
        const int64_t VAR_15 = FUNC_11(&VAR_13);
        ptrdiff_t VAR_16 = FUNC_8(&VAR_13, VAR_9, sizeof(VAR_9));

        if (VAR_16 < 0)
            break;

        if (!VAR_16 || !VAR_9[0])
            continue;

        if (FUNC_12(VAR_9, &VAR_14) < 0) {
            char *VAR_17;

            if (!VAR_11)
                continue;

            if (VAR_10[0]) {


                FUNC_4(&VAR_6, "%s\n", VAR_10);
                VAR_10[0] = 0;
            }





            if (FUNC_14(VAR_9, &VAR_17, 10) < 0 || VAR_9 == VAR_17)
                FUNC_4(&VAR_6, "%s\n", VAR_9);
            else
                FUNC_13(VAR_10, VAR_9);
        } else {
            if (VAR_11) {



                char *VAR_18 = ((void*)0);
                const int VAR_19 = FUNC_14(VAR_10, &VAR_18, 10) >= 0 && VAR_18 && !*VAR_18;
                VAR_8 = FUNC_1(&VAR_5->q, &VAR_6, VAR_10, &VAR_12, !VAR_6.len && !VAR_19);
                if (VAR_8 < 0)
                    goto end;
            } else {
                VAR_11 = 1;
            }
            VAR_14.pos = VAR_15;
            VAR_12 = VAR_14;
        }
    }




    if (VAR_11) {
        VAR_8 = FUNC_1(&VAR_5->q, &VAR_6, VAR_10, &VAR_12, 1);
        if (VAR_8 < 0)
            goto end;
    }

    FUNC_7(VAR_4, &VAR_5->q);

end:
    FUNC_2(&VAR_6, ((void*)0));
    return VAR_8;
}
