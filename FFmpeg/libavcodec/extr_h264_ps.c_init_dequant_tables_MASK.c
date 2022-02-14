
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int*** dequant8_coeff; int*** dequant4_coeff; scalar_t__ transform_8x8_mode; } ;
struct TYPE_9__ {scalar_t__ transform_bypass; } ;
typedef TYPE_1__ SPS ;
typedef TYPE_2__ PPS ;


 int FUNC_0 (TYPE_2__*,TYPE_1__ const*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__ const*) ;
 int FUNC_2 (int***,int ,int) ;

__attribute__((used)) static void FUNC_3(PPS *VAR_0, const SPS *VAR_1)
{
    int VAR_2, VAR_3;
    FUNC_0(VAR_0, VAR_1);
    FUNC_2(VAR_0->dequant8_coeff, 0, sizeof(VAR_0->dequant8_coeff));

    if (VAR_0->transform_8x8_mode)
        FUNC_1(VAR_0, VAR_1);
    if (VAR_1->transform_bypass) {
        for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
            for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
                VAR_0->dequant4_coeff[VAR_2][0][VAR_3] = 1 << 6;
        if (VAR_0->transform_8x8_mode)
            for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
                for (VAR_3 = 0; VAR_3 < 64; VAR_3++)
                    VAR_0->dequant8_coeff[VAR_2][0][VAR_3] = 1 << 6;
    }
}
