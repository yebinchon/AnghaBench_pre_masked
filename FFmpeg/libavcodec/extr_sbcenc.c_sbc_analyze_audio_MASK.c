
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sbc_frame {int subbands; int channels; int blocks; scalar_t__** sb_sample_f; } ;
typedef int int16_t ;
struct TYPE_5__ {int increment; int (* sbc_analyze_8s ) (TYPE_1__*,int *,scalar_t__,scalar_t__) ;int position; int ** X; int (* sbc_analyze_4s ) (TYPE_1__*,int *,scalar_t__,scalar_t__) ;} ;
typedef TYPE_1__ SBCDSPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(SBCDSPContext *VAR_1, struct sbc_frame *VAR_2)
{
    int VAR_3, VAR_4;
    int16_t *VAR_5;

    switch (VAR_2->subbands) {
    case 4:
        for (VAR_3 = 0; VAR_3 < VAR_2->channels; VAR_3++) {
            VAR_5 = &VAR_1->X[VAR_3][VAR_1->position - 4 *
                    VAR_1->increment + VAR_2->blocks * 4];
            for (VAR_4 = 0; VAR_4 < VAR_2->blocks;
                        VAR_4 += VAR_1->increment) {
                VAR_1->sbc_analyze_4s(
                    VAR_1, VAR_5,
                    VAR_2->sb_sample_f[VAR_4][VAR_3],
                    VAR_2->sb_sample_f[VAR_4 + 1][VAR_3] -
                    VAR_2->sb_sample_f[VAR_4][VAR_3]);
                VAR_5 -= 4 * VAR_1->increment;
            }
        }
        return VAR_2->blocks * 4;

    case 8:
        for (VAR_3 = 0; VAR_3 < VAR_2->channels; VAR_3++) {
            VAR_5 = &VAR_1->X[VAR_3][VAR_1->position - 8 *
                    VAR_1->increment + VAR_2->blocks * 8];
            for (VAR_4 = 0; VAR_4 < VAR_2->blocks;
                        VAR_4 += VAR_1->increment) {
                VAR_1->sbc_analyze_8s(
                    VAR_1, VAR_5,
                    VAR_2->sb_sample_f[VAR_4][VAR_3],
                    VAR_2->sb_sample_f[VAR_4 + 1][VAR_3] -
                    VAR_2->sb_sample_f[VAR_4][VAR_3]);
                VAR_5 -= 8 * VAR_1->increment;
            }
        }
        return VAR_2->blocks * 8;

    default:
        return FUNC_0(VAR_0);
    }
}
