
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int color_primaries; int matrix_coefficients; } ;
typedef TYPE_1__ ProresMetadataContext ;
typedef TYPE_2__ AVBSFContext ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(AVBSFContext *VAR_2)
{
    ProresMetadataContext *VAR_3 = VAR_2->priv_data;

    switch (VAR_3->color_primaries) {
    case -1:
    case 0:
    case 134:
    case 135:
    case 133:
    case 136:
    case 132:
    case 131:
        break;
    default:
        FUNC_1(VAR_2, VAR_0, "Color primaries %d is not a valid value\n", VAR_3->color_primaries);
        return FUNC_0(VAR_1);
    }

    switch (VAR_3->matrix_coefficients) {
    case -1:
    case 0:
    case 129:
    case 128:
    case 130:
        break;
    default:
        FUNC_1(VAR_2, VAR_0, "Colorspace %d is not a valid value\n", VAR_3->matrix_coefficients);
        return FUNC_0(VAR_1);
    }

    return 0;
}
