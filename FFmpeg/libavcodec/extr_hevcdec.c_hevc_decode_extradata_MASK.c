
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {int err_recognition; } ;
struct TYPE_8__ {TYPE_6__** sps_list; } ;
struct TYPE_7__ {TYPE_3__ ps; TYPE_4__* avctx; int apply_defdispwin; int nal_length_size; int is_nalff; int sei; } ;
typedef int HEVCSPS ;
typedef TYPE_1__ HEVCContext ;


 int FUNC_0 (TYPE_6__**) ;
 int FUNC_1 (TYPE_1__*,int const*) ;
 int FUNC_2 (int *,int,TYPE_3__*,int *,int *,int *,int ,int ,TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(HEVCContext *VAR_0, uint8_t *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    VAR_4 = FUNC_2(VAR_1, VAR_2, &VAR_0->ps, &VAR_0->sei, &VAR_0->is_nalff,
                                   &VAR_0->nal_length_size, VAR_0->avctx->err_recognition,
                                   VAR_0->apply_defdispwin, VAR_0->avctx);
    if (VAR_4 < 0)
        return VAR_4;


    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0->ps.sps_list); VAR_5++) {
        if (VAR_3 && VAR_0->ps.sps_list[VAR_5]) {
            const HEVCSPS *VAR_6 = (const HEVCSPS*)VAR_0->ps.sps_list[VAR_5]->data;
            FUNC_1(VAR_0, VAR_6);
            break;
        }
    }

    return 0;
}
