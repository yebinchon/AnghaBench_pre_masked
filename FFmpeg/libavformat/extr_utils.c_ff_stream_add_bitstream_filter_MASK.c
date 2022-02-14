
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {int time_base_out; int * par_out; } ;
struct TYPE_17__ {int priv_data; TYPE_1__* filter; int par_in; int time_base_in; } ;
struct TYPE_16__ {char* name; } ;
struct TYPE_15__ {TYPE_2__* internal; int time_base; int * codecpar; } ;
struct TYPE_14__ {int nb_bsfcs; TYPE_8__** bsfcs; } ;
struct TYPE_13__ {scalar_t__ priv_class; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVOption ;
typedef int AVCodecParameters ;
typedef int AVBitStreamFilter ;
typedef TYPE_5__ AVBSFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,TYPE_5__**) ;
 int FUNC_1 (TYPE_5__**) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_8__***,int*,TYPE_5__*) ;
 int FUNC_5 (int *,int ,char*,char const*,...) ;
 TYPE_4__* FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,char const*,char const**,char*,char*) ;
 int FUNC_8 (int ,int *) ;

int FUNC_9(AVStream *VAR_3, const char *VAR_4, const char *VAR_5)
{
    int VAR_6;
    const AVBitStreamFilter *VAR_7;
    AVBSFContext *VAR_8;
    AVCodecParameters *VAR_9;

    if (!(VAR_7 = FUNC_2(VAR_4))) {
        FUNC_5(((void*)0), VAR_1, "Unknown bitstream filter '%s'\n", VAR_4);
        return VAR_0;
    }

    if ((VAR_6 = FUNC_0(VAR_7, &VAR_8)) < 0)
        return VAR_6;

    if (VAR_3->internal->nb_bsfcs) {
        VAR_9 = VAR_3->internal->bsfcs[VAR_3->internal->nb_bsfcs - 1]->par_out;
        VAR_8->time_base_in = VAR_3->internal->bsfcs[VAR_3->internal->nb_bsfcs - 1]->time_base_out;
    } else {
        VAR_9 = VAR_3->codecpar;
        VAR_8->time_base_in = VAR_3->time_base;
    }

    if ((VAR_6 = FUNC_8(VAR_8->par_in, VAR_9)) < 0) {
        FUNC_1(&VAR_8);
        return VAR_6;
    }

    if (VAR_5 && VAR_8->filter->priv_class) {
        const AVOption *VAR_10 = FUNC_6(VAR_8->priv_data, ((void*)0));
        const char * VAR_11[2] = {((void*)0)};

        if (VAR_10)
            VAR_11[0] = VAR_10->name;

        if ((VAR_6 = FUNC_7(VAR_8->priv_data, VAR_5, VAR_11, "=", ":")) < 0) {
            FUNC_1(&VAR_8);
            return VAR_6;
        }
    }

    if ((VAR_6 = FUNC_3(VAR_8)) < 0) {
        FUNC_1(&VAR_8);
        return VAR_6;
    }

    if ((VAR_6 = FUNC_4(&VAR_3->internal->bsfcs, &VAR_3->internal->nb_bsfcs, VAR_8))) {
        FUNC_1(&VAR_8);
        return VAR_6;
    }

    FUNC_5(((void*)0), VAR_2,
           "Automatically inserted bitstream filter '%s'; args='%s'\n",
           VAR_4, VAR_5 ? VAR_5 : "");
    return 1;
}
