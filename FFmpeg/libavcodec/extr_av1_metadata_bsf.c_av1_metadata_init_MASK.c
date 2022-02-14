
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ extradata; } ;
struct TYPE_17__ {int nb_units; TYPE_1__* units; } ;
struct TYPE_20__ {int cbc; TYPE_3__ access_unit; } ;
struct TYPE_16__ {int sequence_header; } ;
struct TYPE_19__ {TYPE_2__ obu; } ;
struct TYPE_18__ {int par_out; TYPE_9__* par_in; TYPE_6__* priv_data; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_5__* content; } ;
typedef TYPE_3__ CodedBitstreamFragment ;
typedef TYPE_4__ AVBSFContext ;
typedef TYPE_5__ AV1RawOBU ;
typedef TYPE_6__ AV1MetadataContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int *,int ,TYPE_4__*) ;
 int FUNC_4 (int ,TYPE_3__*,TYPE_9__*) ;
 int FUNC_5 (int ,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(AVBSFContext *VAR_3)
{
    AV1MetadataContext *VAR_4 = VAR_3->priv_data;
    CodedBitstreamFragment *VAR_5 = &VAR_4->access_unit;
    AV1RawOBU *VAR_6;
    int VAR_7, VAR_8;

    VAR_7 = FUNC_3(&VAR_4->cbc, VAR_1, VAR_3);
    if (VAR_7 < 0)
        return VAR_7;

    if (VAR_3->par_in->extradata) {
        VAR_7 = FUNC_4(VAR_4->cbc, VAR_5, VAR_3->par_in);
        if (VAR_7 < 0) {
            FUNC_1(VAR_3, VAR_2, "Failed to read extradata.\n");
            goto fail;
        }

        for (VAR_8 = 0; VAR_8 < VAR_5->nb_units; VAR_8++) {
            if (VAR_5->units[VAR_8].type == VAR_0) {
                VAR_6 = VAR_5->units[VAR_8].content;
                VAR_7 = FUNC_0(VAR_3, &VAR_6->obu.sequence_header);
                if (VAR_7 < 0)
                    goto fail;
            }
        }

        VAR_7 = FUNC_5(VAR_4->cbc, VAR_3->par_out, VAR_5);
        if (VAR_7 < 0) {
            FUNC_1(VAR_3, VAR_2, "Failed to write extradata.\n");
            goto fail;
        }
    }

    VAR_7 = 0;
fail:
    FUNC_2(VAR_4->cbc, VAR_5);
    return VAR_7;
}
