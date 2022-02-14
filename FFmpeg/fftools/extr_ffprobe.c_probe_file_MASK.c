
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_20__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;


struct TYPE_24__ {TYPE_1__* writer; } ;
typedef TYPE_2__ WriterContext ;
struct TYPE_25__ {TYPE_19__* fmt_ctx; int member_0; } ;
struct TYPE_23__ {int discard; } ;
struct TYPE_22__ {int flags; } ;
struct TYPE_21__ {int nb_streams; TYPE_20__** streams; } ;
typedef TYPE_3__ InputFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int**) ;
 int FUNC_2 (TYPE_19__*,TYPE_20__*,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 int FUNC_4 (TYPE_3__*,char const*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int* VAR_19 ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ VAR_20 ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_12(WriterContext *VAR_21, const char *VAR_22)
{
    InputFile VAR_23 = { 0 };
    int VAR_24, VAR_25;
    int VAR_26;

    VAR_8 = VAR_12 || VAR_6;
    VAR_9 = VAR_13 || VAR_7;

    VAR_24 = FUNC_4(&VAR_23, VAR_22);
    if (VAR_24 < 0)
        goto end;



    VAR_16 = VAR_23.fmt_ctx->nb_streams;
    FUNC_0(VAR_17,0,VAR_23.fmt_ctx->nb_streams);
    FUNC_0(VAR_18,0,VAR_23.fmt_ctx->nb_streams);
    FUNC_0(VAR_19,0,VAR_23.fmt_ctx->nb_streams);

    for (VAR_25 = 0; VAR_25 < VAR_23.fmt_ctx->nb_streams; VAR_25++) {
        if (VAR_20) {
            VAR_24 = FUNC_2(VAR_23.fmt_ctx,
                                                  VAR_23.fmt_ctx->streams[VAR_25],
                                                  VAR_20);
            if (VAR_24 < 0) goto end;
            else
                VAR_19[VAR_25] = VAR_24;
            VAR_24 = 0;
        } else {
            VAR_19[VAR_25] = 1;
        }
        if (!VAR_19[VAR_25])
            VAR_23.fmt_ctx->streams[VAR_25]->discard = VAR_0;
    }

    if (VAR_8 || VAR_9) {
        if (VAR_12 && VAR_13 &&
            VAR_21->writer->flags & VAR_5)
            VAR_26 = VAR_4;
        else if (VAR_13 && !VAR_12)
            VAR_26 = VAR_3;
        else
            VAR_26 = VAR_2;
        if (VAR_12 || VAR_13)
            FUNC_11(VAR_21, VAR_26);
        VAR_24 = FUNC_5(VAR_21, &VAR_23);
        if (VAR_12 || VAR_13)
            FUNC_10(VAR_21);
        if (VAR_24 < 0) goto end;
    }

    if (VAR_14) {
        VAR_24 = FUNC_8(VAR_21, &VAR_23);
        if (VAR_24 < 0) goto end;
    }

    if (VAR_15) {
        VAR_24 = FUNC_9(VAR_21, &VAR_23);
        if (VAR_24 < 0) goto end;
    }
    if (VAR_10) {
        VAR_24 = FUNC_6(VAR_21, &VAR_23);
        if (VAR_24 < 0) goto end;
    }
    if (VAR_11) {
        VAR_24 = FUNC_7(VAR_21, &VAR_23);
        if (VAR_24 < 0) goto end;
    }

end:
    if (VAR_23.fmt_ctx)
        FUNC_3(&VAR_23);
    FUNC_1(&VAR_17);
    FUNC_1(&VAR_18);
    FUNC_1(&VAR_19);

    return VAR_24;
}
