
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int codec_id; } ;
struct TYPE_6__ {TYPE_4__* par_in; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int avctx; scalar_t__ parser; } ;
typedef TYPE_1__ RemoveExtradataContext ;
typedef TYPE_2__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(AVBSFContext *VAR_1)
{
    RemoveExtradataContext *VAR_2 = VAR_1->priv_data;
    int VAR_3;

    VAR_2->parser = FUNC_1(VAR_1->par_in->codec_id);

    if (VAR_2->parser) {
        VAR_2->avctx = FUNC_2(((void*)0));
        if (!VAR_2->avctx)
            return FUNC_0(VAR_0);

        VAR_3 = FUNC_3(VAR_2->avctx, VAR_1->par_in);
        if (VAR_3 < 0)
            return VAR_3;
    }

    return 0;
}
