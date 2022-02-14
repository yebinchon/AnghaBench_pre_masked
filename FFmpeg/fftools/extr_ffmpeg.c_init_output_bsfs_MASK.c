
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int time_base_out; int par_out; TYPE_1__* filter; int time_base_in; int par_in; } ;
struct TYPE_9__ {int nb_bitstream_filters; TYPE_2__* st; TYPE_4__** bsf_ctx; } ;
struct TYPE_8__ {int time_base; int codecpar; } ;
struct TYPE_7__ {int name; } ;
typedef TYPE_3__ OutputStream ;
typedef TYPE_4__ AVBSFContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(OutputStream *VAR_1)
{
    AVBSFContext *VAR_2;
    int VAR_3, VAR_4;

    if (!VAR_1->nb_bitstream_filters)
        return 0;

    for (VAR_3 = 0; VAR_3 < VAR_1->nb_bitstream_filters; VAR_3++) {
        VAR_2 = VAR_1->bsf_ctx[VAR_3];

        VAR_4 = FUNC_2(VAR_2->par_in,
                                      VAR_3 ? VAR_1->bsf_ctx[VAR_3 - 1]->par_out : VAR_1->st->codecpar);
        if (VAR_4 < 0)
            return VAR_4;

        VAR_2->time_base_in = VAR_3 ? VAR_1->bsf_ctx[VAR_3 - 1]->time_base_out : VAR_1->st->time_base;

        VAR_4 = FUNC_0(VAR_2);
        if (VAR_4 < 0) {
            FUNC_1(((void*)0), VAR_0, "Error initializing bitstream filter: %s\n",
                   VAR_1->bsf_ctx[VAR_3]->filter->name);
            return VAR_4;
        }
    }

    VAR_2 = VAR_1->bsf_ctx[VAR_1->nb_bitstream_filters - 1];
    VAR_4 = FUNC_2(VAR_1->st->codecpar, VAR_2->par_out);
    if (VAR_4 < 0)
        return VAR_4;

    VAR_1->st->time_base = VAR_2->time_base_out;

    return 0;
}
