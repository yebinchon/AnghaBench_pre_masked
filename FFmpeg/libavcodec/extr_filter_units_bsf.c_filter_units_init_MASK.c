
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ extradata; int codec_id; } ;
struct TYPE_13__ {scalar_t__ nb_decompose_unit_types; int decompose_unit_types; } ;
struct TYPE_12__ {int par_out; TYPE_6__* par_in; TYPE_1__* priv_data; } ;
struct TYPE_11__ {TYPE_4__* cbc; int fragment; int type_list; int nb_types; scalar_t__ remove_types; int mode; scalar_t__ pass_types; } ;
typedef TYPE_1__ FilterUnitsContext ;
typedef int CodedBitstreamFragment ;
typedef TYPE_2__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__**,int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,int *,TYPE_6__*) ;
 int FUNC_5 (TYPE_4__*,int ,int *) ;
 int FUNC_6 (scalar_t__,int *,int *) ;

__attribute__((used)) static int FUNC_7(AVBSFContext *VAR_4)
{
    FilterUnitsContext *VAR_5 = VAR_4->priv_data;
    int VAR_6;

    if (VAR_5->pass_types && VAR_5->remove_types) {
        FUNC_1(VAR_4, VAR_0, "Exactly one of pass_types or "
               "remove_types is required.\n");
        return FUNC_0(VAR_1);
    }

    if (VAR_5->pass_types) {
        VAR_5->mode = VAR_2;
        VAR_6 = FUNC_6(VAR_5->pass_types,
                                          &VAR_5->type_list, &VAR_5->nb_types);
        if (VAR_6 < 0) {
            FUNC_1(VAR_4, VAR_0, "Failed to parse pass_types.\n");
            return VAR_6;
        }
    } else if (VAR_5->remove_types) {
        VAR_5->mode = VAR_3;
        VAR_6 = FUNC_6(VAR_5->remove_types,
                                          &VAR_5->type_list, &VAR_5->nb_types);
        if (VAR_6 < 0) {
            FUNC_1(VAR_4, VAR_0, "Failed to parse remove_types.\n");
            return VAR_6;
        }
    } else {
        return 0;
    }

    VAR_6 = FUNC_3(&VAR_5->cbc, VAR_4->par_in->codec_id, VAR_4);
    if (VAR_6 < 0)
        return VAR_6;


    VAR_5->cbc->decompose_unit_types = VAR_5->type_list;
    VAR_5->cbc->nb_decompose_unit_types = 0;

    if (VAR_4->par_in->extradata) {
        CodedBitstreamFragment *VAR_7 = &VAR_5->fragment;

        VAR_6 = FUNC_4(VAR_5->cbc, VAR_7, VAR_4->par_in);
        if (VAR_6 < 0) {
            FUNC_1(VAR_4, VAR_0, "Failed to read extradata.\n");
        } else {
            VAR_6 = FUNC_5(VAR_5->cbc, VAR_4->par_out, VAR_7);
            if (VAR_6 < 0)
                FUNC_1(VAR_4, VAR_0, "Failed to write extradata.\n");
        }

        FUNC_2(VAR_5->cbc, VAR_7);
    }

    return VAR_6;
}
