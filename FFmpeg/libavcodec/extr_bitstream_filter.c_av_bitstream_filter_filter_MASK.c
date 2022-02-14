
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_26__ {int args; TYPE_15__* filter; TYPE_2__* priv_data; } ;
struct TYPE_25__ {int extradata_size; int * extradata; int time_base; } ;
struct TYPE_24__ {char* name; } ;
struct TYPE_23__ {int size; int * data; int member_0; } ;
struct TYPE_22__ {int extradata_updated; TYPE_10__* ctx; } ;
struct TYPE_21__ {int extradata_size; int * extradata; } ;
struct TYPE_20__ {scalar_t__ priv_class; } ;
struct TYPE_19__ {TYPE_1__* par_out; int priv_data; int time_base_in; int par_in; } ;
typedef TYPE_2__ BSFCompatContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVOption ;
typedef TYPE_5__ AVCodecContext ;
typedef TYPE_6__ AVBitStreamFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_15__*,TYPE_10__**) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (TYPE_10__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_10__*,TYPE_3__*) ;
 int FUNC_5 (int **) ;
 int * FUNC_6 (scalar_t__) ;
 int * FUNC_7 (scalar_t__) ;
 TYPE_4__* FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,char const**,char*,char*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ,TYPE_5__*) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (char const*,char*) ;

int FUNC_14(AVBitStreamFilterContext *VAR_4,
                               AVCodecContext *VAR_5, const char *VAR_6,
                               uint8_t **VAR_7, int *VAR_8,
                               const uint8_t *VAR_9, int VAR_10, int VAR_11)
{
    BSFCompatContext *VAR_12 = VAR_4->priv_data;
    AVPacket VAR_13 = { 0 };
    int VAR_14;

    if (!VAR_12->ctx) {
        VAR_14 = FUNC_1(VAR_4->filter, &VAR_12->ctx);
        if (VAR_14 < 0)
            return VAR_14;

        VAR_14 = FUNC_11(VAR_12->ctx->par_in, VAR_5);
        if (VAR_14 < 0)
            return VAR_14;

        VAR_12->ctx->time_base_in = VAR_5->time_base;

        if (VAR_4->args && VAR_4->filter->priv_class) {
            const AVOption *VAR_15 = FUNC_8(VAR_12->ctx->priv_data, ((void*)0));
            const char * VAR_16[2] = {((void*)0)};

            if (VAR_15)
                VAR_16[0] = VAR_15->name;

            VAR_14 = FUNC_9(VAR_12->ctx->priv_data, VAR_4->args, VAR_16, "=", ":");
            if (VAR_14 < 0)
                return VAR_14;
        }

        VAR_14 = FUNC_2(VAR_12->ctx);
        if (VAR_14 < 0)
            return VAR_14;
    }

    VAR_13.data = (uint8_t *)VAR_9;
    VAR_13.size = VAR_10;

    VAR_14 = FUNC_4(VAR_12->ctx, &VAR_13);
    if (VAR_14 < 0)
        return VAR_14;

    *VAR_7 = ((void*)0);
    *VAR_8 = 0;

    VAR_14 = FUNC_3(VAR_12->ctx, &VAR_13);
    if (VAR_14 == FUNC_0(VAR_2) || VAR_14 == VAR_0)
        return 0;
    else if (VAR_14 < 0)
        return VAR_14;

    *VAR_7 = FUNC_6(VAR_13.size + VAR_1);
    if (!*VAR_7) {
        FUNC_10(&VAR_13);
        return FUNC_0(VAR_3);
    }

    *VAR_8 = VAR_13.size;
    FUNC_12(*VAR_7, VAR_13.data, VAR_13.size);

    FUNC_10(&VAR_13);


    while (VAR_14 >= 0) {
        VAR_14 = FUNC_3(VAR_12->ctx, &VAR_13);
        FUNC_10(&VAR_13);
    }

    if (!VAR_12->extradata_updated) {

        if (VAR_12->ctx->par_out->extradata_size && (!VAR_6 || !FUNC_13(VAR_6, "private_spspps_buf"))) {
            FUNC_5(&VAR_5->extradata);
            VAR_5->extradata_size = 0;
            VAR_5->extradata = FUNC_7(VAR_12->ctx->par_out->extradata_size + VAR_1);
            if (!VAR_5->extradata)
                return FUNC_0(VAR_3);
            FUNC_12(VAR_5->extradata, VAR_12->ctx->par_out->extradata, VAR_12->ctx->par_out->extradata_size);
            VAR_5->extradata_size = VAR_12->ctx->par_out->extradata_size;
        }

        VAR_12->extradata_updated = 1;
    }

    return 1;
}
