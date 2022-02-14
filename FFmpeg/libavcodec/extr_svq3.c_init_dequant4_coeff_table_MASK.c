
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int** dequant4_coeff; } ;
typedef TYPE_1__ SVQ3Context ;


 scalar_t__** VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_0(SVQ3Context *VAR_3)
{
    int VAR_4, VAR_5;
    const int VAR_6 = 51;

    for (VAR_4 = 0; VAR_4 < VAR_6 + 1; VAR_4++) {
        int VAR_7 = VAR_1[VAR_4] + 2;
        int VAR_8 = VAR_2[VAR_4];
        for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
            VAR_3->dequant4_coeff[VAR_4][(VAR_5 >> 2) | ((VAR_5 << 2) & 0xF)] =
                ((uint32_t)VAR_0[VAR_8][(VAR_5 & 1) + ((VAR_5 >> 2) & 1)] * 16) << VAR_7;
    }
}
