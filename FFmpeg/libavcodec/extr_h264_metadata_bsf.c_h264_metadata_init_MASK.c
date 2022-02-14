
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ extradata; } ;
struct TYPE_16__ {int par_out; TYPE_9__* par_in; TYPE_2__* priv_data; } ;
struct TYPE_15__ {int nb_units; TYPE_1__* units; } ;
struct TYPE_14__ {int cbc; TYPE_3__ access_unit; } ;
struct TYPE_13__ {scalar_t__ type; int content; } ;
typedef TYPE_2__ H264MetadataContext ;
typedef TYPE_3__ CodedBitstreamFragment ;
typedef TYPE_4__ AVBSFContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int *,int ,TYPE_4__*) ;
 int FUNC_3 (int ,TYPE_3__*,TYPE_9__*) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_6(AVBSFContext *VAR_3)
{
    H264MetadataContext *VAR_4 = VAR_3->priv_data;
    CodedBitstreamFragment *VAR_5 = &VAR_4->access_unit;
    int VAR_6, VAR_7;

    VAR_6 = FUNC_2(&VAR_4->cbc, VAR_0, VAR_3);
    if (VAR_6 < 0)
        return VAR_6;

    if (VAR_3->par_in->extradata) {
        VAR_6 = FUNC_3(VAR_4->cbc, VAR_5, VAR_3->par_in);
        if (VAR_6 < 0) {
            FUNC_0(VAR_3, VAR_1, "Failed to read extradata.\n");
            goto fail;
        }

        for (VAR_7 = 0; VAR_7 < VAR_5->nb_units; VAR_7++) {
            if (VAR_5->units[VAR_7].type == VAR_2) {
                VAR_6 = FUNC_5(VAR_3, VAR_5->units[VAR_7].content);
                if (VAR_6 < 0)
                    goto fail;
            }
        }

        VAR_6 = FUNC_4(VAR_4->cbc, VAR_3->par_out, VAR_5);
        if (VAR_6 < 0) {
            FUNC_0(VAR_3, VAR_1, "Failed to write extradata.\n");
            goto fail;
        }
    }

    VAR_6 = 0;
fail:
    FUNC_1(VAR_4->cbc, VAR_5);
    return VAR_6;
}
