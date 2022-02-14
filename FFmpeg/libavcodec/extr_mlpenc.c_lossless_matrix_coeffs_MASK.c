
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum MLPChMode { ____Placeholder_MLPChMode } MLPChMode ;
struct TYPE_7__ {int count; int* outch; int** coeff; int** forco; unsigned int* shift; } ;
struct TYPE_9__ {TYPE_1__ matrix_params; } ;
struct TYPE_8__ {int num_channels; TYPE_3__* cur_decoding_params; } ;
typedef TYPE_1__ MatrixParams ;
typedef TYPE_2__ MLPEncodeContext ;
typedef TYPE_3__ DecodingParams ;






 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(MLPEncodeContext *VAR_0)
{
    DecodingParams *VAR_1 = VAR_0->cur_decoding_params;
    MatrixParams *VAR_2 = &VAR_1->matrix_params;
    unsigned int VAR_3 = 0;
    unsigned int VAR_4;
    int VAR_5;
    enum MLPChMode VAR_6;


    if (VAR_0->num_channels - 2 != 2) {
        VAR_2->count = 0;
        return;
    }

    VAR_6 = FUNC_1(VAR_0);

    switch(VAR_6) {

        case 129:
        case 131:
            VAR_2->count = 0;
            break;
        case 130:
            VAR_2->count = 1;
            VAR_2->outch[0] = 1;
            VAR_2->coeff[0][0] = 1 << 14; VAR_2->coeff[0][1] = -(1 << 14);
            VAR_2->coeff[0][2] = 0 << 14; VAR_2->coeff[0][2] = 0 << 14;
            VAR_2->forco[0][0] = 1 << 14; VAR_2->forco[0][1] = -(1 << 14);
            VAR_2->forco[0][2] = 0 << 14; VAR_2->forco[0][2] = 0 << 14;
            break;
        case 128:
            VAR_2->count = 1;
            VAR_2->outch[0] = 0;
            VAR_2->coeff[0][0] = 1 << 14; VAR_2->coeff[0][1] = 1 << 14;
            VAR_2->coeff[0][2] = 0 << 14; VAR_2->coeff[0][2] = 0 << 14;
            VAR_2->forco[0][0] = 1 << 14; VAR_2->forco[0][1] = -(1 << 14);
            VAR_2->forco[0][2] = 0 << 14; VAR_2->forco[0][2] = 0 << 14;
            break;
    }

    for (VAR_5 = 0; VAR_5 < VAR_2->count; VAR_5++)
        FUNC_0(VAR_0, VAR_5);

    for (VAR_4 = 0; VAR_4 < VAR_0->num_channels; VAR_4++)
        VAR_2->shift[VAR_4] = VAR_3;
}
