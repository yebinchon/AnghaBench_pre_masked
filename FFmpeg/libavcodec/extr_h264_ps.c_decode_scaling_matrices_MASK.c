
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_6__ {scalar_t__ transform_8x8_mode; } ;
struct TYPE_5__ {int chroma_format_idc; int const** scaling_matrix8; int const** scaling_matrix4; scalar_t__ scaling_matrix_present; } ;
typedef TYPE_1__ SPS ;
typedef TYPE_2__ PPS ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int const*,int,int const*,int const*) ;
 int const** VAR_0 ;
 int const** VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(GetBitContext *VAR_2, const SPS *VAR_3,
                                    const PPS *VAR_4, int VAR_5,
                                    uint8_t(*VAR_6)[16],
                                    uint8_t(*VAR_7)[64])
{
    int VAR_8 = !VAR_5 && VAR_3->scaling_matrix_present;
    const uint8_t *VAR_9[4] = {
        VAR_8 ? VAR_3->scaling_matrix4[0] : VAR_0[0],
        VAR_8 ? VAR_3->scaling_matrix4[3] : VAR_0[1],
        VAR_8 ? VAR_3->scaling_matrix8[0] : VAR_1[0],
        VAR_8 ? VAR_3->scaling_matrix8[3] : VAR_1[1]
    };
    int VAR_10 = 0;
    if (FUNC_1(VAR_2)) {
        VAR_10 |= FUNC_0(VAR_2, VAR_6[0], 16, VAR_0[0], VAR_9[0]);
        VAR_10 |= FUNC_0(VAR_2, VAR_6[1], 16, VAR_0[0], VAR_6[0]);
        VAR_10 |= FUNC_0(VAR_2, VAR_6[2], 16, VAR_0[0], VAR_6[1]);
        VAR_10 |= FUNC_0(VAR_2, VAR_6[3], 16, VAR_0[1], VAR_9[1]);
        VAR_10 |= FUNC_0(VAR_2, VAR_6[4], 16, VAR_0[1], VAR_6[3]);
        VAR_10 |= FUNC_0(VAR_2, VAR_6[5], 16, VAR_0[1], VAR_6[4]);
        if (VAR_5 || VAR_4->transform_8x8_mode) {
            VAR_10 |= FUNC_0(VAR_2, VAR_7[0], 64, VAR_1[0], VAR_9[2]);
            VAR_10 |= FUNC_0(VAR_2, VAR_7[3], 64, VAR_1[1], VAR_9[3]);
            if (VAR_3->chroma_format_idc == 3) {
                VAR_10 |= FUNC_0(VAR_2, VAR_7[1], 64, VAR_1[0], VAR_7[0]);
                VAR_10 |= FUNC_0(VAR_2, VAR_7[4], 64, VAR_1[1], VAR_7[3]);
                VAR_10 |= FUNC_0(VAR_2, VAR_7[2], 64, VAR_1[0], VAR_7[1]);
                VAR_10 |= FUNC_0(VAR_2, VAR_7[5], 64, VAR_1[1], VAR_7[4]);
            }
        }
        if (!VAR_10)
            VAR_10 = VAR_5;
    }

    return VAR_10;
}
