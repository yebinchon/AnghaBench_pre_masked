
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* priv_data; } ;
struct TYPE_14__ {int nb_units; TYPE_1__* units; } ;
struct TYPE_13__ {scalar_t__ mode; int nb_types; scalar_t__* type_list; int cbc; TYPE_3__ fragment; } ;
struct TYPE_12__ {scalar_t__ type; } ;
typedef TYPE_2__ FilterUnitsContext ;
typedef TYPE_3__ CodedBitstreamFragment ;
typedef int AVPacket ;
typedef TYPE_4__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (int ,TYPE_3__*,int) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_3__*,int *) ;
 int FUNC_7 (int ,int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(AVBSFContext *VAR_4, AVPacket *VAR_5)
{
    FilterUnitsContext *VAR_6 = VAR_4->priv_data;
    CodedBitstreamFragment *VAR_7 = &VAR_6->fragment;
    int VAR_8, VAR_9, VAR_10;

    VAR_8 = FUNC_3(VAR_4, VAR_5);
    if (VAR_8 < 0)
        return VAR_8;

    if (VAR_6->mode == VAR_2)
        return 0;

    VAR_8 = FUNC_6(VAR_6->cbc, VAR_7, VAR_5);
    if (VAR_8 < 0) {
        FUNC_1(VAR_4, VAR_0, "Failed to read packet.\n");
        goto fail;
    }

    for (VAR_9 = VAR_7->nb_units - 1; VAR_9 >= 0; VAR_9--) {
        for (VAR_10 = 0; VAR_10 < VAR_6->nb_types; VAR_10++) {
            if (VAR_7->units[VAR_9].type == VAR_6->type_list[VAR_10])
                break;
        }
        if (VAR_6->mode == VAR_3 ? VAR_10 < VAR_6->nb_types
                                : VAR_10 >= VAR_6->nb_types)
            FUNC_4(VAR_6->cbc, VAR_7, VAR_9);
    }

    if (VAR_7->nb_units == 0) {

        VAR_8 = FUNC_0(VAR_1);
        goto fail;
    }

    VAR_8 = FUNC_7(VAR_6->cbc, VAR_5, VAR_7);
    if (VAR_8 < 0) {
        FUNC_1(VAR_4, VAR_0, "Failed to write packet.\n");
        goto fail;
    }

fail:
    if (VAR_8 < 0)
        FUNC_2(VAR_5);
    FUNC_5(VAR_6->cbc, VAR_7);

    return VAR_8;
}
