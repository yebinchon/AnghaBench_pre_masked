
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* priv_data; TYPE_1__* internal; void* par_out; void* par_in; TYPE_2__ const* filter; int * av_class; } ;
struct TYPE_9__ {int priv_data_size; int * priv_class; } ;
struct TYPE_8__ {int buffer_pkt; } ;
typedef int AVClass ;
typedef TYPE_2__ AVBitStreamFilter ;
typedef TYPE_3__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__**) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 () ;
 void* FUNC_5 () ;
 int VAR_1 ;

int FUNC_6(const AVBitStreamFilter *VAR_2, AVBSFContext **VAR_3)
{
    AVBSFContext *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_2(sizeof(*VAR_4));
    if (!VAR_4)
        return FUNC_0(VAR_0);

    VAR_4->av_class = &VAR_1;
    VAR_4->filter = VAR_2;

    VAR_4->par_in = FUNC_5();
    VAR_4->par_out = FUNC_5();
    if (!VAR_4->par_in || !VAR_4->par_out) {
        VAR_5 = FUNC_0(VAR_0);
        goto fail;
    }

    VAR_4->internal = FUNC_2(sizeof(*VAR_4->internal));
    if (!VAR_4->internal) {
        VAR_5 = FUNC_0(VAR_0);
        goto fail;
    }

    VAR_4->internal->buffer_pkt = FUNC_4();
    if (!VAR_4->internal->buffer_pkt) {
        VAR_5 = FUNC_0(VAR_0);
        goto fail;
    }

    FUNC_3(VAR_4);


    if (VAR_2->priv_data_size) {
        VAR_4->priv_data = FUNC_2(VAR_2->priv_data_size);
        if (!VAR_4->priv_data) {
            VAR_5 = FUNC_0(VAR_0);
            goto fail;
        }
        if (VAR_2->priv_class) {
            *(const AVClass **)VAR_4->priv_data = VAR_2->priv_class;
            FUNC_3(VAR_4->priv_data);
        }
    }

    *VAR_3 = VAR_4;
    return 0;
fail:
    FUNC_1(&VAR_4);
    return VAR_5;
}
