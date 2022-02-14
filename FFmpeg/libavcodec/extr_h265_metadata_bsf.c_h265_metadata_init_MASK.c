
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


struct TYPE_20__ {int par_out; TYPE_12__* par_in; TYPE_2__* priv_data; } ;
struct TYPE_19__ {int nb_units; TYPE_1__* units; } ;
struct TYPE_18__ {scalar_t__ level; int cbc; TYPE_3__ access_unit; } ;
struct TYPE_17__ {scalar_t__ type; int content; } ;
struct TYPE_16__ {scalar_t__ extradata; } ;
typedef TYPE_2__ H265MetadataContext ;
typedef TYPE_3__ CodedBitstreamFragment ;
typedef TYPE_4__ AVBSFContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int *,int ,TYPE_4__*) ;
 int FUNC_3 (int ,TYPE_3__*,TYPE_12__*) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_8(AVBSFContext *VAR_5)
{
    H265MetadataContext *VAR_6 = VAR_5->priv_data;
    CodedBitstreamFragment *VAR_7 = &VAR_6->access_unit;
    int VAR_8, VAR_9;

    VAR_8 = FUNC_2(&VAR_6->cbc, VAR_0, VAR_5);
    if (VAR_8 < 0)
        return VAR_8;

    if (VAR_5->par_in->extradata) {
        VAR_8 = FUNC_3(VAR_6->cbc, VAR_7, VAR_5->par_in);
        if (VAR_8 < 0) {
            FUNC_0(VAR_5, VAR_1, "Failed to read extradata.\n");
            goto fail;
        }

        if (VAR_6->level == VAR_4)
            FUNC_5(VAR_5, VAR_7);

        for (VAR_9 = 0; VAR_9 < VAR_7->nb_units; VAR_9++) {
            if (VAR_7->units[VAR_9].type == VAR_3) {
                VAR_8 = FUNC_7(VAR_5, VAR_7->units[VAR_9].content);
                if (VAR_8 < 0)
                    goto fail;
            }
            if (VAR_7->units[VAR_9].type == VAR_2) {
                VAR_8 = FUNC_6(VAR_5, VAR_7->units[VAR_9].content);
                if (VAR_8 < 0)
                    goto fail;
            }
        }

        VAR_8 = FUNC_4(VAR_6->cbc, VAR_5->par_out, VAR_7);
        if (VAR_8 < 0) {
            FUNC_0(VAR_5, VAR_1, "Failed to write extradata.\n");
            goto fail;
        }
    }

    VAR_8 = 0;
fail:
    FUNC_1(VAR_6->cbc, VAR_7);
    return VAR_8;
}
