
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_15__ {int gr_code; int bw_code; int nb_groups; int nb_mstr_exp; TYPE_12__* groups; } ;
struct TYPE_14__ {int* rev_id; size_t prog_conf; int avctx; int gb; TYPE_2__** channels; } ;
struct TYPE_13__ {int nb_exponent; int* nb_bias_exp; } ;
typedef TYPE_1__ DBEContext ;
typedef TYPE_2__ DBEChannel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_12__*** VAR_3 ;
 void* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(DBEContext *VAR_7, int VAR_8, int VAR_9)
{
    DBEChannel *VAR_10 = &VAR_7->channels[VAR_9][VAR_8];
    int VAR_11, VAR_12;

    if (VAR_7->rev_id[VAR_8] > 1) {
        FUNC_1(VAR_7->avctx, "Encoder revision %d", VAR_7->rev_id[VAR_8]);
        return VAR_1;
    }

    if (VAR_8 == VAR_4[VAR_7->prog_conf]) {
        VAR_10->gr_code = 3;
        VAR_10->bw_code = 29;
    } else {
        VAR_10->gr_code = FUNC_2(&VAR_7->gb, 2);
        VAR_10->bw_code = FUNC_2(&VAR_7->gb, 3);
        if (VAR_10->gr_code == 3) {
            FUNC_0(VAR_7->avctx, VAR_2, "Invalid group type code\n");
            return VAR_0;
        }
    }

    VAR_10->nb_groups = VAR_5[VAR_10->gr_code];
    VAR_10->nb_mstr_exp = VAR_6[VAR_10->gr_code];

    for (VAR_11 = 0; VAR_11 < VAR_10->nb_groups; VAR_11++) {
        VAR_10->groups[VAR_11] = VAR_3[VAR_9][VAR_10->gr_code][VAR_11];
        if (VAR_10->nb_mstr_exp == 2) {
            VAR_10->groups[VAR_11].nb_exponent -= VAR_10->bw_code;
            VAR_10->groups[VAR_11].nb_bias_exp[1] -= VAR_10->bw_code;
        }
    }

    if ((VAR_12 = FUNC_5(VAR_7, VAR_10)) < 0)
        return VAR_12;
    if ((VAR_12 = FUNC_4(VAR_7, VAR_10)) < 0)
        return VAR_12;
    if ((VAR_12 = FUNC_6(VAR_7, VAR_10)) < 0)
        return VAR_12;
    if ((VAR_12 = FUNC_7(VAR_7, VAR_10)) < 0)
        return VAR_12;

    if (FUNC_3(&VAR_7->gb) < 0) {
        FUNC_0(VAR_7->avctx, VAR_2, "Read past end of channel %d\n", VAR_8);
        return VAR_0;
    }

    return 0;
}
