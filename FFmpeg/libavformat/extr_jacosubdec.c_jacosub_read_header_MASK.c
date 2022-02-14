
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int line ;
typedef int int64_t ;
struct TYPE_21__ {int nb_subs; TYPE_3__* subs; } ;
struct TYPE_20__ {TYPE_1__* priv_data; int * pb; } ;
struct TYPE_19__ {int duration; int pts; int data; int pos; } ;
struct TYPE_18__ {TYPE_12__* codecpar; } ;
struct TYPE_17__ {int timeres; TYPE_9__ q; int shift; } ;
struct TYPE_16__ {int codec_id; int codec_type; } ;
typedef TYPE_1__ JACOsubContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int *,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,int*,int) ;
 TYPE_2__* FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int,int,int) ;
 int** VAR_5 ;
 int FUNC_8 (TYPE_12__*,int *) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (TYPE_4__*,TYPE_9__*) ;
 TYPE_3__* FUNC_11 (TYPE_9__*,char*,int,int) ;
 int FUNC_12 (char const) ;
 int FUNC_13 (int,char const*) ;
 int FUNC_14 (TYPE_4__*) ;
 char* FUNC_15 (char const*) ;
 int FUNC_16 (TYPE_1__*,int ,int *,int *) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (int*) ;
 int FUNC_19 (char const*,int *,int) ;
 scalar_t__ FUNC_20 (char const*) ;

__attribute__((used)) static int FUNC_21(AVFormatContext *VAR_6)
{
    AVBPrint VAR_7;
    AVIOContext *VAR_8 = VAR_6->pb;
    char VAR_9[VAR_4];
    JACOsubContext *VAR_10 = VAR_6->priv_data;
    int VAR_11 = 0;
    int VAR_12 = 0;
    int VAR_13, VAR_14;

    AVStream *VAR_15 = FUNC_4(VAR_6, ((void*)0));
    if (!VAR_15)
        return FUNC_0(VAR_3);
    FUNC_7(VAR_15, 64, 1, 100);
    VAR_15->codecpar->codec_type = VAR_0;
    VAR_15->codecpar->codec_id = VAR_1;

    VAR_10->timeres = 30;

    FUNC_1(&VAR_7, 1024+VAR_2, 4096);

    while (!FUNC_5(VAR_8)) {
        int VAR_16;
        const char *VAR_17 = VAR_9;
        int64_t VAR_18 = FUNC_6(VAR_8);
        int VAR_19 = FUNC_9(VAR_8, VAR_9, sizeof(VAR_9));

        VAR_17 = FUNC_15(VAR_17);


        if (VAR_12 || FUNC_20(VAR_17)) {
            AVPacket *VAR_20;

            VAR_20 = FUNC_11(&VAR_10->q, VAR_9, VAR_19, VAR_12);
            if (!VAR_20)
                return FUNC_0(VAR_3);
            VAR_20->pos = VAR_18;
            VAR_12 = VAR_19 > 1 && !FUNC_17(&VAR_9[VAR_19 - 2], "\\\n");
            continue;
        }


        if (*VAR_17 != '#')
            continue;
        VAR_17++;
        VAR_13 = FUNC_12(VAR_17[0]);
        if (VAR_13 == -1)
            continue;


        VAR_16 = FUNC_18(VAR_5[VAR_13]);
        if (FUNC_3(VAR_17, VAR_5[VAR_13], VAR_16) == 0)
            VAR_17 += VAR_16;
        else
            VAR_17++;
        VAR_17 = FUNC_15(VAR_17);


        switch (VAR_5[VAR_13][0]) {
        case 'S':
            if (!VAR_11) {
                VAR_10->shift = FUNC_13(VAR_10->timeres, VAR_17);
                VAR_11 = 1;
            }
            FUNC_2(&VAR_7, "#S %s", VAR_17);
            break;
        case 'T':
            VAR_10->timeres = FUNC_19(VAR_17, ((void*)0), 10);
            if (!VAR_10->timeres)
                VAR_10->timeres = 30;
            else
                FUNC_2(&VAR_7, "#T %s", VAR_17);
            break;
        }
    }


    VAR_14 = FUNC_8(VAR_15->codecpar, &VAR_7);
    if (VAR_14 < 0)
        goto fail;



    for (VAR_13 = 0; VAR_13 < VAR_10->q.nb_subs; VAR_13++) {
        AVPacket *VAR_21 = &VAR_10->q.subs[VAR_13];
        FUNC_16(VAR_10, VAR_21->data, &VAR_21->pts, &VAR_21->duration);
    }
    FUNC_10(VAR_6, &VAR_10->q);

    return 0;
fail:
    FUNC_14(VAR_6);
    return VAR_14;
}
