
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* time_base_out; int * par_out; void* time_base_in; int par_in; } ;
struct TYPE_6__ {int par_out; void* time_base_out; void* time_base_in; int * par_in; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int nb_bsfs; TYPE_4__** bsfs; } ;
typedef TYPE_1__ BSFListContext ;
typedef void* AVRational ;
typedef int AVCodecParameters ;
typedef TYPE_2__ AVBSFContext ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int const*) ;

__attribute__((used)) static int FUNC_2(AVBSFContext *VAR_0)
{
    BSFListContext *VAR_1 = VAR_0->priv_data;
    int VAR_2, VAR_3;
    const AVCodecParameters *VAR_4 = VAR_0->par_in;
    AVRational VAR_5 = VAR_0->time_base_in;

    for (VAR_3 = 0; VAR_3 < VAR_1->nb_bsfs; ++VAR_3) {
        VAR_2 = FUNC_1(VAR_1->bsfs[VAR_3]->par_in, VAR_4);
        if (VAR_2 < 0)
            goto fail;

        VAR_1->bsfs[VAR_3]->time_base_in = VAR_5;

        VAR_2 = FUNC_0(VAR_1->bsfs[VAR_3]);
        if (VAR_2 < 0)
            goto fail;

        VAR_4 = VAR_1->bsfs[VAR_3]->par_out;
        VAR_5 = VAR_1->bsfs[VAR_3]->time_base_out;
    }

    VAR_0->time_base_out = VAR_5;
    VAR_2 = FUNC_1(VAR_0->par_out, VAR_4);

fail:
    return VAR_2;
}
