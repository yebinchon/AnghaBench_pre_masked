
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int* ch_size; TYPE_2__** channels; TYPE_1__* avctx; } ;
struct TYPE_10__ {scalar_t__ nb_groups; } ;
struct TYPE_9__ {int err_recognition; } ;
typedef TYPE_3__ DBEContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_4(DBEContext *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    if ((VAR_7 = FUNC_2(VAR_1)) < 0)
        return VAR_7;

    for (VAR_5 = VAR_2; VAR_5 < VAR_3; VAR_5++) {
        if (!VAR_1->ch_size[VAR_5]) {
            VAR_1->channels[VAR_4][VAR_5].nb_groups = 0;
            continue;
        }
        if ((VAR_6 = FUNC_0(VAR_1, VAR_1->ch_size[VAR_5], VAR_7)) < 0)
            return VAR_6;
        if ((VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_4)) < 0) {
            if (VAR_1->avctx->err_recognition & VAR_0)
                return VAR_6;
            VAR_1->channels[VAR_4][VAR_5].nb_groups = 0;
        }
        if ((VAR_6 = FUNC_3(VAR_1, VAR_1->ch_size[VAR_5])) < 0)
            return VAR_6;
    }

    return FUNC_3(VAR_1, 1);
}
