
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int err_recognition; } ;
struct TYPE_8__ {int type; int size; int data; } ;
struct TYPE_6__ {int nb_nals; TYPE_3__* nals; } ;
struct TYPE_7__ {TYPE_5__* avctx; TYPE_1__ pkt; } ;
typedef TYPE_2__ H264Context ;
typedef TYPE_3__ H2645NAL ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (TYPE_5__*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(H264Context *VAR_2)
{
    int VAR_3 = 0;
    int VAR_4 = 0;
    int VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_2->pkt.nb_nals; VAR_5++) {
        H2645NAL *VAR_7 = &VAR_2->pkt.nals[VAR_5];
        GetBitContext VAR_8;





        switch (VAR_7->type) {
        case 128:
        case 130:
            VAR_3 = VAR_5;
            break;
        case 132:
        case 131:
        case 129:
            VAR_6 = FUNC_2(&VAR_8, VAR_7->data + 1, VAR_7->size - 1);
            if (VAR_6 < 0) {
                FUNC_0(VAR_2->avctx, VAR_1, "Invalid zero-sized VCL NAL unit\n");
                if (VAR_2->avctx->err_recognition & VAR_0)
                    return VAR_6;

                break;
            }
            if (!FUNC_1(&VAR_8) ||
                !VAR_4 ||
                VAR_4 != VAR_7->type)
                VAR_3 = VAR_5;
            if (!VAR_4)
                VAR_4 = VAR_7->type;
        }
    }

    return VAR_3;
}
